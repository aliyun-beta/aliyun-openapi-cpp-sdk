#ifndef ALI_ECS_DETACH_DISK_TYPESH
#define ALI_ECS_DETACH_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDetachDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string disk_id;
  std::string owner_account;
};
struct EcsDetachDiskResponseType {
};
} // end namespace
#endif
