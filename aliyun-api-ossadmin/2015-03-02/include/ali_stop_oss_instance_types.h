#ifndef ALI_STOP_OSS_INSTANCE_TYPESH
#define ALI_STOP_OSS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StopOssInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string region;
  std::string owner_account;
};
struct StopOssInstanceResponseType {
};
} // end namespace
#endif
