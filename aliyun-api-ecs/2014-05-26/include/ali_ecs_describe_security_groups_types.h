#ifndef ALI_ECS_DESCRIBE_SECURITY_GROUPS_TYPESH
#define ALI_ECS_DESCRIBE_SECURITY_GROUPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDescribeSecurityGroupsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vpc_id;
  std::string page_number;
  std::string page_size;
  std::string owner_account;
  std::string security_group_ids;
};
struct EcsDescribeSecurityGroupsSecurityGroupType {
  std::string security_group_id;
  std::string description;
  std::string security_group_name;
  std::string vpc_id;
  std::string creation_time;
};
struct EcsDescribeSecurityGroupsResponseType {
  std::vector<EcsDescribeSecurityGroupsSecurityGroupType> security_groups;
  std::string region_id;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
