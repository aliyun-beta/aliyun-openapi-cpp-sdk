#ifndef ALI_DESCRIBE_SCALING_GROUPS_TYPESH
#define ALI_DESCRIBE_SCALING_GROUPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeScalingGroupsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_number;
  std::string page_size;
  std::string scaling_group_id1;
  std::string scaling_group_id2;
  std::string scaling_group_id3;
  std::string scaling_group_id4;
  std::string scaling_group_id5;
  std::string scaling_group_id6;
  std::string scaling_group_id7;
  std::string scaling_group_id8;
  std::string scaling_group_id9;
  std::string scaling_group_id10;
  std::string scaling_group_id12;
  std::string scaling_group_id13;
  std::string scaling_group_id14;
  std::string scaling_group_id15;
  std::string scaling_group_id16;
  std::string scaling_group_id17;
  std::string scaling_group_id18;
  std::string scaling_group_id19;
  std::string scaling_group_id20;
  std::string scaling_group_name1;
  std::string scaling_group_name2;
  std::string scaling_group_name3;
  std::string scaling_group_name4;
  std::string scaling_group_name5;
  std::string scaling_group_name6;
  std::string scaling_group_name7;
  std::string scaling_group_name8;
  std::string scaling_group_name9;
  std::string scaling_group_name10;
  std::string scaling_group_name11;
  std::string scaling_group_name12;
  std::string scaling_group_name13;
  std::string scaling_group_name14;
  std::string scaling_group_name15;
  std::string scaling_group_name16;
  std::string scaling_group_name17;
  std::string scaling_group_name18;
  std::string scaling_group_name19;
  std::string scaling_group_name20;
  std::string owner_account;
};
struct DescribeScalingGroupsScalingGroupType {
  std::vector<std::string> removal_policies;
  std::vector<std::string> db_instance_ids;
  int default_cooldown;
  int max_size;
  int pending_capacity;
  std::string load_balancer_id;
  int removing_capacity;
  std::string scaling_group_name;
  int active_capacity;
  std::string active_scaling_configuration_id;
  std::string scaling_group_id;
  std::string region_id;
  int total_capacity;
  int min_size;
  std::string lifecycle_state;
  std::string creation_time;
};
struct DescribeScalingGroupsResponseType {
  std::vector<DescribeScalingGroupsScalingGroupType> scaling_groups;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
