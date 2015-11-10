#ifndef ALI_RDSREGION_DESCRIBE_DB_INSTANCE_IP_ARRAY_LIST_TYPESH
#define ALI_RDSREGION_DESCRIBE_DB_INSTANCE_IP_ARRAY_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsRegionDescribeDBInstanceIPArrayListRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsRegionDescribeDBInstanceIPArrayListDBInstanceIPArrayType {
  std::string db_instance_ip_array_name;
  std::string db_instance_ip_array_attribute;
  std::string security_ip_list;
};
struct RdsRegionDescribeDBInstanceIPArrayListResponseType {
  std::vector<RdsRegionDescribeDBInstanceIPArrayListDBInstanceIPArrayType> items;
};
} // end namespace
#endif
