#ifndef ALI_ONS_ONS_TOPIC_CREATE_TYPESH
#define ALI_ONS_ONS_TOPIC_CREATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTopicCreateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string cluster;
  std::string queue_num;
  std::string order;
  std::string qps;
  std::string status;
  std::string remark;
  std::string appkey;
  std::string app_name;
};
struct OnsOnsTopicCreateResponseType {
  std::string help_url;
};
} // end namespace
#endif
