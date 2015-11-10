#ifndef ALI_RDS_DESCRIBE_DB_INSTANCE_IP_ARRAY_LIST_TYPESH
#define ALI_RDS_DESCRIBE_DB_INSTANCE_IP_ARRAY_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeDBInstanceIPArrayListRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsDescribeDBInstanceIPArrayListDBInstanceIPArrayType {
  std::string db_instance_ip_array_name;
  std::string db_instance_ip_array_attribute;
  std::string security_ip_list;
};
struct RdsDescribeDBInstanceIPArrayListResponseType {
  std::vector<RdsDescribeDBInstanceIPArrayListDBInstanceIPArrayType> items;
};
} // end namespace
#endif
