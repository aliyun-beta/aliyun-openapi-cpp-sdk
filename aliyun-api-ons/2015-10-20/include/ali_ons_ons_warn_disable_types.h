#ifndef ALI_ONS_ONS_WARN_DISABLE_TYPESH
#define ALI_ONS_ONS_WARN_DISABLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsWarnDisableRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
};
struct OnsOnsWarnDisableResponseType {
  std::string help_url;
};
} // end namespace
#endif
