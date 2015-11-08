#ifndef ALI_MODIFY_SCALING_GROUP_TYPESH
#define ALI_MODIFY_SCALING_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyScalingGroupRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_group_id;
  std::string scaling_group_name;
  std::string min_size;
  std::string max_size;
  std::string default_cooldown;
  std::string removal_policy1;
  std::string removal_policy2;
  std::string active_scaling_configuration_id;
  std::string owner_account;
};
struct ModifyScalingGroupResponseType {
};
} // end namespace
#endif
