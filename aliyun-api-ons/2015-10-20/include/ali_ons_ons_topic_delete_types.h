#ifndef ALI_ONS_ONS_TOPIC_DELETE_TYPESH
#define ALI_ONS_ONS_TOPIC_DELETE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTopicDeleteRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string cluster;
};
struct OnsOnsTopicDeleteResponseType {
  std::string help_url;
};
} // end namespace
#endif
