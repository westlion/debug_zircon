#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/sync_system/ulib/pretty"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/ddk/gen/include_-I./build-arm64-clang/system/ulib/driver/gen/include_-I./build-arm64-clang/system/ulib/pretty/gen/include_-I./build-arm64-clang/system/ulib/sync/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/usb/dwc3/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/pretty/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/ddk/gen-hdr.stamp_./build-arm64-clang/system/ulib/driver/gen-hdr.stamp_./build-arm64-clang/system/ulib/pretty/gen-hdr.stamp_./build-arm64-clang/system/ulib/sync/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/usb/dwc3/dwc3-commands.c_system/dev/usb/dwc3/dwc3-endpoints.c_system/dev/usb/dwc3/dwc3-ep0.c_system/dev/usb/dwc3/dwc3-events.c_system/dev/usb/dwc3/dwc3.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/pretty_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "driver"

