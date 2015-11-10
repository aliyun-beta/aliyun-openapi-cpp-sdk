#ifndef ALI_OCS_VERIFY_PASSWORD_TYPESH
#define ALI_OCS_VERIFY_PASSWORD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsVerifyPasswordRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string password;
};
struct OcsVerifyPasswordResponseType {
  bool result;
};
} // end namespace
#endif
