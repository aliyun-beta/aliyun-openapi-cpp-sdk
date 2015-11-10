#ifndef ALI_RDSREGION_DESCRIBE_ABNORMAL_DB_INSTANCES_TYPESH
#define ALI_RDSREGION_DESCRIBE_ABNORMAL_DB_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeAbnormalDBInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string proxy_id;
  std::string db_instance_id;
  std::string page_size;
  std::string page_number;
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
struct RdsRegionDescribeAbnormalDBInstancesAbnormalItemType {
  std::vector<std::string> advise_value;
  std::string check_time;
  std::string check_item;
  std::string abnormal_reason;
  std::string abnormal_value;
  std::string abnormal_detail;
  std::string advice_key;
};
struct RdsRegionDescribeAbnormalDBInstancesInstanceResultType {
  std::vector<RdsRegionDescribeAbnormalDBInstancesAbnormalItemType> abnormal_items;
  std::string db_instance_description;
  std::string db_instance_id;
};
struct RdsRegionDescribeAbnormalDBInstancesResponseType {
  std::vector<RdsRegionDescribeAbnormalDBInstancesInstanceResultType> items;
  int total_record_count;
  int page_number;
  int page_record_count;
};
} // end namespace
#endif
