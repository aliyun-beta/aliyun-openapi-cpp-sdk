#ifndef ALI_DESCRIBE_DB_INSTANCES_BY_EXPIRE_TIME_TYPESH
#define ALI_DESCRIBE_DB_INSTANCES_BY_EXPIRE_TIME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeDBInstancesByExpireTimeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string expire_period;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct DescribeDBInstancesByExpireTimeDBInstanceExpireTimeType {
  std::string db_instance_id;
  std::string db_instance_description;
  std::string expire_time;
};
struct DescribeDBInstancesByExpireTimeResponseType {
  std::vector<DescribeDBInstancesByExpireTimeDBInstanceExpireTimeType> items;
  int page_number;
  int total_record_count;
  int page_record_count;
};
} // end namespace
#endif
