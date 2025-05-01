load("@rules_pkg//:pkg.bzl", "pkg_tar")

cc_library(
    name = "gflags",
    srcs = ["lib/libgflags.so"], 
    hdrs = glob(["include/gflags/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"],
)

pkg_tar(
    name = "package",
    srcs = [":gflags"],  # Include all outputs of the target
    package_dir = "lib",
)