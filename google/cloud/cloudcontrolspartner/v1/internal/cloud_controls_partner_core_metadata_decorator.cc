// Copyright 2024 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/cloudcontrolspartner/v1/core.proto

#include "google/cloud/cloudcontrolspartner/v1/internal/cloud_controls_partner_core_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/cloudcontrolspartner/v1/core.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace cloudcontrolspartner_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudControlsPartnerCoreMetadata::CloudControlsPartnerCoreMetadata(
    std::shared_ptr<CloudControlsPartnerCoreStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreMetadata::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::GetWorkloadRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWorkload(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::ListWorkloadsResponse>
CloudControlsPartnerCoreMetadata::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::ListWorkloadsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListWorkloads(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreMetadata::GetCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::GetCustomerRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomer(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::ListCustomersResponse>
CloudControlsPartnerCoreMetadata::ListCustomers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::ListCustomersRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomers(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::EkmConnections>
CloudControlsPartnerCoreMetadata::GetEkmConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::GetEkmConnectionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEkmConnections(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::PartnerPermissions>
CloudControlsPartnerCoreMetadata::GetPartnerPermissions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::GetPartnerPermissionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPartnerPermissions(context, options, request);
}

StatusOr<
    google::cloud::cloudcontrolspartner::v1::ListAccessApprovalRequestsResponse>
CloudControlsPartnerCoreMetadata::ListAccessApprovalRequests(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::
        ListAccessApprovalRequestsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAccessApprovalRequests(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Partner>
CloudControlsPartnerCoreMetadata::GetPartner(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::GetPartnerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPartner(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreMetadata::CreateCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::CreateCustomerRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCustomer(context, options, request);
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreMetadata::UpdateCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::UpdateCustomerRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("customer.name=",
                           internal::UrlEncode(request.customer().name())));
  return child_->UpdateCustomer(context, options, request);
}

Status CloudControlsPartnerCoreMetadata::DeleteCustomer(
    grpc::ClientContext& context, Options const& options,
    google::cloud::cloudcontrolspartner::v1::DeleteCustomerRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCustomer(context, options, request);
}

void CloudControlsPartnerCoreMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudControlsPartnerCoreMetadata::SetMetadata(grpc::ClientContext& context,
                                                   Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudcontrolspartner_v1_internal
}  // namespace cloud
}  // namespace google
