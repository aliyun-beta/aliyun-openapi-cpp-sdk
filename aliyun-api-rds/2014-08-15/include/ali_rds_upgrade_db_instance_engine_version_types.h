#ifndef ALI_RDS_UPGRADE_DB_INSTANCE_ENGINE_VERSION_TYPESH
#define ALI_RDS_UPGRADE_DB_INSTANCE_ENGINE_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsUpgradeDBInstanceEngineVersionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string engine_version;
  std::string owner_account;
};
struct RdsUpgradeDBInstanceEngineVersionResponseType {
  std::string task_id;
};
} // end namespace
#endif
