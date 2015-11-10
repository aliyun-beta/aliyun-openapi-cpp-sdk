#ifndef ALI_AAS_LIST_ACCESS_KEYS_FOR_ACCOUNT_TYPESH
#define ALI_AAS_LIST_ACCESS_KEYS_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AasListAccessKeysForAccountRequestType {
  std::string pk;
  std::string ak_status;
  std::string ak_type;
};
struct AasListAccessKeysForAccountAccessKeyType {
  std::string create_time;
  std::string access_key_id;
  std::string access_key_secret;
  std::string access_key_status;
  std::string access_key_type;
};
struct AasListAccessKeysForAccountResponseType {
  std::vector<AasListAccessKeysForAccountAccessKeyType> access_keys;
  std::string pk;
};
} // end namespace
#endif
