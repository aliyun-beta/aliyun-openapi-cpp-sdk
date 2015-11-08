#ifndef ALI_RELEASE_OSS_INSTANCE_TYPESH
#define ALI_RELEASE_OSS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ReleaseOssInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string region;
  std::string owner_account;
};
struct ReleaseOssInstanceResponseType {
};
} // end namespace
#endif
