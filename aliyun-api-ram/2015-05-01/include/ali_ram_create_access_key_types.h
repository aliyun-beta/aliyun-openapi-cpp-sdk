#ifndef ALI_RAM_CREATE_ACCESS_KEY_TYPESH
#define ALI_RAM_CREATE_ACCESS_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamCreateAccessKeyRequestType {
  std::string user_name;
};
struct RamCreateAccessKeyAccessKeyType {
  std::string access_key_id;
  std::string access_key_secret;
  std::string status;
  std::string create_date;
};
struct RamCreateAccessKeyResponseType {
  RamCreateAccessKeyAccessKeyType access_key;
};
} // end namespace
#endif
