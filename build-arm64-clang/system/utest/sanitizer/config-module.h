#pragma once
#define MODULE_LIBS "system/ulib/unittest_system/ulib/launchpad_system/ulib/async.default_system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/loader-service_system/ulib/async_system/ulib/async-loop_system/ulib/ldmsg_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/async-loop/gen/include_-I./build-arm64-clang/system/ulib/async.default/gen/include_-I./build-arm64-clang/system/ulib/async/gen/include_-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/launchpad/gen/include_-I./build-arm64-clang/system/ulib/ldmsg/gen/include_-I./build-arm64-clang/system/ulib/loader-service/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/ulib/async-loop/include_-Isystem/ulib/async.default/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/launchpad/include_-Isystem/ulib/ldmsg/include_-Isystem/ulib/loader-service/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/utest/sanitizer/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/async-loop/gen-hdr.stamp_./build-arm64-clang/system/ulib/async.default/gen-hdr.stamp_./build-arm64-clang/system/ulib/async/gen-hdr.stamp_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/launchpad/gen-hdr.stamp_./build-arm64-clang/system/ulib/ldmsg/gen-hdr.stamp_./build-arm64-clang/system/ulib/loader-service/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/sanitizer/sanitizer-utils.c"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async-loop_system/ulib/async.default_system/ulib/c_system/ulib/fdio_system/ulib/launchpad_system/ulib/ldmsg_system/ulib/loader-service_system/ulib/unittest_system/ulib/zircon"
#define MODULE_TYPE "usertest"

