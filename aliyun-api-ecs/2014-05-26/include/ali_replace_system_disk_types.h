#ifndef ALI_REPLACE_SYSTEM_DISK_TYPESH
#define ALI_REPLACE_SYSTEM_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ReplaceSystemDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string image_id;
  std::string client_token;
  std::string owner_account;
  std::string use_additional_service;
};
struct ReplaceSystemDiskResponseType {
  std::string disk_id;
};
} // end namespace
#endif
