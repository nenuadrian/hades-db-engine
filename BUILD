load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
   name = "db",
   srcs = ["db.cc", "files.cc"],
   hdrs = ["db.h", "files.h"],
   deps = [":query"],
)

cc_library(
  name = "query",
  srcs = ["query.cc", "parser.cc"],
  hdrs = ["query.h", "parser.h"],
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
    deps = ["@com_google_googletest//:gtest_main", ":db"],
)

cc_test(
    name = "query_test",
    size = "small",
    srcs = ["query_test.cc"],
    deps = ["@com_google_googletest//:gtest_main", ":query", ":db"],
)

