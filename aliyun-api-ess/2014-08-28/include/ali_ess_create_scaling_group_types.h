#ifndef ALI_ESS_CREATE_SCALING_GROUP_TYPESH
#define ALI_ESS_CREATE_SCALING_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssCreateScalingGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_name;
  std::string min_size;
  std::string max_size;
  std::string default_cooldown;
  std::string load_balancer_id;
  std::string db_instance_id1;
  std::string db_instance_id2;
  std::string db_instance_id3;
  std::string removal_policy1;
  std::string removal_policy2;
  std::string owner_account;
};
struct EssCreateScalingGroupResponseType {
  std::string scaling_group_id;
};
} // end namespace
#endif
