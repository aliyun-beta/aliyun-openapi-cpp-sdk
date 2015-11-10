#ifndef ALI_ONS_ONS_CONSUMER_STATUS_TYPESH
#define ALI_ONS_ONS_CONSUMER_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsConsumerStatusRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string detail;
  std::string need_jstack;
};
struct OnsOnsConsumerStatusConnectionDoType {
  std::string client_id;
  std::string client_addr;
  std::string language;
  std::string version;
};
struct OnsOnsConsumerStatusConsumeQueueOffsetType {
  std::string topic;
  std::string broker_name;
  int queue_id;
  long broker_offset;
  long consumer_offset;
  long last_timestamp;
};
struct OnsOnsConsumerStatusDetailInTopicDoType {
  std::vector<OnsOnsConsumerStatusConsumeQueueOffsetType> offset_list;
  std::string topic;
  float consume_tps;
  long last_timestamp;
  long delay_time;
};
struct OnsOnsConsumerStatusSubscriptionDataType {
  std::vector<std::string> tags_set;
  std::vector<std::string> code_set;
  bool class_filter_mode;
  std::string topic;
  std::string sub_string;
  long sub_version;
};
struct OnsOnsConsumerStatusConsumerRunningDataDoType {
  std::string consumer_id;
  std::string topic;
  float rt;
  float ok_tps;
  long failed_tps;
  long failed_count_per_hour;
};
struct OnsOnsConsumerStatusThreadTrackDoType {
  std::vector<std::string> track_list;
  std::string thread;
};
struct OnsOnsConsumerStatusWarnMapType {
  std::string lo_ck;
  std::string un_lo_ck;
  std::string bl_oc_k;
};
struct OnsOnsConsumerStatusProcessQueueInfoDoType {
  OnsOnsConsumerStatusWarnMapType warn_map;
  std::string topic;
  std::string broker_name;
  int queue_id;
};
struct OnsOnsConsumerStatusConsumerConnectionInfoDoType {
  std::vector<OnsOnsConsumerStatusSubscriptionDataType> subscription_set;
  std::vector<OnsOnsConsumerStatusConsumerRunningDataDoType> running_data_list;
  std::vector<OnsOnsConsumerStatusThreadTrackDoType> jstack;
  std::vector<OnsOnsConsumerStatusProcessQueueInfoDoType> process_queue_info_do_list;
  std::string instance_id;
  std::string connection;
  std::string language;
  std::string version;
  std::string consume_model;
  std::string consume_type;
  int thread_count;
  long start_time_stamp;
  long last_time_stamp;
};
struct OnsOnsConsumerStatusDataType {
  std::vector<OnsOnsConsumerStatusConnectionDoType> connection_set;
  std::vector<OnsOnsConsumerStatusDetailInTopicDoType> detail_in_topic_list;
  std::vector<OnsOnsConsumerStatusConsumerConnectionInfoDoType> consumer_connection_info_list;
  bool online;
  long total_diff;
  float consume_tps;
  long last_timestamp;
  long delay_time;
  std::string consume_model;
  bool subscription_same;
  bool rebalance_ok;
};
struct OnsOnsConsumerStatusResponseType {
  OnsOnsConsumerStatusDataType data;
  std::string help_url;
};
} // end namespace
#endif
