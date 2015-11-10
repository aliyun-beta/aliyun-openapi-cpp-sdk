#ifndef ALI_RDSREGION_CREATE_TEMP_DB_INSTANCE_TYPESH
#define ALI_RDSREGION_CREATE_TEMP_DB_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionCreateTempDBInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string backup_id;
  std::string restore_time;
  std::string owner_account;
};
struct RdsRegionCreateTempDBInstanceResponseType {
  std::string temp_db_instance_id;
};
} // end namespace
#endif
