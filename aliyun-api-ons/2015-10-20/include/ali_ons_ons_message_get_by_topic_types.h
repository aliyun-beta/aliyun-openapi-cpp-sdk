#ifndef ALI_ONS_ONS_MESSAGE_GET_BY_TOPIC_TYPESH
#define ALI_ONS_ONS_MESSAGE_GET_BY_TOPIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsMessageGetByTopicRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
};
struct OnsOnsMessageGetByTopicMessagePropertyType {
  std::string name;
  std::string value;
};
struct OnsOnsMessageGetByTopicOnsRestMessageDoType {
  std::vector<OnsOnsMessageGetByTopicMessagePropertyType> property_list;
  std::string topic;
  int flag;
  std::string body;
  int queue_id;
  int store_size;
  long queue_offset;
  int sys_flag;
  long born_timestamp;
  std::string born_host;
  long store_timestamp;
  std::string store_host;
  std::string msg_id;
  long commit_log_offset;
  int body_cr_c;
  int reconsume_times;
  long prepared_transaction_offset;
};
struct OnsOnsMessageGetByTopicResponseType {
  std::vector<OnsOnsMessageGetByTopicOnsRestMessageDoType> data;
  std::string help_url;
};
} // end namespace
#endif
