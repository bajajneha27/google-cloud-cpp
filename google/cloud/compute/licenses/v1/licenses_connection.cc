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
// source: google/cloud/compute/licenses/v1/licenses.proto

#include "google/cloud/compute/licenses/v1/licenses_connection.h"
#include "google/cloud/compute/licenses/v1/internal/licenses_option_defaults.h"
#include "google/cloud/compute/licenses/v1/internal/licenses_tracing_connection.h"
#include "google/cloud/compute/licenses/v1/licenses_options.h"
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
namespace compute_licenses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicensesConnection::~LicensesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesConnection::DeleteLicense(
    google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
LicensesConnection::DeleteLicense(
    NoAwaitTag,
    google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesConnection::DeleteLicense(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::License>
LicensesConnection::GetLicense(
    google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesConnection::GetIamPolicy(
    google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesConnection::InsertLicense(
    google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
LicensesConnection::InsertLicense(
    NoAwaitTag,
    google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesConnection::InsertLicense(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::License>
LicensesConnection::ListLicenses(
    google::cloud::cpp::compute::licenses::v1::
        ListLicensesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::License>>();
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesConnection::SetIamPolicy(
    google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicensesConnection::TestIamPermissions(
    google::cloud::cpp::compute::licenses::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesConnection::UpdateLicense(
    google::cloud::cpp::compute::licenses::v1::UpdateLicenseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
LicensesConnection::UpdateLicense(
    NoAwaitTag,
    google::cloud::cpp::compute::licenses::v1::UpdateLicenseRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesConnection::UpdateLicense(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1
}  // namespace cloud
}  // namespace google
