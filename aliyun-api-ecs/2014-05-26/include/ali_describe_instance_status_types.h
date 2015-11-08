#ifndef ALI_DESCRIBE_INSTANCE_STATUS_TYPESH
#define ALI_DESCRIBE_INSTANCE_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeInstanceStatusRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string zone_id;
  std::string cluster_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
};
struct DescribeInstanceStatusInstanceStatusType {
  std::string instance_id;
  std::string status;
};
struct DescribeInstanceStatusResponseType {
  std::vector<DescribeInstanceStatusInstanceStatusType> instance_statuses;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
