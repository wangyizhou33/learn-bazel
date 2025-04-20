load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# mandatory for @project1
# glog further depends on com_github_gflags_gflags
http_archive(
    name = "com_github_google_glog",
    sha256 = "f28359aeba12f30d73d9e4711ef356dc842886968112162bc73002645139c39c",
    strip_prefix = "glog-0.4.0",
    urls = ["https://github.com/google/glog/archive/v0.4.0.tar.gz"],
)

# mandatory for @test
http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/release-1.12.1.tar.gz"],
    strip_prefix = "googletest-release-1.12.1",
)

local_repository(
    name = "project1",
    path = "project1",
)

local_repository(
    name = "project2", 
    path = "project2",
)

local_repository(
    name = "test", 
    path = "test",
)

new_local_repository(
    name = "com_github_gflags_gflags",
    path = "gflags",
    build_file = "//:gflag.BUILD",
)