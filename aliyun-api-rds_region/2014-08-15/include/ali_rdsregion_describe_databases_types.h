#ifndef ALI_RDSREGION_DESCRIBE_DATABASES_TYPESH
#define ALI_RDSREGION_DESCRIBE_DATABASES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeDatabasesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string db_name;
  std::string db_status;
  std::string owner_account;
};
struct RdsRegionDescribeDatabasesAccountPrivilegeInfoType {
  std::string account;
  std::string account_privilege;
};
struct RdsRegionDescribeDatabasesDatabaseType {
  std::vector<RdsRegionDescribeDatabasesAccountPrivilegeInfoType> accounts;
  std::string db_name;
  std::string db_instance_id;
  std::string engine;
  std::string db_status;
  std::string character_set_name;
  std::string db_description;
};
struct RdsRegionDescribeDatabasesResponseType {
  std::vector<RdsRegionDescribeDatabasesDatabaseType> databases;
};
} // end namespace
#endif
