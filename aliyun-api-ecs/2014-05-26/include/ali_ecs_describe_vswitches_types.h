#ifndef ALI_ECS_DESCRIBE_VSWITCHES_TYPESH
#define ALI_ECS_DESCRIBE_VSWITCHES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeVSwitchesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vpc_id;
  std::string vswitch_id;
  std::string zone_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
};
struct EcsDescribeVSwitchesVSwitchType {
  std::string vswitch_id;
  std::string vpc_id;
  std::string status;
  std::string cidr_block;
  std::string zone_id;
  long available_ip_address_count;
  std::string description;
  std::string vswitch_name;
  std::string creation_time;
};
struct EcsDescribeVSwitchesResponseType {
  std::vector<EcsDescribeVSwitchesVSwitchType> vswitches;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
