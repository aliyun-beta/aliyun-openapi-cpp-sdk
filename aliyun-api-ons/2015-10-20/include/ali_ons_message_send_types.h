#ifndef ALI_ONS_MESSAGE_SEND_TYPESH
#define ALI_ONS_MESSAGE_SEND_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsMessageSendRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string producer_id;
  std::string topic;
  std::string tag;
  std::string key;
  std::string message;
};
struct OnsMessageSendResponseType {
  std::string help_url;
  std::string data;
};
} // end namespace
#endif
