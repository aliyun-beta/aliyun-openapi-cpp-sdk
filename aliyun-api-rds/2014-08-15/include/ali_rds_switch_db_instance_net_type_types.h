#ifndef ALI_RDS_SWITCH_DB_INSTANCE_NET_TYPE_TYPESH
#define ALI_RDS_SWITCH_DB_INSTANCE_NET_TYPE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsSwitchDBInstanceNetTypeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string connection_string_prefix;
  std::string port;
  std::string owner_account;
};
struct RdsSwitchDBInstanceNetTypeResponseType {
};
} // end namespace
#endif
