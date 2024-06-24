load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
   name = "db",
   srcs = ["db.cc"],
   hdrs = ["db.h"],
)

cc_binary(
    name = "db-server",
    srcs = ["server.cc"],
    deps = [
        ":db",
    ],
)
