#ifndef ALI_ATTACH_DISK_TYPESH
#define ALI_ATTACH_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AttachDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string disk_id;
  std::string device;
  std::string delete_with_instance;
  std::string owner_account;
};
struct AttachDiskResponseType {
};
} // end namespace
#endif
