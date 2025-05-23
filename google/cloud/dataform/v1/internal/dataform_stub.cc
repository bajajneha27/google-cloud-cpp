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
// source: google/cloud/dataform/v1/dataform.proto

#include "google/cloud/dataform/v1/internal/dataform_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataform/v1/dataform.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataformStub::~DataformStub() = default;

StatusOr<google::cloud::dataform::v1::ListRepositoriesResponse>
DefaultDataformStub::ListRepositories(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ListRepositoriesRequest const& request) {
  google::cloud::dataform::v1::ListRepositoriesResponse response;
  auto status = grpc_stub_->ListRepositories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Repository>
DefaultDataformStub::GetRepository(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetRepositoryRequest const& request) {
  google::cloud::dataform::v1::Repository response;
  auto status = grpc_stub_->GetRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Repository>
DefaultDataformStub::CreateRepository(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CreateRepositoryRequest const& request) {
  google::cloud::dataform::v1::Repository response;
  auto status = grpc_stub_->CreateRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Repository>
DefaultDataformStub::UpdateRepository(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::UpdateRepositoryRequest const& request) {
  google::cloud::dataform::v1::Repository response;
  auto status = grpc_stub_->UpdateRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataformStub::DeleteRepository(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::DeleteRepositoryRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteRepository(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dataform::v1::CommitRepositoryChangesResponse>
DefaultDataformStub::CommitRepositoryChanges(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CommitRepositoryChangesRequest const&
        request) {
  google::cloud::dataform::v1::CommitRepositoryChangesResponse response;
  auto status =
      grpc_stub_->CommitRepositoryChanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ReadRepositoryFileResponse>
DefaultDataformStub::ReadRepositoryFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ReadRepositoryFileRequest const& request) {
  google::cloud::dataform::v1::ReadRepositoryFileResponse response;
  auto status = grpc_stub_->ReadRepositoryFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::QueryRepositoryDirectoryContentsResponse>
DefaultDataformStub::QueryRepositoryDirectoryContents(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::QueryRepositoryDirectoryContentsRequest const&
        request) {
  google::cloud::dataform::v1::QueryRepositoryDirectoryContentsResponse
      response;
  auto status = grpc_stub_->QueryRepositoryDirectoryContents(&context, request,
                                                             &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::FetchRepositoryHistoryResponse>
DefaultDataformStub::FetchRepositoryHistory(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::FetchRepositoryHistoryRequest const& request) {
  google::cloud::dataform::v1::FetchRepositoryHistoryResponse response;
  auto status =
      grpc_stub_->FetchRepositoryHistory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::dataform::v1::ComputeRepositoryAccessTokenStatusResponse>
DefaultDataformStub::ComputeRepositoryAccessTokenStatus(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::
        ComputeRepositoryAccessTokenStatusRequest const& request) {
  google::cloud::dataform::v1::ComputeRepositoryAccessTokenStatusResponse
      response;
  auto status = grpc_stub_->ComputeRepositoryAccessTokenStatus(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::FetchRemoteBranchesResponse>
DefaultDataformStub::FetchRemoteBranches(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::FetchRemoteBranchesRequest const& request) {
  google::cloud::dataform::v1::FetchRemoteBranchesResponse response;
  auto status = grpc_stub_->FetchRemoteBranches(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ListWorkspacesResponse>
DefaultDataformStub::ListWorkspaces(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ListWorkspacesRequest const& request) {
  google::cloud::dataform::v1::ListWorkspacesResponse response;
  auto status = grpc_stub_->ListWorkspaces(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Workspace>
DefaultDataformStub::GetWorkspace(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetWorkspaceRequest const& request) {
  google::cloud::dataform::v1::Workspace response;
  auto status = grpc_stub_->GetWorkspace(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Workspace>
DefaultDataformStub::CreateWorkspace(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CreateWorkspaceRequest const& request) {
  google::cloud::dataform::v1::Workspace response;
  auto status = grpc_stub_->CreateWorkspace(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataformStub::DeleteWorkspace(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::DeleteWorkspaceRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteWorkspace(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dataform::v1::InstallNpmPackagesResponse>
DefaultDataformStub::InstallNpmPackages(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::InstallNpmPackagesRequest const& request) {
  google::cloud::dataform::v1::InstallNpmPackagesResponse response;
  auto status = grpc_stub_->InstallNpmPackages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::PullGitCommitsResponse>
DefaultDataformStub::PullGitCommits(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::PullGitCommitsRequest const& request) {
  google::cloud::dataform::v1::PullGitCommitsResponse response;
  auto status = grpc_stub_->PullGitCommits(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::PushGitCommitsResponse>
DefaultDataformStub::PushGitCommits(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::PushGitCommitsRequest const& request) {
  google::cloud::dataform::v1::PushGitCommitsResponse response;
  auto status = grpc_stub_->PushGitCommits(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::FetchFileGitStatusesResponse>
DefaultDataformStub::FetchFileGitStatuses(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::FetchFileGitStatusesRequest const& request) {
  google::cloud::dataform::v1::FetchFileGitStatusesResponse response;
  auto status = grpc_stub_->FetchFileGitStatuses(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::FetchGitAheadBehindResponse>
DefaultDataformStub::FetchGitAheadBehind(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::FetchGitAheadBehindRequest const& request) {
  google::cloud::dataform::v1::FetchGitAheadBehindResponse response;
  auto status = grpc_stub_->FetchGitAheadBehind(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::CommitWorkspaceChangesResponse>
DefaultDataformStub::CommitWorkspaceChanges(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CommitWorkspaceChangesRequest const& request) {
  google::cloud::dataform::v1::CommitWorkspaceChangesResponse response;
  auto status =
      grpc_stub_->CommitWorkspaceChanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ResetWorkspaceChangesResponse>
DefaultDataformStub::ResetWorkspaceChanges(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ResetWorkspaceChangesRequest const& request) {
  google::cloud::dataform::v1::ResetWorkspaceChangesResponse response;
  auto status = grpc_stub_->ResetWorkspaceChanges(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::FetchFileDiffResponse>
DefaultDataformStub::FetchFileDiff(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::FetchFileDiffRequest const& request) {
  google::cloud::dataform::v1::FetchFileDiffResponse response;
  auto status = grpc_stub_->FetchFileDiff(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::QueryDirectoryContentsResponse>
DefaultDataformStub::QueryDirectoryContents(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::QueryDirectoryContentsRequest const& request) {
  google::cloud::dataform::v1::QueryDirectoryContentsResponse response;
  auto status =
      grpc_stub_->QueryDirectoryContents(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::SearchFilesResponse>
DefaultDataformStub::SearchFiles(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::SearchFilesRequest const& request) {
  google::cloud::dataform::v1::SearchFilesResponse response;
  auto status = grpc_stub_->SearchFiles(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::MakeDirectoryResponse>
DefaultDataformStub::MakeDirectory(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::MakeDirectoryRequest const& request) {
  google::cloud::dataform::v1::MakeDirectoryResponse response;
  auto status = grpc_stub_->MakeDirectory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::RemoveDirectoryResponse>
DefaultDataformStub::RemoveDirectory(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::RemoveDirectoryRequest const& request) {
  google::cloud::dataform::v1::RemoveDirectoryResponse response;
  auto status = grpc_stub_->RemoveDirectory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::MoveDirectoryResponse>
DefaultDataformStub::MoveDirectory(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::MoveDirectoryRequest const& request) {
  google::cloud::dataform::v1::MoveDirectoryResponse response;
  auto status = grpc_stub_->MoveDirectory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ReadFileResponse>
DefaultDataformStub::ReadFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ReadFileRequest const& request) {
  google::cloud::dataform::v1::ReadFileResponse response;
  auto status = grpc_stub_->ReadFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::RemoveFileResponse>
DefaultDataformStub::RemoveFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::RemoveFileRequest const& request) {
  google::cloud::dataform::v1::RemoveFileResponse response;
  auto status = grpc_stub_->RemoveFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::MoveFileResponse>
DefaultDataformStub::MoveFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::MoveFileRequest const& request) {
  google::cloud::dataform::v1::MoveFileResponse response;
  auto status = grpc_stub_->MoveFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::WriteFileResponse>
DefaultDataformStub::WriteFile(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::WriteFileRequest const& request) {
  google::cloud::dataform::v1::WriteFileResponse response;
  auto status = grpc_stub_->WriteFile(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ListReleaseConfigsResponse>
DefaultDataformStub::ListReleaseConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ListReleaseConfigsRequest const& request) {
  google::cloud::dataform::v1::ListReleaseConfigsResponse response;
  auto status = grpc_stub_->ListReleaseConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ReleaseConfig>
DefaultDataformStub::GetReleaseConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetReleaseConfigRequest const& request) {
  google::cloud::dataform::v1::ReleaseConfig response;
  auto status = grpc_stub_->GetReleaseConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ReleaseConfig>
DefaultDataformStub::CreateReleaseConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CreateReleaseConfigRequest const& request) {
  google::cloud::dataform::v1::ReleaseConfig response;
  auto status = grpc_stub_->CreateReleaseConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ReleaseConfig>
DefaultDataformStub::UpdateReleaseConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::UpdateReleaseConfigRequest const& request) {
  google::cloud::dataform::v1::ReleaseConfig response;
  auto status = grpc_stub_->UpdateReleaseConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataformStub::DeleteReleaseConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::DeleteReleaseConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteReleaseConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dataform::v1::ListCompilationResultsResponse>
DefaultDataformStub::ListCompilationResults(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ListCompilationResultsRequest const& request) {
  google::cloud::dataform::v1::ListCompilationResultsResponse response;
  auto status =
      grpc_stub_->ListCompilationResults(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::CompilationResult>
DefaultDataformStub::GetCompilationResult(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetCompilationResultRequest const& request) {
  google::cloud::dataform::v1::CompilationResult response;
  auto status = grpc_stub_->GetCompilationResult(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::CompilationResult>
DefaultDataformStub::CreateCompilationResult(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CreateCompilationResultRequest const&
        request) {
  google::cloud::dataform::v1::CompilationResult response;
  auto status =
      grpc_stub_->CreateCompilationResult(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::QueryCompilationResultActionsResponse>
DefaultDataformStub::QueryCompilationResultActions(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::QueryCompilationResultActionsRequest const&
        request) {
  google::cloud::dataform::v1::QueryCompilationResultActionsResponse response;
  auto status =
      grpc_stub_->QueryCompilationResultActions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::ListWorkflowConfigsResponse>
DefaultDataformStub::ListWorkflowConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ListWorkflowConfigsRequest const& request) {
  google::cloud::dataform::v1::ListWorkflowConfigsResponse response;
  auto status = grpc_stub_->ListWorkflowConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::WorkflowConfig>
DefaultDataformStub::GetWorkflowConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetWorkflowConfigRequest const& request) {
  google::cloud::dataform::v1::WorkflowConfig response;
  auto status = grpc_stub_->GetWorkflowConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::WorkflowConfig>
DefaultDataformStub::CreateWorkflowConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CreateWorkflowConfigRequest const& request) {
  google::cloud::dataform::v1::WorkflowConfig response;
  auto status = grpc_stub_->CreateWorkflowConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::WorkflowConfig>
DefaultDataformStub::UpdateWorkflowConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::UpdateWorkflowConfigRequest const& request) {
  google::cloud::dataform::v1::WorkflowConfig response;
  auto status = grpc_stub_->UpdateWorkflowConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataformStub::DeleteWorkflowConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::DeleteWorkflowConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteWorkflowConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dataform::v1::ListWorkflowInvocationsResponse>
DefaultDataformStub::ListWorkflowInvocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::ListWorkflowInvocationsRequest const&
        request) {
  google::cloud::dataform::v1::ListWorkflowInvocationsResponse response;
  auto status =
      grpc_stub_->ListWorkflowInvocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::WorkflowInvocation>
DefaultDataformStub::GetWorkflowInvocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetWorkflowInvocationRequest const& request) {
  google::cloud::dataform::v1::WorkflowInvocation response;
  auto status = grpc_stub_->GetWorkflowInvocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::WorkflowInvocation>
DefaultDataformStub::CreateWorkflowInvocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CreateWorkflowInvocationRequest const&
        request) {
  google::cloud::dataform::v1::WorkflowInvocation response;
  auto status =
      grpc_stub_->CreateWorkflowInvocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDataformStub::DeleteWorkflowInvocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::DeleteWorkflowInvocationRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteWorkflowInvocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dataform::v1::CancelWorkflowInvocationResponse>
DefaultDataformStub::CancelWorkflowInvocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::CancelWorkflowInvocationRequest const&
        request) {
  google::cloud::dataform::v1::CancelWorkflowInvocationResponse response;
  auto status =
      grpc_stub_->CancelWorkflowInvocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::QueryWorkflowInvocationActionsResponse>
DefaultDataformStub::QueryWorkflowInvocationActions(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::QueryWorkflowInvocationActionsRequest const&
        request) {
  google::cloud::dataform::v1::QueryWorkflowInvocationActionsResponse response;
  auto status =
      grpc_stub_->QueryWorkflowInvocationActions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Config> DefaultDataformStub::GetConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::GetConfigRequest const& request) {
  google::cloud::dataform::v1::Config response;
  auto status = grpc_stub_->GetConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dataform::v1::Config> DefaultDataformStub::UpdateConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::dataform::v1::UpdateConfigRequest const& request) {
  google::cloud::dataform::v1::Config response;
  auto status = grpc_stub_->UpdateConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultDataformStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultDataformStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDataformStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultDataformStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultDataformStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataform_v1_internal
}  // namespace cloud
}  // namespace google
