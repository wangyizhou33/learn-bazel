load("@rules_pkg//:pkg.bzl", "pkg_tar")

cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cpp"],
    deps = [
        "@com_github_google_glog//:glog",
        "@project2//:util",
        "@nlohmann_json//:nlohmann_json",
    ],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "mini",
    srcs = ["mini.cpp"],
    deps = [],
    visibility = ["//visibility:public"],
)

pkg_tar(
    name = "package",
    srcs = [":hello_world",
            ":mini"],  # Include all outputs of the target
    package_dir = "bin",
)