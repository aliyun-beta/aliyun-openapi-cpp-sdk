#ifndef ALI_DESCRIBE_SCALING_INSTANCES_TYPESH
#define ALI_DESCRIBE_SCALING_INSTANCES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeScalingInstancesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_id;
  std::string scaling_configuration_id;
  std::string health_status;
  std::string lifecycle_state;
  std::string creation_type;
  std::string page_number;
  std::string page_size;
  std::string instance_id1;
  std::string instance_id2;
  std::string instance_id3;
  std::string instance_id4;
  std::string instance_id5;
  std::string instance_id6;
  std::string instance_id7;
  std::string instance_id8;
  std::string instance_id9;
  std::string instance_id10;
  std::string instance_id11;
  std::string instance_id12;
  std::string instance_id13;
  std::string instance_id14;
  std::string instance_id15;
  std::string instance_id16;
  std::string instance_id17;
  std::string instance_id18;
  std::string instance_id19;
  std::string instance_id20;
  std::string owner_account;
};
struct DescribeScalingInstancesScalingInstanceType {
  std::string instance_id;
  std::string scaling_configuration_id;
  std::string scaling_group_id;
  std::string health_status;
  std::string lifecycle_state;
  std::string creation_time;
  std::string creation_type;
};
struct DescribeScalingInstancesResponseType {
  std::vector<DescribeScalingInstancesScalingInstanceType> scaling_instances;
  int total_count;
  int page_number;
  int page_size;
};
} // end namespace
#endif
