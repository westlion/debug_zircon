#pragma once
#define MODULE_LIBS "system/ulib/async.default_system/ulib/c_system/ulib/zircon_system/ulib/fdio_system/ulib/unittest"
#define MODULE_STATIC_LIBS "system/ulib/async.cpp_system/ulib/async_system/ulib/async-testutils_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/async-testutils/gen/include_-I./build-arm64-clang/system/ulib/async.cpp/gen/include_-I./build-arm64-clang/system/ulib/async.default/gen/include_-I./build-arm64-clang/system/ulib/async/gen/include_-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fbl/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-I./build-arm64-clang/system/ulib/zx/gen/include_-I./build-arm64-clang/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/async-testutils/include_-Isystem/ulib/async.cpp/include_-Isystem/ulib/async.default/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/async/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/async-testutils/gen-hdr.stamp_./build-arm64-clang/system/ulib/async.cpp/gen-hdr.stamp_./build-arm64-clang/system/ulib/async.default/gen-hdr.stamp_./build-arm64-clang/system/ulib/async/gen-hdr.stamp_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fbl/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp_./build-arm64-clang/system/ulib/zx/gen-hdr.stamp_./build-arm64-clang/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/async/default_tests.cpp_system/utest/async/main.c_system/utest/async/receiver_tests.cpp_system/utest/async/task_tests.cpp_system/utest/async/time_tests.cpp_system/utest/async/trap_tests.cpp_system/utest/async/wait_tests.cpp"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async-testutils_system/ulib/async.cpp_system/ulib/async.default_system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/unittest_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "usertest"

