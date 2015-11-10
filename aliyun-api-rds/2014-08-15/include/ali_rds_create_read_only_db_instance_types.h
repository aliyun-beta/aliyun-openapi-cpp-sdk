#ifndef ALI_RDS_CREATE_READ_ONLY_DB_INSTANCE_TYPESH
#define ALI_RDS_CREATE_READ_ONLY_DB_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsCreateReadOnlyDBInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string zone_id;
  std::string db_instance_id;
  std::string db_instance_class;
  std::string db_instance_storage;
  std::string engine_version;
  std::string pay_type;
  std::string db_instance_description;
  std::string instance_network_type;
  std::string vp_cid;
  std::string vswitch_id;
  std::string private_ip_address;
  std::string owner_account;
};
struct RdsCreateReadOnlyDBInstanceResponseType {
  std::string db_instance_id;
  std::string order_id;
  std::string connection_string;
  std::string port;
};
} // end namespace
#endif
