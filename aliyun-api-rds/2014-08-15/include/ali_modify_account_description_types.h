#ifndef ALI_MODIFY_ACCOUNT_DESCRIPTION_TYPESH
#define ALI_MODIFY_ACCOUNT_DESCRIPTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyAccountDescriptionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string account_description;
  std::string owner_account;
};
struct ModifyAccountDescriptionResponseType {
};
} // end namespace
#endif
