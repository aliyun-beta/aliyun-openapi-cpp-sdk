#ifndef ALI_ECS_ATTACH_DISK_TYPESH
#define ALI_ECS_ATTACH_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsAttachDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string disk_id;
  std::string device;
  std::string delete_with_instance;
  std::string owner_account;
};
struct EcsAttachDiskResponseType {
};
} // end namespace
#endif
