load("@rules_pkg//:pkg.bzl", "pkg_tar")

cc_library(
    name = "util",
    srcs = ["util.cpp"],
    hdrs = ["util.hpp"],
    visibility = ["//visibility:public"],
    linkopts = ["-Wl,-soname,libutil.so"],  # Set the SONAME
)

pkg_tar(
    name = "package",
    srcs = [":util"],  # Include all outputs of the target
    package_dir = "lib",
)