#ifndef ALI_RDSREGION_CREATE_DATABASE_FOR_INNER_TYPESH
#define ALI_RDSREGION_CREATE_DATABASE_FOR_INNER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateDatabaseForInnerRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string character_set_name;
  std::string db_description;
  std::string account_name;
  std::string account_privilege;
  std::string account_password;
  std::string owner_account;
};
struct RdsRegionCreateDatabaseForInnerResponseType {
};
} // end namespace
#endif
