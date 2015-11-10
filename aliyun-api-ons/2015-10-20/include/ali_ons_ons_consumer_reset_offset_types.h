#ifndef ALI_ONS_ONS_CONSUMER_RESET_OFFSET_TYPESH
#define ALI_ONS_ONS_CONSUMER_RESET_OFFSET_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsConsumerResetOffsetRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
  std::string reset_timestamp;
};
struct OnsOnsConsumerResetOffsetResponseType {
  std::string help_url;
};
} // end namespace
#endif
