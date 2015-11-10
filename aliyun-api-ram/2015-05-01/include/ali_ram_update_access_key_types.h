#ifndef ALI_RAM_UPDATE_ACCESS_KEY_TYPESH
#define ALI_RAM_UPDATE_ACCESS_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamUpdateAccessKeyRequestType {
  std::string user_name;
  std::string user_access_key_id;
  std::string status;
};
struct RamUpdateAccessKeyResponseType {
};
} // end namespace
#endif
