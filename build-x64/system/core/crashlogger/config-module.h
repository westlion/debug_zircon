#pragma once
#define MODULE_LIBS "third_party/ulib/backtrace_third_party/ulib/ngunwind_system/ulib/launchpad_system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/inspector_system/ulib/zxcpp_system/ulib/fbl_system/ulib/pretty_system/ulib/runtime_system/ulib/task-utils"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/inspector/gen/include_-I./build-x64/system/ulib/launchpad/gen/include_-I./build-x64/system/ulib/pretty/gen/include_-I./build-x64/system/ulib/runtime/gen/include_-I./build-x64/system/ulib/task-utils/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-I./build-x64/third_party/ulib/backtrace/gen/include_-I./build-x64/third_party/ulib/ngunwind/gen/include_-Iglobal/include_-Isystem/core/crashlogger/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/inspector/include_-Isystem/ulib/launchpad/include_-Isystem/ulib/pretty/include_-Isystem/ulib/runtime/include_-Isystem/ulib/task-utils/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/backtrace/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/ngunwind/include_-fno-omit-frame-pointer"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/inspector/gen-hdr.stamp_./build-x64/system/ulib/launchpad/gen-hdr.stamp_./build-x64/system/ulib/pretty/gen-hdr.stamp_./build-x64/system/ulib/runtime/gen-hdr.stamp_./build-x64/system/ulib/task-utils/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp_./build-x64/third_party/ulib/backtrace/gen-hdr.stamp_./build-x64/third_party/ulib/ngunwind/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/core/crashlogger/crashlogger.cpp_system/core/crashlogger/dump-pt.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/inspector_system/ulib/launchpad_system/ulib/pretty_system/ulib/runtime_system/ulib/task-utils_system/ulib/zircon_system/ulib/zxcpp_third_party/ulib/backtrace_third_party/ulib/ngunwind"
#define MODULE_TYPE "userapp"

