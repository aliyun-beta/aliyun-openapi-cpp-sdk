#ifndef ALI_RDSREGION_MODIFY_DB_INSTANCE_CONNECTION_STRING_TYPESH
#define ALI_RDSREGION_MODIFY_DB_INSTANCE_CONNECTION_STRING_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionModifyDBInstanceConnectionStringRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string current_connection_string;
  std::string connection_string_prefix;
  std::string port;
  std::string owner_account;
};
struct RdsRegionModifyDBInstanceConnectionStringResponseType {
};
} // end namespace
#endif
