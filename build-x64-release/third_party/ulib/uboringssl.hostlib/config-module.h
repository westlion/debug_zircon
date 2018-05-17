#pragma once
#define MODULE_COMPILEFLAGS "-DOPENSSL_NO_ASM_-DOPENSSL_NO_THREADS_-Ithird_party/ulib/uboringssl/include_-Wno-unused-function_-fvisibility=hidden_-include_third_party/ulib/uboringssl/stack-note.S"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-host.h_./build-x64-release/config-user.h"
#define MODULE_DEPS ""
#define MODULE_SRCS "third_party/ulib/uboringssl/crypto/chacha/chacha.c_third_party/ulib/uboringssl/crypto/cipher_extra/e_aesgcmsiv.c_third_party/ulib/uboringssl/crypto/cpu-aarch64-fuchsia.c_third_party/ulib/uboringssl/crypto/cpu-arm.c_third_party/ulib/uboringssl/crypto/cpu-intel.c_third_party/ulib/uboringssl/crypto/crypto.c_third_party/ulib/uboringssl/crypto/err/err.c_third_party/ulib/uboringssl/crypto/fipsmodule/aes/aes.c_third_party/ulib/uboringssl/crypto/fipsmodule/aes/mode_wrappers.c_third_party/ulib/uboringssl/crypto/fipsmodule/cipher/aead.c_third_party/ulib/uboringssl/crypto/fipsmodule/cipher/cipher.c_third_party/ulib/uboringssl/crypto/fipsmodule/cipher/e_aes.c_third_party/ulib/uboringssl/crypto/fipsmodule/digest/digest.c_third_party/ulib/uboringssl/crypto/fipsmodule/digest/digests.c_third_party/ulib/uboringssl/crypto/fipsmodule/hmac/hmac.c_third_party/ulib/uboringssl/crypto/fipsmodule/md4/md4.c_third_party/ulib/uboringssl/crypto/fipsmodule/md5/md5.c_third_party/ulib/uboringssl/crypto/fipsmodule/modes/cbc.c_third_party/ulib/uboringssl/crypto/fipsmodule/modes/cfb.c_third_party/ulib/uboringssl/crypto/fipsmodule/modes/ctr.c_third_party/ulib/uboringssl/crypto/fipsmodule/modes/gcm.c_third_party/ulib/uboringssl/crypto/fipsmodule/modes/ofb.c_third_party/ulib/uboringssl/crypto/fipsmodule/modes/polyval.c_third_party/ulib/uboringssl/crypto/fipsmodule/rand/ctrdrbg.c_third_party/ulib/uboringssl/crypto/fipsmodule/rand/rand.c_third_party/ulib/uboringssl/crypto/fipsmodule/sha/sha1.c_third_party/ulib/uboringssl/crypto/fipsmodule/sha/sha256.c_third_party/ulib/uboringssl/crypto/fipsmodule/sha/sha512.c_third_party/ulib/uboringssl/crypto/hkdf/hkdf.c_third_party/ulib/uboringssl/crypto/mem.c_third_party/ulib/uboringssl/crypto/rand_extra/forkunsafe.c_third_party/ulib/uboringssl/crypto/rand_extra/fuchsia.c_third_party/ulib/uboringssl/crypto/thread_none.c_third_party/ulib/uboringssl/decrepit/xts/xts.c_third_party/ulib/uboringssl/err_data.c_third_party/ulib/uboringssl/linux-x86_64/crypto/chacha/chacha-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/cipher_extra/aes128gcmsiv-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/aes-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/aesni-gcm-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/aesni-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/bsaes-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/ghash-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/md5-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/rdrand-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/sha1-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/sha256-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/sha512-x86_64.S_third_party/ulib/uboringssl/linux-x86_64/crypto/fipsmodule/vpaes-x86_64.S"
#define MODULE_HEADER_DEPS ""
#define MODULE_TYPE "hostlib"
