#pragma once
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/fbl.hostlib/gen/include_-Isystem/ulib/fbl.hostlib/include_-Isystem/ulib/fbl/include_-Isystem/ulib/trace-engine/include_-Isystem/ulib/trace-reader/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-host.h_./build-arm64-clang/config-user.h"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/trace-reader/reader.cpp_system/ulib/trace-reader/records.cpp"
#define MODULE_HEADER_DEPS "system/ulib/fbl.hostlib"
#define MODULE_TYPE "hostlib"

