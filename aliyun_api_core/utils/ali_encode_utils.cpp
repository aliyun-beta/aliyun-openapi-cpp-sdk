#include "ali_encode_utils.h"
#include "mbedtls/md.h"
#include "mbedtls/x509.h"
#include "mbedtls/base64.h"
#include "ali_urlencode.h"

std::string encode_compute_hmac_sha1(std::string access_key, char* buf_in, int len_buf_in) {
  int res = 0;

  mbedtls_md_context_t ctx= {};
  const mbedtls_md_info_t * sha1_md = mbedtls_md_info_from_type(MBEDTLS_MD_SHA1);
  mbedtls_md_init_ctx(&ctx, sha1_md);
  char output[20] = {};
  char encoded[512] = {};
  
  res = mbedtls_md_hmac_starts(&ctx, (const unsigned char*)access_key.c_str(), access_key.size());
  res = mbedtls_md_hmac_update(&ctx, (const unsigned char*)buf_in, len_buf_in);
  res = mbedtls_md_hmac_finish(&ctx, (unsigned char*)output);

  size_t output_len = 0;
  mbedtls_base64_encode((unsigned char*)encoded, sizeof(encoded), &output_len, (const unsigned char*)output, 20);
  mbedtls_md_free(&ctx);
  return encoded;
}

std::string encode_compute_md5(char* buf, int len) {
  size_t output_len;
  char output[512] = {};
  char encoded[512] = {};
  mbedtls_md_context_t ctx= {};
  const mbedtls_md_info_t* md5_md = mbedtls_md_info_from_type(MBEDTLS_MD_MD5);

  mbedtls_md_init_ctx(&ctx, md5_md);
  mbedtls_md_update(&ctx, (const unsigned char*)buf, len);
  mbedtls_md_finish(&ctx, (unsigned char*)encoded);

  mbedtls_base64_encode((unsigned char*)output, sizeof(output), &output_len, (const unsigned char*)encoded, 16);
  mbedtls_md_free(&ctx);
  return output;
}