#ifndef ALI_ECS_MODIFY_SECURITY_GROUP_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_SECURITY_GROUP_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifySecurityGroupAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string security_group_id;
  std::string description;
  std::string security_group_name;
  std::string owner_account;
};
struct EcsModifySecurityGroupAttributeResponseType {
};
} // end namespace
#endif
