cc_binary(
    name = "runfile_test",
    srcs = ["main.cpp"],
    deps = [
        "@googletest//:gtest_main",
        #"@rules_cc//cc/runfiles:runfiles",  # This is where `runfiles.h` comes from
    	"@rules_cc//cc/runfiles",	     # more efficient path, same as docs
    ],
)

cc_test(
    name = "main_test",
    srcs = ["main_test.cpp"],
    deps = ["@googletest//:gtest_main"],
)
