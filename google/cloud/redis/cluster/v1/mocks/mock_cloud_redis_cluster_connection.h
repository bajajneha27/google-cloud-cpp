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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_MOCKS_MOCK_CLOUD_REDIS_CLUSTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_MOCKS_MOCK_CLOUD_REDIS_CLUSTER_CONNECTION_H

#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace redis_cluster_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CloudRedisClusterConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CloudRedisClusterClient`. To do so,
 * construct an object of type `CloudRedisClusterClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCloudRedisClusterConnection
    : public redis_cluster_v1::CloudRedisClusterConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::redis::cluster::v1::Cluster>),
              ListClusters,
              (google::cloud::redis::cluster::v1::ListClustersRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::redis::cluster::v1::Cluster>, GetCluster,
      (google::cloud::redis::cluster::v1::GetClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCluster(Matcher<google::cloud::redis::cluster::v1::UpdateClusterRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
      UpdateCluster,
      (google::cloud::redis::cluster::v1::UpdateClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateCluster(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::UpdateClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateCluster(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              UpdateCluster, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCluster(Matcher<google::cloud::redis::cluster::v1::DeleteClusterRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::protobuf::Any>>, DeleteCluster,
      (google::cloud::redis::cluster::v1::DeleteClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCluster(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::DeleteClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteCluster(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::protobuf::Any>>, DeleteCluster,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCluster(Matcher<google::cloud::redis::cluster::v1::CreateClusterRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
      CreateCluster,
      (google::cloud::redis::cluster::v1::CreateClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCluster(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::CreateClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateCluster(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              CreateCluster, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>,
              GetClusterCertificateAuthority,
              (google::cloud::redis::cluster::v1::
                   GetClusterCertificateAuthorityRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RescheduleClusterMaintenance(Matcher<google::cloud::redis::cluster::v1::RescheduleClusterMaintenanceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              RescheduleClusterMaintenance,
              (google::cloud::redis::cluster::v1::
                   RescheduleClusterMaintenanceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RescheduleClusterMaintenance(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              RescheduleClusterMaintenance,
              (NoAwaitTag,
               google::cloud::redis::cluster::v1::
                   RescheduleClusterMaintenanceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RescheduleClusterMaintenance(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              RescheduleClusterMaintenance,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::redis::cluster::v1::BackupCollection>),
      ListBackupCollections,
      (google::cloud::redis::cluster::v1::ListBackupCollectionsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::redis::cluster::v1::BackupCollection>,
      GetBackupCollection,
      (google::cloud::redis::cluster::v1::GetBackupCollectionRequest const&
           request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::redis::cluster::v1::Backup>),
              ListBackups,
              (google::cloud::redis::cluster::v1::ListBackupsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::redis::cluster::v1::Backup>, GetBackup,
      (google::cloud::redis::cluster::v1::GetBackupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteBackup(Matcher<google::cloud::redis::cluster::v1::DeleteBackupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::protobuf::Any>>, DeleteBackup,
      (google::cloud::redis::cluster::v1::DeleteBackupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteBackup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteBackup,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::DeleteBackupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteBackup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::protobuf::Any>>, DeleteBackup,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportBackup(Matcher<google::cloud::redis::cluster::v1::ExportBackupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::redis::cluster::v1::Backup>>, ExportBackup,
      (google::cloud::redis::cluster::v1::ExportBackupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportBackup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportBackup,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::ExportBackupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ExportBackup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Backup>>,
              ExportBackup, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// BackupCluster(Matcher<google::cloud::redis::cluster::v1::BackupClusterRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
      BackupCluster,
      (google::cloud::redis::cluster::v1::BackupClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, BackupCluster(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, BackupCluster,
      (NoAwaitTag,
       google::cloud::redis::cluster::v1::BackupClusterRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, BackupCluster(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::redis::cluster::v1::Cluster>>,
              BackupCluster, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_MOCKS_MOCK_CLOUD_REDIS_CLUSTER_CONNECTION_H
