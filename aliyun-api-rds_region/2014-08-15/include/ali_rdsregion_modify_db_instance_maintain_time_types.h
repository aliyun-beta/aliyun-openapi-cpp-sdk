#ifndef ALI_RDSREGION_MODIFY_DB_INSTANCE_MAINTAIN_TIME_TYPESH
#define ALI_RDSREGION_MODIFY_DB_INSTANCE_MAINTAIN_TIME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionModifyDBInstanceMaintainTimeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string maintain_time;
  std::string owner_account;
};
struct RdsRegionModifyDBInstanceMaintainTimeResponseType {
};
} // end namespace
#endif
