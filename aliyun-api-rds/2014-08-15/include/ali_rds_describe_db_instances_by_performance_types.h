#ifndef ALI_RDS_DESCRIBE_DB_INSTANCES_BY_PERFORMANCE_TYPESH
#define ALI_RDS_DESCRIBE_DB_INSTANCES_BY_PERFORMANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeDBInstancesByPerformanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string sort_method;
  std::string sort_key;
  std::string owner_account;
};
struct RdsDescribeDBInstancesByPerformanceDBInstancePerformanceType {
  std::string cp_uusage;
  std::string io_ps_usage;
  std::string disk_usage;
  std::string session_usage;
  std::string db_instance_id;
  std::string db_instance_description;
};
struct RdsDescribeDBInstancesByPerformanceResponseType {
  std::vector<RdsDescribeDBInstancesByPerformanceDBInstancePerformanceType> items;
  int page_number;
  int total_record_count;
  int page_record_count;
};
} // end namespace
#endif
