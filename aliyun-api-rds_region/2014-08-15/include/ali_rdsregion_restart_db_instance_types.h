#ifndef ALI_RDSREGION_RESTART_DB_INSTANCE_TYPESH
#define ALI_RDSREGION_RESTART_DB_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionRestartDBInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsRegionRestartDBInstanceResponseType {
};
} // end namespace
#endif
