load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_cc//cc:defs.bzl", "cc_proto_library")

cc_proto_library(
    name = "db_cc_proto",
    deps = [":db_proto"],
)

proto_library(
    name = "db_proto",
    srcs = ["db.proto"],
)
