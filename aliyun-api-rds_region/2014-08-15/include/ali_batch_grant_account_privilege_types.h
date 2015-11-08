#ifndef ALI_BATCH_GRANT_ACCOUNT_PRIVILEGE_TYPESH
#define ALI_BATCH_GRANT_ACCOUNT_PRIVILEGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct BatchGrantAccountPrivilegeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string db_name;
  std::string account_privilege;
  std::string owner_account;
};
struct BatchGrantAccountPrivilegeResponseType {
};
} // end namespace
#endif
