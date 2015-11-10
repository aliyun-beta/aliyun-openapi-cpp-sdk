#ifndef ALI_ONS_ONS_MESSAGE_PUSH_TYPESH
#define ALI_ONS_ONS_MESSAGE_PUSH_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsMessagePushRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string client_id;
  std::string msg_id;
  std::string topic;
};
struct OnsOnsMessagePushResponseType {
  std::string help_url;
};
} // end namespace
#endif
