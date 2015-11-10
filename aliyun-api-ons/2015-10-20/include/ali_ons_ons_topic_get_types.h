#ifndef ALI_ONS_ONS_TOPIC_GET_TYPESH
#define ALI_ONS_ONS_TOPIC_GET_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTopicGetRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
};
struct OnsOnsTopicGetPublishInfoDoType {
  long id;
  int channel_id;
  std::string channel_name;
  std::string region_id;
  std::string region_name;
  std::string topic;
  std::string owner;
  int relation;
  std::string relation_name;
  int status;
  std::string status_name;
  int appkey;
  long create_time;
  long update_time;
  std::string remark;
};
struct OnsOnsTopicGetResponseType {
  std::vector<OnsOnsTopicGetPublishInfoDoType> data;
  std::string help_url;
};
} // end namespace
#endif
