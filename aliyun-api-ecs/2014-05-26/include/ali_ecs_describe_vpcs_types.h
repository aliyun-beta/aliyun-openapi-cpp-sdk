#ifndef ALI_ECS_DESCRIBE_VPCS_TYPESH
#define ALI_ECS_DESCRIBE_VPCS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeVpcsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vpc_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
};
struct EcsDescribeVpcsVpcType {
  std::vector<std::string> vswitch_ids;
  std::vector<std::string> user_cidrs;
  std::string vpc_id;
  std::string region_id;
  std::string status;
  std::string vpc_name;
  std::string creation_time;
  std::string cidr_block;
  std::string vrouter_id;
  std::string description;
};
struct EcsDescribeVpcsResponseType {
  std::vector<EcsDescribeVpcsVpcType> vpcs;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
