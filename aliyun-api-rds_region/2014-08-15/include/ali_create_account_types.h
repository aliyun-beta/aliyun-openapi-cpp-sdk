#ifndef ALI_CREATE_ACCOUNT_TYPESH
#define ALI_CREATE_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateAccountRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string account_password;
  std::string account_description;
  std::string owner_account;
};
struct CreateAccountResponseType {
};
} // end namespace
#endif
