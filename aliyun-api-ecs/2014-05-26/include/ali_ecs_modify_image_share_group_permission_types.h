#ifndef ALI_ECS_MODIFY_IMAGE_SHARE_GROUP_PERMISSION_TYPESH
#define ALI_ECS_MODIFY_IMAGE_SHARE_GROUP_PERMISSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyImageShareGroupPermissionRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string image_id;
  std::string add_group1;
  std::string remove_group1;
  std::string owner_account;
};
struct EcsModifyImageShareGroupPermissionResponseType {
};
} // end namespace
#endif
