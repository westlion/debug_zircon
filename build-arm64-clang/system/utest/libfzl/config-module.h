#pragma once
#define MODULE_LIBS "system/ulib/fdio_system/ulib/zircon_system/ulib/unittest_system/ulib/c_"
#define MODULE_STATIC_LIBS "system/ulib/fbl_system/ulib/fzl_system/ulib/zx_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fbl/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/fzl/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-I./build-arm64-clang/system/ulib/zx/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fzl/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/utest/libfzl/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fbl/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/fzl/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp_./build-arm64-clang/system/ulib/zx/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/libfzl/fzl-test.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/fzl_system/ulib/unittest_system/ulib/zircon_system/ulib/zx"
#define MODULE_TYPE "usertest"

