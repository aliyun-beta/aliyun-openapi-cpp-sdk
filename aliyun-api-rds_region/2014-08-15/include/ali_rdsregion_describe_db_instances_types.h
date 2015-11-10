#ifndef ALI_RDSREGION_DESCRIBE_DB_INSTANCES_TYPESH
#define ALI_RDSREGION_DESCRIBE_DB_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeDBInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string engine;
  std::string db_instance_status;
  std::string search_key;
  std::string db_instance_id;
  std::string db_instance_type;
  std::string page_size;
  std::string page_number;
  std::string instance_network_type;
  std::string connection_mode;
  std::string owner_account;
};
struct RdsRegionDescribeDBInstancesReadOnlyDBInstanceIdType {
  std::string db_instance_id;
};
struct RdsRegionDescribeDBInstancesDBInstanceType {
  std::vector<RdsRegionDescribeDBInstancesReadOnlyDBInstanceIdType> read_only_db_instance_ids;
  int ins_id;
  std::string db_instance_id;
  std::string db_instance_description;
  std::string pay_type;
  std::string db_instance_type;
  std::string region_id;
  std::string expire_time;
  std::string db_instance_status;
  std::string engine;
  std::string db_instance_net_type;
  std::string connection_mode;
  std::string lock_mode;
  std::string instance_network_type;
  std::string lock_reason;
  std::string zone_id;
  bool mutri_orsignle;
  std::string create_time;
  std::string engine_version;
  std::string guard_db_instance_id;
  std::string temp_db_instance_id;
  std::string master_instance_id;
  std::string vpc_id;
};
struct RdsRegionDescribeDBInstancesResponseType {
  std::vector<RdsRegionDescribeDBInstancesDBInstanceType> items;
  int page_number;
  int total_record_count;
  int page_record_count;
};
} // end namespace
#endif
