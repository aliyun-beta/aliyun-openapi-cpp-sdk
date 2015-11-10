#ifndef ALI_RDSREGION_CREATE_DATABASE_TYPESH
#define ALI_RDSREGION_CREATE_DATABASE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateDatabaseRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string character_set_name;
  std::string db_description;
  std::string owner_account;
};
struct RdsRegionCreateDatabaseResponseType {
};
} // end namespace
#endif
