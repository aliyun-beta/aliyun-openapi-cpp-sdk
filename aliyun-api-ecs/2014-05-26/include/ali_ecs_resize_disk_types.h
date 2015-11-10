#ifndef ALI_ECS_RESIZE_DISK_TYPESH
#define ALI_ECS_RESIZE_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsResizeDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string disk_id;
  std::string new_size;
  std::string client_token;
  std::string owner_account;
};
struct EcsResizeDiskResponseType {
};
} // end namespace
#endif
