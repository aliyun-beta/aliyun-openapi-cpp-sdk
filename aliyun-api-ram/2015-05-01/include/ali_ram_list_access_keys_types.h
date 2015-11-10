#ifndef ALI_RAM_LIST_ACCESS_KEYS_TYPESH
#define ALI_RAM_LIST_ACCESS_KEYS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListAccessKeysRequestType {
  std::string user_name;
};
struct RamListAccessKeysAccessKeyType {
  std::string access_key_id;
  std::string status;
  std::string create_date;
};
struct RamListAccessKeysResponseType {
  std::vector<RamListAccessKeysAccessKeyType> access_keys;
};
} // end namespace
#endif
