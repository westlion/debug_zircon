#pragma once
#define MODULE_LIBS "system/ulib/unittest_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/zxcpp"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/ctor/dso-ctor/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/ctor/dso-ctor/dso-ctor.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/unittest_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"

