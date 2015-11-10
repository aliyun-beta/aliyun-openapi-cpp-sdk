#ifndef ALI_ONS_ONS_SUBSCRIPTION_GET_TYPESH
#define ALI_ONS_ONS_SUBSCRIPTION_GET_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsSubscriptionGetRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
};
struct OnsOnsSubscriptionGetSubscribeInfoDoType {
  long id;
  int channel_id;
  std::string channel_name;
  std::string region_id;
  std::string region_name;
  std::string owner;
  std::string consumer_id;
  std::string topic;
  int status;
  std::string status_name;
  long create_time;
  long update_time;
};
struct OnsOnsSubscriptionGetResponseType {
  std::vector<OnsOnsSubscriptionGetSubscribeInfoDoType> data;
  std::string help_url;
};
} // end namespace
#endif
