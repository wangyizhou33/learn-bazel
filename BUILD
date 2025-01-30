cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cpp"],
    deps = [":util", "@com_google_googletest//:gtest_main"],
)

cc_library(
    name = "util",
    srcs = ["util.cpp"],
    hdrs = ["util.hpp"],
    visibility = ["//visibility:public"],
)
