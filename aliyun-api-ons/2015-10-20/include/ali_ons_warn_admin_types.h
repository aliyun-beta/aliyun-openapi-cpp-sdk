#ifndef ALI_ONS_WARN_ADMIN_TYPESH
#define ALI_ONS_WARN_ADMIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsWarnAdminRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string user_id;
  std::string consumer_id;
  std::string topic;
  std::string type;
};
struct OnsWarnAdminResponseType {
  std::string help_url;
};
} // end namespace
#endif
