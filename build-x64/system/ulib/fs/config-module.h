#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/fdio_system/ulib/fidl_system/ulib/trace-engine_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/async.cpp_system/ulib/async_system/ulib/sync_system/ulib/trace_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/async.cpp/gen/include_-I./build-x64/system/ulib/async/gen/include_-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/fidl/gen/include_-I./build-x64/system/ulib/sync/gen/include_-I./build-x64/system/ulib/trace-engine/gen/include_-I./build-x64/system/ulib/trace/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zx/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/async.cpp/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fidl/include_-Isystem/ulib/fs/include_-Isystem/ulib/sync/include_-Isystem/ulib/trace-engine/include_-Isystem/ulib/trace/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/async.cpp/gen-hdr.stamp_./build-x64/system/ulib/async/gen-hdr.stamp_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/fidl/gen-hdr.stamp_./build-x64/system/ulib/sync/gen-hdr.stamp_./build-x64/system/ulib/trace-engine/gen-hdr.stamp_./build-x64/system/ulib/trace/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zx/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/fs/connection.cpp_system/ulib/fs/fvm.cpp_system/ulib/fs/managed-vfs.cpp_system/ulib/fs/mapped-vmo.cpp_system/ulib/fs/mount.cpp_system/ulib/fs/pseudo-dir.cpp_system/ulib/fs/pseudo-file.cpp_system/ulib/fs/remote-dir.cpp_system/ulib/fs/service.cpp_system/ulib/fs/unmount.cpp_system/ulib/fs/vfs.cpp_system/ulib/fs/vmo-file.cpp_system/ulib/fs/vnode.cpp_system/ulib/fs/watcher.cpp"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async.cpp_system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/fidl_system/ulib/sync_system/ulib/trace_system/ulib/trace-engine_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"
