#ifndef ALI_ECS_MODIFY_DISK_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_DISK_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyDiskAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string disk_id;
  std::string disk_name;
  std::string description;
  std::string delete_with_instance;
  std::string delete_auto_snapshot;
  std::string enable_auto_snapshot;
  std::string owner_account;
};
struct EcsModifyDiskAttributeResponseType {
};
} // end namespace
#endif
