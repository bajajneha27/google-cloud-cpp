// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_REST_BACKGROUND_THREADS_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_REST_BACKGROUND_THREADS_IMPL_H

#include "google/cloud/background_threads.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/version.h"
#include <thread>
#include <vector>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// Create a background thread to perform background operations.
class AutomaticallyCreatedRestBackgroundThreads : public BackgroundThreads {
 public:
  explicit AutomaticallyCreatedRestBackgroundThreads(
      std::size_t thread_count = 1U);
  ~AutomaticallyCreatedRestBackgroundThreads() override;

  CompletionQueue cq() const override { return cq_; }
  void Shutdown();
  std::size_t pool_size() const { return pool_.size(); }

 private:
  CompletionQueue cq_;
  std::vector<std::thread> pool_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_REST_BACKGROUND_THREADS_IMPL_H
