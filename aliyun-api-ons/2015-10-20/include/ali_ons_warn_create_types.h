#ifndef ALI_ONS_WARN_CREATE_TYPESH
#define ALI_ONS_WARN_CREATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsWarnCreateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
  std::string threshold;
  std::string contacts;
};
struct OnsWarnCreateResponseType {
  std::string help_url;
};
} // end namespace
#endif
