#ifndef ALI_DETACH_DISK_TYPESH
#define ALI_DETACH_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DetachDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string disk_id;
  std::string owner_account;
};
struct DetachDiskResponseType {
};
} // end namespace
#endif
