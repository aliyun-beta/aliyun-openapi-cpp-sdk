#ifndef ALI_DESCRIBE_DB_INSTANCES_BY_PERFORMANCE_TYPESH
#define ALI_DESCRIBE_DB_INSTANCES_BY_PERFORMANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDBInstancesByPerformanceRequestType {
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
  std::string tag1key;
  std::string tag2key;
  std::string tag3key;
  std::string tag4key;
  std::string tag5key;
  std::string tag1value;
  std::string tag2value;
  std::string tag3value;
  std::string tag4value;
  std::string tag5value;
  std::string owner_account;
};
struct DescribeDBInstancesByPerformanceDBInstancePerformanceType {
  std::string cp_uusage;
  std::string io_ps_usage;
  std::string disk_usage;
  std::string session_usage;
  std::string db_instance_id;
  std::string db_instance_description;
};
struct DescribeDBInstancesByPerformanceResponseType {
  std::vector<DescribeDBInstancesByPerformanceDBInstancePerformanceType> items;
  int page_number;
  int total_record_count;
  int page_record_count;
};
} // end namespace
#endif
