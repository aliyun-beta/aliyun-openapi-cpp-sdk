#ifndef ALI_RDS_MODIFY_DB_INSTANCE_MAINTAIN_TIME_TYPESH
#define ALI_RDS_MODIFY_DB_INSTANCE_MAINTAIN_TIME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsModifyDBInstanceMaintainTimeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string maintain_time;
  std::string owner_account;
};
struct RdsModifyDBInstanceMaintainTimeResponseType {
};
} // end namespace
#endif
