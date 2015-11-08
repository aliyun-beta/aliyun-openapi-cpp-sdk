#ifndef ALI_MODIFY_DB_INSTANCE_CONNECTION_MODE_TYPESH
#define ALI_MODIFY_DB_INSTANCE_CONNECTION_MODE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyDBInstanceConnectionModeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string connection_mode;
  std::string owner_account;
};
struct ModifyDBInstanceConnectionModeResponseType {
};
} // end namespace
#endif
