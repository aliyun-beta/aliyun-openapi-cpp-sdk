#ifndef ALI_CREATE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#define ALI_CREATE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateAccessKeyForAccountRequestType {
  std::string pk;
  std::string ak_secret;
};
struct CreateAccessKeyForAccountAccessKeyType {
  std::string create_time;
  std::string access_key_id;
  std::string access_key_secret;
  std::string access_key_status;
  std::string access_key_type;
};
struct CreateAccessKeyForAccountResponseType {
  CreateAccessKeyForAccountAccessKeyType access_key;
  std::string pk;
};
} // end namespace
#endif
