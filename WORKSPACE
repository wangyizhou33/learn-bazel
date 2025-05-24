load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# mandatory for @project1
# glog further depends on com_github_gflags_gflags
http_archive(
    name = "com_github_google_glog",
    sha256 = "f28359aeba12f30d73d9e4711ef356dc842886968112162bc73002645139c39c",
    strip_prefix = "glog-0.4.0",
    urls = ["https://github.com/google/glog/archive/v0.4.0.tar.gz"],
    patch_cmds = [
        # Add linkopts to the glog BUILD file
        "sed -i 's/**kwargs/linkopts = [\"-Wl,-soname,libglog.so\"],**kwargs/' ./bazel/glog.bzl",
    ],
)

# mandatory for @test
http_archive(
    name = "com_google_googletest",
    urls = ["https://github.com/google/googletest/archive/release-1.12.1.tar.gz"],
    strip_prefix = "googletest-release-1.12.1",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
http_archive(
    name = "rules_pkg",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_pkg/releases/download/0.9.1/rules_pkg-0.9.1.tar.gz",
        "https://github.com/bazelbuild/rules_pkg/releases/download/0.9.1/rules_pkg-0.9.1.tar.gz",
    ],
    sha256 = "8f9ee2dc10c1ae514ee599a8b42ed99fa262b757058f65ad3c384289ff70c4b8",
)

load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")
rules_pkg_dependencies()

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

# new_local_repository(
#     name = "com_github_gflags_gflags",
#     path = "gflags",
#     build_file = "//:gflag.BUILD",
# )

http_archive(
    name = "com_github_gflags_gflags",
    sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
    strip_prefix = "gflags-2.2.2",
    urls = ["https://github.com/gflags/gflags/archive/v2.2.2.tar.gz"],
)

new_local_repository(
    name = "nlohmann_json",
    path = "target",
    build_file = "//:nlohmann_json.BUILD",
)

new_local_repository(
    name = "executable",
    path = "target",
    build_file = "//:mini.BUILD",
)