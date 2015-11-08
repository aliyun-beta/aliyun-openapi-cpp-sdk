#ifndef ALI_LIST_ACCESS_KEYS_TYPESH
#define ALI_LIST_ACCESS_KEYS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListAccessKeysRequestType {
  std::string user_name;
};
struct ListAccessKeysAccessKeyType {
  std::string access_key_id;
  std::string status;
  std::string create_date;
};
struct ListAccessKeysResponseType {
  std::vector<ListAccessKeysAccessKeyType> access_keys;
};
} // end namespace
#endif
