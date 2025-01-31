# Bazel WORKSPACE file
# This file is used to define the workspace for Bazel builds.

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

new_local_repository(
    name = "com_github_gflags_gflags",
    path = "./gflags",
    build_file_content = """
cc_library(
    name = "gflags",
    srcs = ["lib/libgflags.so"], 
    hdrs = glob(["include/gflags/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"],
)
""",
)

http_archive(
    name = "com_github_google_glog",
    sha256 = "c17d85c03ad9630006ef32c7be7c65656aba2e7e2fbfc82226b7e680c771fc88",
    strip_prefix = "glog-0.7.1",
    urls = ["https://github.com/google/glog/archive/v0.7.1.zip"],
)

http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/release-1.12.1.tar.gz"],
    strip_prefix = "googletest-release-1.12.1",
)
