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
// source: google/cloud/devicestreaming/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVICESTREAMING_V1_INTERNAL_DIRECT_ACCESS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVICESTREAMING_V1_INTERNAL_DIRECT_ACCESS_CONNECTION_IMPL_H

#include "google/cloud/devicestreaming/v1/direct_access_connection.h"
#include "google/cloud/devicestreaming/v1/direct_access_connection_idempotency_policy.h"
#include "google/cloud/devicestreaming/v1/direct_access_options.h"
#include "google/cloud/devicestreaming/v1/internal/direct_access_retry_traits.h"
#include "google/cloud/devicestreaming/v1/internal/direct_access_stub.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace devicestreaming_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DirectAccessServiceConnectionImpl
    : public devicestreaming_v1::DirectAccessServiceConnection {
 public:
  ~DirectAccessServiceConnectionImpl() override = default;

  DirectAccessServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<devicestreaming_v1_internal::DirectAccessServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::devicestreaming::v1::DeviceSession>
  CreateDeviceSession(
      google::cloud::devicestreaming::v1::CreateDeviceSessionRequest const&
          request) override;

  StreamRange<google::cloud::devicestreaming::v1::DeviceSession>
  ListDeviceSessions(
      google::cloud::devicestreaming::v1::ListDeviceSessionsRequest request)
      override;

  StatusOr<google::cloud::devicestreaming::v1::DeviceSession> GetDeviceSession(
      google::cloud::devicestreaming::v1::GetDeviceSessionRequest const&
          request) override;

  Status CancelDeviceSession(
      google::cloud::devicestreaming::v1::CancelDeviceSessionRequest const&
          request) override;

  StatusOr<google::cloud::devicestreaming::v1::DeviceSession>
  UpdateDeviceSession(
      google::cloud::devicestreaming::v1::UpdateDeviceSessionRequest const&
          request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::devicestreaming::v1::AdbMessage,
      google::cloud::devicestreaming::v1::DeviceMessage>>
  AsyncAdbConnect() override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<devicestreaming_v1_internal::DirectAccessServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace devicestreaming_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVICESTREAMING_V1_INTERNAL_DIRECT_ACCESS_CONNECTION_IMPL_H
