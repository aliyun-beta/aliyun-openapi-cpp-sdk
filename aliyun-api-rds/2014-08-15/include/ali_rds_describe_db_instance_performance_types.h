#ifndef ALI_RDS_DESCRIBE_DB_INSTANCE_PERFORMANCE_TYPESH
#define ALI_RDS_DESCRIBE_DB_INSTANCE_PERFORMANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeDBInstancePerformanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string key;
  std::string start_time;
  std::string end_time;
  std::string owner_account;
};
struct RdsDescribeDBInstancePerformancePerformanceValueType {
  std::string value;
  std::string date;
};
struct RdsDescribeDBInstancePerformancePerformanceKeyType {
  std::vector<RdsDescribeDBInstancePerformancePerformanceValueType> values;
  std::string key;
  std::string unit;
  std::string value_format;
};
struct RdsDescribeDBInstancePerformanceResponseType {
  std::vector<RdsDescribeDBInstancePerformancePerformanceKeyType> performance_keys;
  std::string db_instance_id;
  std::string engine;
  std::string start_time;
  std::string end_time;
};
} // end namespace
#endif
