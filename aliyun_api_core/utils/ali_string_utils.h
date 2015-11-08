#ifndef ALIYUNAPICORE_UTILS_ALISTRINGUTILS_H
#define ALIYUNAPICORE_UTILS_ALISTRINGUTILS_H
#include <string>
#if defined(__GNUC__)
#define PRINTF_FORMAT(format_param, dots_param) \
    __attribute__((format(printf, format_param, dots_param)))
#else
#define PRINTF_FORMAT(format_param, dots_param)
#endif
#include <vector>
extern std::string get_format_string(const char* format, ...) PRINTF_FORMAT(1, 2);

extern void append_format_string(std::string&, const char* format, ...) PRINTF_FORMAT(2, 3);

void strsplit(const std::string& str, std::vector<std::string>& ret, std::string sep);

#endif