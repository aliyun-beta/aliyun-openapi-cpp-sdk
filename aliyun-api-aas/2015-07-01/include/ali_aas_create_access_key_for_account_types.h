#ifndef ALI_AAS_CREATE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#define ALI_AAS_CREATE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AasCreateAccessKeyForAccountRequestType {
  std::string pk;
  std::string ak_secret;
};
struct AasCreateAccessKeyForAccountAccessKeyType {
  std::string create_time;
  std::string access_key_id;
  std::string access_key_secret;
  std::string access_key_status;
  std::string access_key_type;
};
struct AasCreateAccessKeyForAccountResponseType {
  AasCreateAccessKeyForAccountAccessKeyType access_key;
  std::string pk;
};
} // end namespace
#endif
