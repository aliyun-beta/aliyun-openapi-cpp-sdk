#ifndef ALI_ECS_CREATE_DISK_TYPESH
#define ALI_ECS_CREATE_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCreateDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string zone_id;
  std::string snapshot_id;
  std::string disk_name;
  std::string size;
  std::string disk_category;
  std::string description;
  std::string client_token;
  std::string owner_account;
};
struct EcsCreateDiskResponseType {
  std::string disk_id;
};
} // end namespace
#endif
