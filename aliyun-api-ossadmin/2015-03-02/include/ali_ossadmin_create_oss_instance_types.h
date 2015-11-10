#ifndef ALI_OSSADMIN_CREATE_OSS_INSTANCE_TYPESH
#define ALI_OSSADMIN_CREATE_OSS_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OssAdminCreateOssInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string region;
  std::string owner_account;
};
struct OssAdminCreateOssInstanceResponseType {
  long ali_uid;
  std::string instance_id;
  std::string instacne_status;
  std::string instance_name;
  std::string start_time;
  std::string end_time;
};
} // end namespace
#endif
