#ifndef ALI_DESCRIBE_DB_INSTANCE_PERFORMANCE_TYPESH
#define ALI_DESCRIBE_DB_INSTANCE_PERFORMANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDBInstancePerformanceRequestType {
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
struct DescribeDBInstancePerformancePerformanceValueType {
  std::string value;
  std::string date;
};
struct DescribeDBInstancePerformancePerformanceKeyType {
  std::vector<DescribeDBInstancePerformancePerformanceValueType> values;
  std::string key;
  std::string unit;
  std::string value_format;
};
struct DescribeDBInstancePerformanceResponseType {
  std::vector<DescribeDBInstancePerformancePerformanceKeyType> performance_keys;
  std::string db_instance_id;
  std::string engine;
  std::string start_time;
  std::string end_time;
};
} // end namespace
#endif
