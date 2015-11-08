#ifndef ALI_RESIZE_DISK_TYPESH
#define ALI_RESIZE_DISK_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ResizeDiskRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string disk_id;
  std::string new_size;
  std::string client_token;
  std::string owner_account;
};
struct ResizeDiskResponseType {
};
} // end namespace
#endif
