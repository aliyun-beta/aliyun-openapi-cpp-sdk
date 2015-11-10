#ifndef ALI_ECS_MODIFY_IMAGE_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_IMAGE_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyImageAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string image_name;
  std::string description;
  std::string owner_account;
};
struct EcsModifyImageAttributeResponseType {
};
} // end namespace
#endif
