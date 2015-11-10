#ifndef ALI_RDS_MODIFY_DB_INSTANCE_NETWORK_TYPE_TYPESH
#define ALI_RDS_MODIFY_DB_INSTANCE_NETWORK_TYPE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsModifyDBInstanceNetworkTypeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string instance_network_type;
  std::string vp_cid;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string owner_account;
};
struct RdsModifyDBInstanceNetworkTypeResponseType {
};
} // end namespace
#endif
