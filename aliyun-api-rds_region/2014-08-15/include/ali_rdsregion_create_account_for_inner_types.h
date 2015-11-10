#ifndef ALI_RDSREGION_CREATE_ACCOUNT_FOR_INNER_TYPESH
#define ALI_RDSREGION_CREATE_ACCOUNT_FOR_INNER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateAccountForInnerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string account_password;
  std::string db_name;
  std::string account_privilege;
  std::string account_description;
  std::string owner_account;
};
struct RdsRegionCreateAccountForInnerResponseType {
};
} // end namespace
#endif
