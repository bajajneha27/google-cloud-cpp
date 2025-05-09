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
// source:
// google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_REGION_INSTANCE_GROUPS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_REGION_INSTANCE_GROUPS_CLIENT_H

#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_instance_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionInstanceGroups resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class RegionInstanceGroupsClient {
 public:
  explicit RegionInstanceGroupsClient(
      std::shared_ptr<RegionInstanceGroupsConnection> connection,
      Options opts = {});
  ~RegionInstanceGroupsClient();

  ///@{
  /// @name Copy and move support
  RegionInstanceGroupsClient(RegionInstanceGroupsClient const&) = default;
  RegionInstanceGroupsClient& operator=(RegionInstanceGroupsClient const&) =
      default;
  RegionInstanceGroupsClient(RegionInstanceGroupsClient&&) = default;
  RegionInstanceGroupsClient& operator=(RegionInstanceGroupsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionInstanceGroupsClient const& a,
                         RegionInstanceGroupsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionInstanceGroupsClient const& a,
                         RegionInstanceGroupsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the specified instance group resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param instance_group  Name of the instance group resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InstanceGroup])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.GetInstanceGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L92}
  /// [google.cloud.cpp.compute.v1.InstanceGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_059.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::InstanceGroup> GetInstanceGroup(
      std::string const& project, std::string const& region,
      std::string const& instance_group, Options opts = {});

  // clang-format off
  ///
  /// Returns the specified instance group resource.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_groups.v1.GetInstanceGroupRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InstanceGroup])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.GetInstanceGroupRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L92}
  /// [google.cloud.cpp.compute.v1.InstanceGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_059.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::InstanceGroup> GetInstanceGroup(
      google::cloud::cpp::compute::region_instance_groups::v1::
          GetInstanceGroupRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of instance group resources contained within the
  /// specified region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.InstanceGroup], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.ListRegionInstanceGroupsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L189}
  /// [google.cloud.cpp.compute.v1.InstanceGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_059.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
  ListRegionInstanceGroups(std::string const& project,
                           std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of instance group resources contained within the
  /// specified region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_groups.v1.ListRegionInstanceGroupsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.InstanceGroup], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.ListRegionInstanceGroupsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L189}
  /// [google.cloud.cpp.compute.v1.InstanceGroup]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_059.proto#L34}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
  ListRegionInstanceGroups(google::cloud::cpp::compute::region_instance_groups::
                               v1::ListRegionInstanceGroupsRequest request,
                           Options opts = {});

  // clang-format off
  ///
  /// Lists the instances in the specified instance group and displays
  /// information about the named ports. Depending on the specified options, this
  /// method can list all instances or only the instances that are running. The
  /// orderBy query parameter is not supported.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/listInstances
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param instance_group  Name of the regional instance group for which we want to list the
  ///  instances.
  /// @param region_instance_groups_list_instances_request_resource  The RegionInstanceGroupsListInstancesRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.InstanceWithNamedPorts], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.ListInstancesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L107}
  /// [google.cloud.cpp.compute.v1.InstanceWithNamedPorts]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_059.proto#L96}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
  ListInstances(std::string const& project, std::string const& region,
                std::string const& instance_group,
                google::cloud::cpp::compute::v1::
                    RegionInstanceGroupsListInstancesRequest const&
                        region_instance_groups_list_instances_request_resource,
                Options opts = {});

  // clang-format off
  ///
  /// Lists the instances in the specified instance group and displays
  /// information about the named ports. Depending on the specified options, this
  /// method can list all instances or only the instances that are running. The
  /// orderBy query parameter is not supported.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/listInstances
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_groups.v1.ListInstancesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.InstanceWithNamedPorts], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.ListInstancesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L107}
  /// [google.cloud.cpp.compute.v1.InstanceWithNamedPorts]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_059.proto#L96}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
  ListInstances(google::cloud::cpp::compute::region_instance_groups::v1::
                    ListInstancesRequest request,
                Options opts = {});

  // clang-format off
  ///
  /// Sets the named ports for the specified regional instance group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/setNamedPorts
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param instance_group  The name of the regional instance group where the named ports are updated.
  /// @param region_instance_groups_set_named_ports_request_resource  The RegionInstanceGroupsSetNamedPortsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.SetNamedPortsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L261}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNamedPorts(
      std::string const& project, std::string const& region,
      std::string const& instance_group,
      google::cloud::cpp::compute::v1::
          RegionInstanceGroupsSetNamedPortsRequest const&
              region_instance_groups_set_named_ports_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief SetNamedPorts
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> SetNamedPorts(
      NoAwaitTag, std::string const& project, std::string const& region,
      std::string const& instance_group,
      google::cloud::cpp::compute::v1::
          RegionInstanceGroupsSetNamedPortsRequest const&
              region_instance_groups_set_named_ports_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the named ports for the specified regional instance group.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceGroups/setNamedPorts
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_groups.v1.SetNamedPortsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_groups.v1.SetNamedPortsRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto#L261}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNamedPorts(
      google::cloud::cpp::compute::region_instance_groups::v1::
          SetNamedPortsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief SetNamedPorts
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> SetNamedPorts(
      NoAwaitTag,
      google::cloud::cpp::compute::region_instance_groups::v1::
          SetNamedPortsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief SetNamedPorts
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetNamedPorts(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<RegionInstanceGroupsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_REGION_INSTANCE_GROUPS_CLIENT_H
