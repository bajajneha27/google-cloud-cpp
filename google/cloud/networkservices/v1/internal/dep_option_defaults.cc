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
// source: google/cloud/networkservices/v1/dep.proto

#include "google/cloud/networkservices/v1/internal/dep_option_defaults.h"
#include "google/cloud/networkservices/v1/dep_connection.h"
#include "google/cloud/networkservices/v1/dep_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options DepServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_DEP_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_DEP_SERVICE_AUTHORITY",
      "networkservices.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<networkservices_v1::DepServiceRetryPolicyOption>()) {
    options.set<networkservices_v1::DepServiceRetryPolicyOption>(
        networkservices_v1::DepServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<networkservices_v1::DepServiceBackoffPolicyOption>()) {
    options.set<networkservices_v1::DepServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<networkservices_v1::DepServicePollingPolicyOption>()) {
    options.set<networkservices_v1::DepServicePollingPolicyOption>(
        GenericPollingPolicy<
            networkservices_v1::DepServiceRetryPolicyOption::Type,
            networkservices_v1::DepServiceBackoffPolicyOption::Type>(
            options.get<networkservices_v1::DepServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          networkservices_v1::DepServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        networkservices_v1::DepServiceConnectionIdempotencyPolicyOption>(
        networkservices_v1::MakeDefaultDepServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
