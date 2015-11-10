#ifndef ALI_ECS_MODIFY_VROUTER_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_VROUTER_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyVRouterAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vrouter_id;
  std::string vrouter_name;
  std::string description;
  std::string owner_account;
};
struct EcsModifyVRouterAttributeResponseType {
};
} // end namespace
#endif
