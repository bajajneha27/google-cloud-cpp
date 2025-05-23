// Copyright 2022 Google LLC
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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_MOCKS_MOCK_CONTAINER_ANALYSIS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_MOCKS_MOCK_CONTAINER_ANALYSIS_CONNECTION_H

#include "google/cloud/containeranalysis/v1/container_analysis_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace containeranalysis_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ContainerAnalysisConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ContainerAnalysisClient`. To do so,
 * construct an object of type `ContainerAnalysisClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockContainerAnalysisConnection
    : public containeranalysis_v1::ContainerAnalysisConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::devtools::containeranalysis::v1::
                           VulnerabilityOccurrencesSummary>,
              GetVulnerabilityOccurrencesSummary,
              (google::devtools::containeranalysis::v1::
                   GetVulnerabilityOccurrencesSummaryRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::devtools::containeranalysis::v1::ExportSBOMResponse>,
      ExportSBOM,
      (google::devtools::containeranalysis::v1::ExportSBOMRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_MOCKS_MOCK_CONTAINER_ANALYSIS_CONNECTION_H
