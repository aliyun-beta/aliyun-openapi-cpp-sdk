#ifndef ALI_RDSREGION_PURGE_DB_INSTANCE_LOG_TYPESH
#define ALI_RDSREGION_PURGE_DB_INSTANCE_LOG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionPurgeDBInstanceLogRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsRegionPurgeDBInstanceLogResponseType {
};
} // end namespace
#endif
