#ifndef ALI_RDSREGION_DESCRIBE_DB_INSTANCE_ATTRIBUTE_TYPESH
#define ALI_RDSREGION_DESCRIBE_DB_INSTANCE_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeDBInstanceAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsRegionDescribeDBInstanceAttributeReadOnlyDBInstanceIdType {
  std::string db_instance_id;
};
struct RdsRegionDescribeDBInstanceAttributeDBInstanceAttributeType {
  std::vector<RdsRegionDescribeDBInstanceAttributeReadOnlyDBInstanceIdType> read_only_db_instance_ids;
  int ins_id;
  std::string db_instance_id;
  std::string pay_type;
  std::string db_instance_class_type;
  std::string db_instance_type;
  std::string region_id;
  std::string connection_string;
  std::string port;
  std::string engine;
  std::string engine_version;
  std::string db_instance_class;
  long db_instance_memory;
  int db_instance_storage;
  std::string db_instance_net_type;
  std::string db_instance_status;
  std::string db_instance_description;
  std::string lock_mode;
  std::string lock_reason;
  std::string read_delay_time;
  int db_max_quantity;
  int account_max_quantity;
  std::string creation_time;
  std::string expire_time;
  std::string maintain_time;
  std::string availability_value;
  int max_io_ps;
  int max_connections;
  std::string master_instance_id;
  std::string increment_source_db_instance_id;
  std::string guard_db_instance_id;
  std::string temp_db_instance_id;
  std::string security_ip_list;
  std::string zone_id;
  std::string instance_network_type;
  std::string vpc_id;
  std::string connection_mode;
};
struct RdsRegionDescribeDBInstanceAttributeResponseType {
  std::vector<RdsRegionDescribeDBInstanceAttributeDBInstanceAttributeType> items;
};
} // end namespace
#endif
