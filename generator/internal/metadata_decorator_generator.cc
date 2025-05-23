// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/metadata_decorator_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/http_option_utils.h"
#include "generator/internal/longrunning.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include "generator/internal/routing.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/url_encode.h"
#include "absl/strings/str_split.h"
#include "absl/strings/string_view.h"
#include <google/protobuf/descriptor.h>
#include <algorithm>

namespace google {
namespace cloud {
namespace generator_internal {
namespace {

enum ContextType { kPointer, kReference };

std::string SetMetadataText(google::protobuf::MethodDescriptor const& method,
                            ContextType context_type,
                            absl::string_view options) {
  std::string const context = context_type == kPointer ? "*context" : "context";

  auto info = ParseExplicitRoutingHeader(method);
  // If there are no explicit routing headers, we fall back to the routing as
  // defined by the google.api.http annotation
  if (info.empty()) {
    if (HasHttpRoutingHeader(method)) {
      return absl::StrCat("  SetMetadata(", context, ", ", options,
                          ", absl::StrCat($method_request_params$));");
    }
    // If the method does not have a `google.api.routing` or `google.api.http`
    // annotation, we do not send the "x-goog-request-params" header.
    return absl::StrCat("  SetMetadata(", context, ", ", options, ");");
  }

  // clang-format off
  std::string text;
  text += "  std::vector<std::string> params;\n";
  text += "  params.reserve(" + std::to_string(info.size()) + ");\n\n";
  for (auto const& kv : info) {
    // In the simplest (and probably most common) cases where no regular
    // expression matching is needed for a given routing parameter key, we skip
    // the static loading of `RoutingMatcher`s and simply use if statements.
    if (std::all_of(
            kv.second.begin(), kv.second.end(),
            [](RoutingParameter const& rp) { return rp.pattern == "(.*)"; })) {
      auto const* sep = "  ";
      for (auto const& rp : kv.second){
        text += sep;
        text += "if (!request." + rp.field_name + "().empty()) {\n";
        text += "    params.push_back(absl::StrCat(\"" + kv.first + "=\", internal::UrlEncode(request." + rp.field_name + "())));\n";
        text += "  }";
        sep = " else ";
      }
      text += "\n\n";
      continue;
    }
    text += "  static auto* " + kv.first + "_matcher = []{\n";
    text += "    return new google::cloud::internal::RoutingMatcher<$request_type$>{\n";
    text += "      \"" + internal::UrlEncode(kv.first) + "=\", {\n";
    for (auto const& rp : kv.second) {
      text += "      {[]($request_type$ const& request) -> std::string const& {\n";
      text += "        return request." + rp.field_name + "();\n";
      text += "      },\n";
      // In the special match-all case, we do not bother to set a regex.
      if (rp.pattern == "(.*)") {
        text += "      absl::nullopt},\n";
      } else {
        text += "      std::regex{\"" + rp.pattern + "\", std::regex::optimize}},\n";
      }
    }
    text += "      }};\n";
    text += "  }();\n";
    text += "  " + kv.first + "_matcher->AppendParam(request, params);\n\n";
  }
  text += "  if (params.empty()) {\n";
  text += absl::StrCat("    SetMetadata(", context, ", ", options, ");\n");
  text += "  } else {\n";
  text += absl::StrCat("    SetMetadata(", context, ", ", options, ", absl::StrJoin(params, \"&\"));\n");
  text += "  }";
  return text;
  // clang-format on
}

}  // namespace

MetadataDecoratorGenerator::MetadataDecoratorGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context,
    std::vector<MixinMethod> const& mixin_methods)
    : StubGeneratorBase("metadata_header_path", "metadata_cc_path",
                        service_descriptor, std::move(service_vars),
                        std::move(service_method_vars), context,
                        mixin_methods) {}

Status MetadataDecoratorGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("stub_header_path"), "google/cloud/options.h",
                       "google/cloud/version.h"});
  HeaderProtobufGenCodeIncludes({HasLongrunningMethod()
                                     ? "google/longrunning/operations.grpc.pb.h"
                                     : ""});
  HeaderSystemIncludes({"map", "memory", "string"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // metadata decorator class
  HeaderPrint(R"""(
class $metadata_class_name$ : public $stub_class_name$ {
 public:
  ~$metadata_class_name$() override = default;
  $metadata_class_name$(
      std::shared_ptr<$stub_class_name$> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");
)""");

  HeaderPrintPublicMethods();

  HeaderPrint(R"""(
 private:
  void SetMetadata(grpc::ClientContext& context,
                   Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<$stub_class_name$> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};
)""");

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status MetadataDecoratorGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
            "\n"
            "// Generated by the Codegen C++ plugin.\n"
            "// If you make any local changes, they will be lost.\n"
            "// source: $proto_file_name$\n");
  // clang-format on

  // includes
  CcPrint("\n");
  CcLocalIncludes(
      {vars("metadata_header_path"),
       "google/cloud/internal/absl_str_cat_quiet.h",
       HasExplicitRoutingMethod()
           ? "google/cloud/internal/absl_str_join_quiet.h"
           : "",
       "google/cloud/internal/api_client_header.h",
       "google/cloud/grpc_options.h",
       HasExplicitRoutingMethod() ? "google/cloud/internal/routing_matcher.h"
                                  : "",
       "google/cloud/status_or.h", "google/cloud/internal/url_encode.h"});
  CcProtobufGenCodeIncludes({vars("proto_grpc_header_path")});
  CcSystemIncludes({"memory", "string", "utility", "vector"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // constructor
  CcPrint(R"""(
$metadata_class_name$::$metadata_class_name$(
    std::shared_ptr<$stub_class_name$> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}
)""");

  // metadata decorator class member methods
  for (auto const& method : methods()) {
    if (IsStreamingWrite(method)) {
      CcPrintMethod(method, __FILE__, __LINE__,
                    R"""(
std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    $request_type$,
    $response_type$>>
$metadata_class_name$::$method_name$(
    std::shared_ptr<grpc::ClientContext> context,
    Options const& options) {
  SetMetadata(*context, options);
  return child_->$method_name$(std::move(context), options);
}
)""");
      continue;
    }
    if (IsBidirStreaming(method)) {
      // Asynchronous streaming writes do not consume a request. Typically, the
      // first `Write()` call contains any relevant data to "start" the stream.
      // Thus, the decorator cannot add any routing instructions. The caller
      // should initialize `context` with any such instructions.
      CcPrintMethod(method, __FILE__, __LINE__,
                    R"""(
std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      $request_type$,
      $response_type$>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  SetMetadata(*context, *options);
  return child_->Async$method_name$(cq, std::move(context), std::move(options));
}
)""");
      continue;
    }
    if (IsLongrunningOperation(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<google::longrunning::Operation>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    $request_type$ const& request) {
)""");
      CcPrintMethod(method, __FILE__, __LINE__,
                    SetMetadataText(method, kPointer, "*options"));
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
  return child_->Async$method_name$(
      cq, std::move(context), std::move(options), request);
}
)""");
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
StatusOr<google::longrunning::Operation>
$metadata_class_name$::$method_name$(
    grpc::ClientContext& context,
    Options options,
    $request_type$ const& request) {
)""");
      CcPrintMethod(method, __FILE__, __LINE__,
                    SetMetadataText(method, kReference, "options"));
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
  return child_->$method_name$(context, options, request);
}
)""");

      continue;
    }
    if (IsStreamingRead(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<google::cloud::internal::StreamingReadRpc<$response_type$>>
$metadata_class_name$::$method_name$(
    std::shared_ptr<grpc::ClientContext> context,
    Options const& options,
    $request_type$ const& request) {
)""");
      CcPrintMethod(method, __FILE__, __LINE__,
                    SetMetadataText(method, kPointer, "options"));
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
  return child_->$method_name$(std::move(context), options, request);
}
)""");
      continue;
    }
    CcPrintMethod(method, __FILE__, __LINE__, "\n$return_type$");
    CcPrintMethod(method, __FILE__, __LINE__, R"""(
$metadata_class_name$::$method_name$(
    grpc::ClientContext& context,
    Options const& options,
    $request_type$ const& request) {
)""");
    CcPrintMethod(method, __FILE__, __LINE__,
                  SetMetadataText(method, kReference, "options"));
    CcPrintMethod(method, __FILE__, __LINE__, R"""(
  return child_->$method_name$(context, options, request);
}
)""");
  }

  for (auto const& method : async_methods()) {
    // Nothing to do, these are always asynchronous.
    if (IsBidirStreaming(method) || IsLongrunningOperation(method)) continue;
    if (IsStreamingRead(method)) {
      auto const definition = absl::StrCat(
          R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      $response_type$>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    $request_type$ const& request) {
)""",
          SetMetadataText(method, kPointer, "*options"),
          R"""(
  return child_->Async$method_name$(
      cq, std::move(context), std::move(options), request);
}
)""");
      CcPrintMethod(method, __FILE__, __LINE__, definition);
      continue;
    }
    if (IsStreamingWrite(method)) {
      // Asynchronous streaming writes do not consume a request. Typically, the
      // first `Write()` call contains any relevant data to "start" the stream.
      // Thus, the decorator cannot add any routing instructions. The caller
      // should initialize `context` with any such instructions.
      auto const definition = absl::StrCat(
          R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    $request_type$, $response_type$>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  SetMetadata(*context, *options);
  return child_->Async$method_name$(cq, std::move(context), std::move(options));
}
)""");
      CcPrintMethod(method, __FILE__, __LINE__, definition);
      continue;
    }
    CcPrintMethod(method, __FILE__, __LINE__, "\nfuture<$return_type$>");
    CcPrintMethod(method, __FILE__, __LINE__, R"""(
$metadata_class_name$::Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      $request_type$ const& request) {
)""");
    CcPrintMethod(method, __FILE__, __LINE__,
                  SetMetadataText(method, kPointer, "*options"));
    CcPrintMethod(method, __FILE__, __LINE__, R"""(
  return child_->Async$method_name$(
      cq, std::move(context), std::move(options), request);
}
)""");
  }

  // long running operation support methods
  if (HasLongrunningMethod()) {
    CcPrint(R"""(
future<StatusOr<google::longrunning::Operation>>
$metadata_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(
      cq, std::move(context), std::move(options), request);
}

future<Status> $metadata_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(
      cq, std::move(context), std::move(options), request);
}
)""");
  }

  CcPrint(R"""(
void $metadata_class_name$::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void $metadata_class_name$::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
)""");
  if (HasApiVersion()) {
    CcPrint(
        R"""(  context.AddMetadata("x-goog-api-version", "$api_version$");
)""");
  }
  CcPrint(R"""(  google::cloud::internal::SetMetadata(
      context, options, fixed_metadata_, api_client_header_);
}
)""");

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
