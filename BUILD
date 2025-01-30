cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cpp"],
    deps = [":util", "@com_github_google_glog//:glog", "@com_github_gflags_gflags//:gflags"],
)

cc_library(
    name = "util",
    srcs = ["util.cpp"],
    hdrs = ["util.hpp"],
    visibility = ["//visibility:public"],
)
