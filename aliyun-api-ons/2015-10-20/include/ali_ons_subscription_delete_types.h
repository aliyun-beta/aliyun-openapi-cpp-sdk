#ifndef ALI_ONS_SUBSCRIPTION_DELETE_TYPESH
#define ALI_ONS_SUBSCRIPTION_DELETE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsSubscriptionDeleteRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
};
struct OnsSubscriptionDeleteResponseType {
  std::string help_url;
};
} // end namespace
#endif
