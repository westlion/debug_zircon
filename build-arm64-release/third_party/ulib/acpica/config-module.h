#pragma once
#define MODULE_LIBS "system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/fbl_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/ddk/gen/include_-I./build-arm64-release/system/ulib/fbl/gen/include_-I./build-arm64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/fbl/include_-Isystem/ulib/zxcpp/include_-Ithird_party/lib/acpica/source/include/acpica_-Ithird_party/ulib/acpica/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS "-Wno-discarded-qualifiers_-Wno-format-signedness_-Wno-implicit-fallthrough_-fno-strict-aliasing"
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/ddk/gen-hdr.stamp_./build-arm64-release/system/ulib/fbl/gen-hdr.stamp_./build-arm64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "third_party/ulib/acpica/empty.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/fbl_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"
