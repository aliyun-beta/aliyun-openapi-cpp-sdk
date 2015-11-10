#ifndef ALI_ONS_ONS_PUBLISH_CREATE_TYPESH
#define ALI_ONS_ONS_PUBLISH_CREATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsPublishCreateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string producer_id;
  std::string topic;
  std::string app_name;
};
struct OnsOnsPublishCreateResponseType {
  std::string help_url;
};
} // end namespace
#endif
