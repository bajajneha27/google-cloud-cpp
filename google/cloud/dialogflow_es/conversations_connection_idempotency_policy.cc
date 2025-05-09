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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/conversations_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConversationsConnectionIdempotencyPolicy::
    ~ConversationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConversationsConnectionIdempotencyPolicy>
ConversationsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ConversationsConnectionIdempotencyPolicy>(*this);
}

Idempotency ConversationsConnectionIdempotencyPolicy::CreateConversation(
    google::cloud::dialogflow::v2::CreateConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::ListConversations(
    google::cloud::dialogflow::v2::ListConversationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::GetConversation(
    google::cloud::dialogflow::v2::GetConversationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::CompleteConversation(
    google::cloud::dialogflow::v2::CompleteConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::IngestContextReferences(
    google::cloud::dialogflow::v2::IngestContextReferencesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::ListMessages(
    google::cloud::dialogflow::v2::ListMessagesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ConversationsConnectionIdempotencyPolicy::SuggestConversationSummary(
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::GenerateStatelessSummary(
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationsConnectionIdempotencyPolicy::GenerateStatelessSuggestion(
    google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::SearchKnowledge(
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::GenerateSuggestions(
    google::cloud::dialogflow::v2::GenerateSuggestionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConversationsConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ConversationsConnectionIdempotencyPolicy>
MakeDefaultConversationsConnectionIdempotencyPolicy() {
  return std::make_unique<ConversationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
