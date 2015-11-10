#ifndef ALI_RKVSTORE_VERIFY_PASSWORD_TYPESH
#define ALI_RKVSTORE_VERIFY_PASSWORD_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreVerifyPasswordRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string password;
};
struct RkvstoreVerifyPasswordResponseType {
};
} // end namespace
#endif
