#ifndef ALI_CREATE_ACCESS_KEY_TYPESH
#define ALI_CREATE_ACCESS_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateAccessKeyRequestType {
  std::string user_name;
};
struct CreateAccessKeyAccessKeyType {
  std::string access_key_id;
  std::string access_key_secret;
  std::string status;
  std::string create_date;
};
struct CreateAccessKeyResponseType {
  CreateAccessKeyAccessKeyType access_key;
};
} // end namespace
#endif
