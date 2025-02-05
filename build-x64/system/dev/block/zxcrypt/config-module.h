#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/zircon_system/ulib/bitmap_system/ulib/crypto_system/ulib/driver_system/ulib/fdio_system/ulib/zxcrypt_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/ddktl_system/ulib/fbl_system/ulib/pretty_system/ulib/zx_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/bitmap/gen/include_-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/crypto/gen/include_-I./build-x64/system/ulib/ddk/gen/include_-I./build-x64/system/ulib/ddktl/gen/include_-I./build-x64/system/ulib/driver/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/pretty/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zx/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-I./build-x64/system/ulib/zxcrypt/gen/include_-Iglobal/include_-Isystem/dev/block/zxcrypt/include_-Isystem/ulib/bitmap/include_-Isystem/ulib/c/include_-Isystem/ulib/crypto/include_-Isystem/ulib/ddk/include_-Isystem/ulib/ddktl/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/pretty/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Isystem/ulib/zxcrypt/include_-Ithird_party/ulib/musl/include_-fsanitize-undefined-trap-on-error_-fsanitize=integer-divide-by-zero,signed-integer-overflow"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/bitmap/gen-hdr.stamp_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/crypto/gen-hdr.stamp_./build-x64/system/ulib/ddk/gen-hdr.stamp_./build-x64/system/ulib/ddktl/gen-hdr.stamp_./build-x64/system/ulib/driver/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/pretty/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zx/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp_./build-x64/system/ulib/zxcrypt/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/block/zxcrypt/binding.c_system/dev/block/zxcrypt/device.cpp_system/dev/block/zxcrypt/extra.cpp_system/dev/block/zxcrypt/worker.cpp"
#define MODULE_HEADER_DEPS "system/ulib/bitmap_system/ulib/c_system/ulib/crypto_system/ulib/ddk_system/ulib/ddktl_system/ulib/driver_system/ulib/fbl_system/ulib/fdio_system/ulib/pretty_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp_system/ulib/zxcrypt"
#define MODULE_TYPE "driver"

