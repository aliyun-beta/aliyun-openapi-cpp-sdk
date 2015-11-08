#ifndef ALIYUNAPICORE_UTILS_ALIENCODEUTILS_H
#define ALIYUNAPICORE_UTILS_ALIENCODEUTILS_H
#include <string>
std::string encode_compute_hmac_sha1(std::string access_key, char* buf_in, int len_buf_in);
std::string encode_compute_md5(char* buf, int len);
#endif
