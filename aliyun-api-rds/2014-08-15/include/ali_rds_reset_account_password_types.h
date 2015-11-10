#ifndef ALI_RDS_RESET_ACCOUNT_PASSWORD_TYPESH
#define ALI_RDS_RESET_ACCOUNT_PASSWORD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsResetAccountPasswordRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string account_password;
  std::string owner_account;
};
struct RdsResetAccountPasswordResponseType {
};
} // end namespace
#endif
