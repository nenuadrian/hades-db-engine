load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
   name = "db",
   srcs = ["db.cc", "parser.cc", "files.cc", "query.cc"],
   hdrs = ["db.h", "query.h", "files.h", "parser.h"],
)

cc_binary(
    name = "db_server",
    srcs = ["server.cc"],
    deps = [
        ":db",
    ],
)

cc_test(
    name = "db_test",
    size = "small",
    srcs = ["db_test.cc"],
    deps = ["@com_google_googletest//:gtest_main"],
)
