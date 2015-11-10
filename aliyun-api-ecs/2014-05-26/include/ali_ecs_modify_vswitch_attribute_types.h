#ifndef ALI_ECS_MODIFY_VSWITCH_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_VSWITCH_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyVSwitchAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vswitch_id;
  std::string vswitch_name;
  std::string description;
  std::string owner_account;
};
struct EcsModifyVSwitchAttributeResponseType {
};
} // end namespace
#endif
