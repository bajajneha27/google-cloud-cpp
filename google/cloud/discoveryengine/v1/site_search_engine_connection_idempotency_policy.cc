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
// source: google/cloud/discoveryengine/v1/site_search_engine_service.proto

#include "google/cloud/discoveryengine/v1/site_search_engine_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SiteSearchEngineServiceConnectionIdempotencyPolicy::
    ~SiteSearchEngineServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<SiteSearchEngineServiceConnectionIdempotencyPolicy>
SiteSearchEngineServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SiteSearchEngineServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::GetSiteSearchEngine(
    google::cloud::discoveryengine::v1::GetSiteSearchEngineRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::CreateTargetSite(
    google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::BatchCreateTargetSites(
    google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::GetTargetSite(
    google::cloud::discoveryengine::v1::GetTargetSiteRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::UpdateTargetSite(
    google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::DeleteTargetSite(
    google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::ListTargetSites(
    google::cloud::discoveryengine::v1::ListTargetSitesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::CreateSitemap(
    google::cloud::discoveryengine::v1::CreateSitemapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::DeleteSitemap(
    google::cloud::discoveryengine::v1::DeleteSitemapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::FetchSitemaps(
    google::cloud::discoveryengine::v1::FetchSitemapsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::EnableAdvancedSiteSearch(
    google::cloud::discoveryengine::v1::
        EnableAdvancedSiteSearchRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::DisableAdvancedSiteSearch(
    google::cloud::discoveryengine::v1::
        DisableAdvancedSiteSearchRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::RecrawlUris(
    google::cloud::discoveryengine::v1::RecrawlUrisRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
SiteSearchEngineServiceConnectionIdempotencyPolicy::BatchVerifyTargetSites(
    google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::
    FetchDomainVerificationStatus(
        google::cloud::discoveryengine::v1::
            FetchDomainVerificationStatusRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SiteSearchEngineServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<SiteSearchEngineServiceConnectionIdempotencyPolicy>
MakeDefaultSiteSearchEngineServiceConnectionIdempotencyPolicy() {
  return std::make_unique<SiteSearchEngineServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
