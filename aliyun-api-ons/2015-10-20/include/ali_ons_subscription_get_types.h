#ifndef ALI_ONS_SUBSCRIPTION_GET_TYPESH
#define ALI_ONS_SUBSCRIPTION_GET_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsSubscriptionGetRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
};
struct OnsSubscriptionGetSubscribeInfoDoType {
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
struct OnsSubscriptionGetResponseType {
  std::vector<OnsSubscriptionGetSubscribeInfoDoType> data;
  std::string help_url;
};
} // end namespace
#endif
