#ifndef ALI_RDSREGION_CREATE_ACCOUNT_TYPESH
#define ALI_RDSREGION_CREATE_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateAccountRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string account_name;
  std::string account_password;
  std::string account_description;
  std::string owner_account;
};
struct RdsRegionCreateAccountResponseType {
};
} // end namespace
#endif
