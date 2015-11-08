#ifndef ALI_ONS_PUBLISH_CREATE_TYPESH
#define ALI_ONS_PUBLISH_CREATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsPublishCreateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string producer_id;
  std::string topic;
  std::string app_name;
};
struct OnsPublishCreateResponseType {
  std::string help_url;
};
} // end namespace
#endif
