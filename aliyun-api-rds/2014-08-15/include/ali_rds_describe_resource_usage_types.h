#ifndef ALI_RDS_DESCRIBE_RESOURCE_USAGE_TYPESH
#define ALI_RDS_DESCRIBE_RESOURCE_USAGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RdsDescribeResourceUsageRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string client_token;
  std::string db_instance_id;
  std::string owner_account;
};
struct RdsDescribeResourceUsageResponseType {
  std::string db_instance_id;
  std::string engine;
  long disk_used;
  long data_size;
  long log_size;
  long backup_size;
  long sq_lsize;
  long cold_backup_size;
};
} // end namespace
#endif
