// Copyright 2023 Google LLC
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
// source: google/cloud/compute/routers/v1/routers.proto

#include "google/cloud/compute/routers/v1/internal/routers_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_routers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RoutersTracingConnection::RoutersTracingConnection(
    std::shared_ptr<compute_routers_v1::RoutersConnection> child)
    : child_(std::move(child)) {}

StreamRange<
    std::pair<std::string, google::cloud::cpp::compute::v1::RoutersScopedList>>
RoutersTracingConnection::AggregatedListRouters(
    google::cloud::cpp::compute::routers::v1::AggregatedListRoutersRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::AggregatedListRouters");
  internal::OTelScope scope(span);
  auto sr = child_->AggregatedListRouters(std::move(request));
  return internal::MakeTracedStreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::RoutersScopedList>>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::DeleteRouter(
    google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::DeleteRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRouter(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::DeleteRouter(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::DeleteRouter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteRouter(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::DeleteRouter(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::DeleteRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRouter(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::DeleteRoutePolicy(
    google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::DeleteRoutePolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRoutePolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::DeleteRoutePolicy(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::DeleteRoutePolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteRoutePolicy(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::DeleteRoutePolicy(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::DeleteRoutePolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteRoutePolicy(operation));
}

StatusOr<google::cloud::cpp::compute::v1::Router>
RoutersTracingConnection::GetRouter(
    google::cloud::cpp::compute::routers::v1::GetRouterRequest const& request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::GetRouter");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRouter(request));
}

StatusOr<google::cloud::cpp::compute::v1::NatIpInfoResponse>
RoutersTracingConnection::GetNatIpInfo(
    google::cloud::cpp::compute::routers::v1::GetNatIpInfoRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::GetNatIpInfo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNatIpInfo(request));
}

StatusOr<google::cloud::cpp::compute::v1::VmEndpointNatMappingsList>
RoutersTracingConnection::GetNatMappingInfo(
    google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::GetNatMappingInfo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNatMappingInfo(request));
}

StatusOr<google::cloud::cpp::compute::v1::RoutersGetRoutePolicyResponse>
RoutersTracingConnection::GetRoutePolicy(
    google::cloud::cpp::compute::routers::v1::GetRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::GetRoutePolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRoutePolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::RouterStatusResponse>
RoutersTracingConnection::GetRouterStatus(
    google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::GetRouterStatus");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRouterStatus(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::InsertRouter(
    google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::InsertRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertRouter(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::InsertRouter(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::InsertRouter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->InsertRouter(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::InsertRouter(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::InsertRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertRouter(operation));
}

StreamRange<google::cloud::cpp::compute::v1::Router>
RoutersTracingConnection::ListRouters(
    google::cloud::cpp::compute::routers::v1::ListRoutersRequest request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::ListRouters");
  internal::OTelScope scope(span);
  auto sr = child_->ListRouters(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Router>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::RoutersListBgpRoutes>
RoutersTracingConnection::ListBgpRoutes(
    google::cloud::cpp::compute::routers::v1::ListBgpRoutesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::ListBgpRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListBgpRoutes(request));
}

StatusOr<google::cloud::cpp::compute::v1::RoutersListRoutePolicies>
RoutersTracingConnection::ListRoutePolicies(
    google::cloud::cpp::compute::routers::v1::ListRoutePoliciesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::ListRoutePolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListRoutePolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::PatchRouter(
    google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::PatchRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRouter(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::PatchRouter(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::PatchRouter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->PatchRouter(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::PatchRouter(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::PatchRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRouter(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::PatchRoutePolicy(
    google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::PatchRoutePolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchRoutePolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::PatchRoutePolicy(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::PatchRoutePolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->PatchRoutePolicy(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::PatchRoutePolicy(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::PatchRoutePolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchRoutePolicy(operation));
}

StatusOr<google::cloud::cpp::compute::v1::RoutersPreviewResponse>
RoutersTracingConnection::Preview(
    google::cloud::cpp::compute::routers::v1::PreviewRequest const& request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::Preview");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Preview(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::UpdateRouter(
    google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::UpdateRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateRouter(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::UpdateRouter(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::UpdateRouter");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateRouter(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::UpdateRouter(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span =
      internal::MakeSpan("compute_routers_v1::RoutersConnection::UpdateRouter");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateRouter(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::UpdateRoutePolicy(
    google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::UpdateRoutePolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateRoutePolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersTracingConnection::UpdateRoutePolicy(
    NoAwaitTag,
    google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::UpdateRoutePolicy");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateRoutePolicy(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersTracingConnection::UpdateRoutePolicy(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_routers_v1::RoutersConnection::UpdateRoutePolicy");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateRoutePolicy(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_routers_v1::RoutersConnection>
MakeRoutersTracingConnection(
    std::shared_ptr<compute_routers_v1::RoutersConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RoutersTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1_internal
}  // namespace cloud
}  // namespace google
