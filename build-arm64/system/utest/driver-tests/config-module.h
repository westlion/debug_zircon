#pragma once
#define MODULE_LIBS "system/ulib/fdio_system/ulib/c_system/ulib/zircon_system/ulib/unittest"
#define MODULE_STATIC_LIBS ""
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/fdio/gen/include_-I./build-arm64/system/ulib/unittest/gen/include_-I./build-arm64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/utest/driver-tests/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/fdio/gen-hdr.stamp_./build-arm64/system/ulib/unittest/gen-hdr.stamp_./build-arm64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/driver-tests/main.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/unittest_system/ulib/zircon"
#define MODULE_TYPE "usertest"

