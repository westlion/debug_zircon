#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/zircon_system/ulib/fdio_"
#define MODULE_STATIC_LIBS "system/ulib/gpt_system/ulib/block-client_system/ulib/chromeos-disk-setup_system/ulib/fs_system/ulib/fs-management_system/ulib/fvm_system/ulib/sync_system/ulib/zx_system/ulib/fbl_system/ulib/digest_system/ulib/zxcpp_third_party/ulib/cksum_third_party/ulib/uboringssl_third_party/ulib/lz4"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/block-client/gen/include_-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/chromeos-disk-setup/gen/include_-I./build-arm64-release/system/ulib/digest/gen/include_-I./build-arm64-release/system/ulib/fbl/gen/include_-I./build-arm64-release/system/ulib/fdio/gen/include_-I./build-arm64-release/system/ulib/fs-management/gen/include_-I./build-arm64-release/system/ulib/fs/gen/include_-I./build-arm64-release/system/ulib/fvm/gen/include_-I./build-arm64-release/system/ulib/gpt/gen/include_-I./build-arm64-release/system/ulib/sync/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-I./build-arm64-release/system/ulib/zx/gen/include_-I./build-arm64-release/system/ulib/zxcpp/gen/include_-I./build-arm64-release/third_party/ulib/cksum/gen/include_-I./build-arm64-release/third_party/ulib/lz4/gen/include_-I./build-arm64-release/third_party/ulib/uboringssl/gen/include_-Iglobal/include_-Isystem/uapp/disk-pave/include_-Isystem/ulib/block-client/include_-Isystem/ulib/c/include_-Isystem/ulib/chromeos-disk-setup/include_-Isystem/ulib/digest/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/fs/include_-Isystem/ulib/fvm/include_-Isystem/ulib/gpt/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/cksum/include_-Ithird_party/ulib/lz4/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/uboringssl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/block-client/gen-hdr.stamp_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/chromeos-disk-setup/gen-hdr.stamp_./build-arm64-release/system/ulib/digest/gen-hdr.stamp_./build-arm64-release/system/ulib/fbl/gen-hdr.stamp_./build-arm64-release/system/ulib/fdio/gen-hdr.stamp_./build-arm64-release/system/ulib/fs-management/gen-hdr.stamp_./build-arm64-release/system/ulib/fs/gen-hdr.stamp_./build-arm64-release/system/ulib/fvm/gen-hdr.stamp_./build-arm64-release/system/ulib/gpt/gen-hdr.stamp_./build-arm64-release/system/ulib/sync/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp_./build-arm64-release/system/ulib/zx/gen-hdr.stamp_./build-arm64-release/system/ulib/zxcpp/gen-hdr.stamp_./build-arm64-release/third_party/ulib/cksum/gen-hdr.stamp_./build-arm64-release/third_party/ulib/lz4/gen-hdr.stamp_./build-arm64-release/third_party/ulib/uboringssl/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/disk-pave/disk-pave.cpp"
#define MODULE_HEADER_DEPS "system/ulib/block-client_system/ulib/c_system/ulib/chromeos-disk-setup_system/ulib/digest_system/ulib/fbl_system/ulib/fdio_system/ulib/fs_system/ulib/fs-management_system/ulib/fvm_system/ulib/gpt_system/ulib/sync_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp_third_party/ulib/cksum_third_party/ulib/lz4_third_party/ulib/uboringssl"
#define MODULE_TYPE "userapp"
