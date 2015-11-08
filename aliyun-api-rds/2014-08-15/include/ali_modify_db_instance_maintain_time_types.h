#ifndef ALI_MODIFY_DB_INSTANCE_MAINTAIN_TIME_TYPESH
#define ALI_MODIFY_DB_INSTANCE_MAINTAIN_TIME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyDBInstanceMaintainTimeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string maintain_time;
  std::string owner_account;
};
struct ModifyDBInstanceMaintainTimeResponseType {
};
} // end namespace
#endif
