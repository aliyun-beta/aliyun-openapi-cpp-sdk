#ifndef ALI_DESCRIBE_ABNORMAL_DB_INSTANCES_TYPESH
#define ALI_DESCRIBE_ABNORMAL_DB_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeAbnormalDBInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
  std::string owner_account;
};
struct DescribeAbnormalDBInstancesAbnormalItemType {
  std::vector<std::string> advise_value;
  std::string check_time;
  std::string check_item;
  std::string abnormal_reason;
  std::string abnormal_value;
  std::string abnormal_detail;
  std::string advice_key;
};
struct DescribeAbnormalDBInstancesInstanceResultType {
  std::vector<DescribeAbnormalDBInstancesAbnormalItemType> abnormal_items;
  std::string db_instance_description;
  std::string db_instance_id;
};
struct DescribeAbnormalDBInstancesResponseType {
  std::vector<DescribeAbnormalDBInstancesInstanceResultType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
