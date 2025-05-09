// Copyright 2025 Google LLC
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
// source: google/cloud/chronicle/v1/data_access_control.proto

#include "google/cloud/chronicle/v1/data_access_control_connection.h"
#include "google/cloud/chronicle/v1/data_access_control_options.h"
#include "google/cloud/chronicle/v1/internal/data_access_control_connection_impl.h"
#include "google/cloud/chronicle/v1/internal/data_access_control_option_defaults.h"
#include "google/cloud/chronicle/v1/internal/data_access_control_stub_factory.h"
#include "google/cloud/chronicle/v1/internal/data_access_control_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace chronicle_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataAccessControlServiceConnection::~DataAccessControlServiceConnection() =
    default;

StatusOr<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnection::CreateDataAccessLabel(
    google::cloud::chronicle::v1::CreateDataAccessLabelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnection::GetDataAccessLabel(
    google::cloud::chronicle::v1::GetDataAccessLabelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnection::ListDataAccessLabels(
    google::cloud::chronicle::v1::
        ListDataAccessLabelsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::chronicle::v1::DataAccessLabel>>();
}

StatusOr<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnection::UpdateDataAccessLabel(
    google::cloud::chronicle::v1::UpdateDataAccessLabelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataAccessControlServiceConnection::DeleteDataAccessLabel(
    google::cloud::chronicle::v1::DeleteDataAccessLabelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnection::CreateDataAccessScope(
    google::cloud::chronicle::v1::CreateDataAccessScopeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnection::GetDataAccessScope(
    google::cloud::chronicle::v1::GetDataAccessScopeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnection::ListDataAccessScopes(
    google::cloud::chronicle::v1::
        ListDataAccessScopesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::chronicle::v1::DataAccessScope>>();
}

StatusOr<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnection::UpdateDataAccessScope(
    google::cloud::chronicle::v1::UpdateDataAccessScopeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataAccessControlServiceConnection::DeleteDataAccessScope(
    google::cloud::chronicle::v1::DeleteDataAccessScopeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
DataAccessControlServiceConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
DataAccessControlServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataAccessControlServiceConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DataAccessControlServiceConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DataAccessControlServiceConnection>
MakeDataAccessControlServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DataAccessControlServicePolicyOptionList>(
      options, __func__);
  options = chronicle_v1_internal::DataAccessControlServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = chronicle_v1_internal::CreateDefaultDataAccessControlServiceStub(
      std::move(auth), options);
  return chronicle_v1_internal::MakeDataAccessControlServiceTracingConnection(
      std::make_shared<
          chronicle_v1_internal::DataAccessControlServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace chronicle_v1
}  // namespace cloud
}  // namespace google
