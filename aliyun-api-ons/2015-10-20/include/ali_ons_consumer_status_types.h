#ifndef ALI_ONS_CONSUMER_STATUS_TYPESH
#define ALI_ONS_CONSUMER_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsConsumerStatusRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string detail;
  std::string need_jstack;
};
struct OnsConsumerStatusConnectionDoType {
  std::string client_id;
  std::string client_addr;
  std::string language;
  std::string version;
};
struct OnsConsumerStatusConsumeQueueOffsetType {
  std::string topic;
  std::string broker_name;
  int queue_id;
  long broker_offset;
  long consumer_offset;
  long last_timestamp;
};
struct OnsConsumerStatusDetailInTopicDoType {
  std::vector<OnsConsumerStatusConsumeQueueOffsetType> offset_list;
  std::string topic;
  float consume_tps;
  long last_timestamp;
  long delay_time;
};
struct OnsConsumerStatusSubscriptionDataType {
  std::vector<std::string> tags_set;
  std::vector<std::string> code_set;
  bool class_filter_mode;
  std::string topic;
  std::string sub_string;
  long sub_version;
};
struct OnsConsumerStatusConsumerRunningDataDoType {
  std::string consumer_id;
  std::string topic;
  float rt;
  float ok_tps;
  long failed_tps;
  long failed_count_per_hour;
};
struct OnsConsumerStatusThreadTrackDoType {
  std::vector<std::string> track_list;
  std::string thread;
};
struct OnsConsumerStatusWarnMapType {
  std::string lo_ck;
  std::string un_lo_ck;
  std::string bl_oc_k;
};
struct OnsConsumerStatusProcessQueueInfoDoType {
  OnsConsumerStatusWarnMapType warn_map;
  std::string topic;
  std::string broker_name;
  int queue_id;
};
struct OnsConsumerStatusConsumerConnectionInfoDoType {
  std::vector<OnsConsumerStatusSubscriptionDataType> subscription_set;
  std::vector<OnsConsumerStatusConsumerRunningDataDoType> running_data_list;
  std::vector<OnsConsumerStatusThreadTrackDoType> jstack;
  std::vector<OnsConsumerStatusProcessQueueInfoDoType> process_queue_info_do_list;
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
struct OnsConsumerStatusDataType {
  std::vector<OnsConsumerStatusConnectionDoType> connection_set;
  std::vector<OnsConsumerStatusDetailInTopicDoType> detail_in_topic_list;
  std::vector<OnsConsumerStatusConsumerConnectionInfoDoType> consumer_connection_info_list;
  bool online;
  long total_diff;
  float consume_tps;
  long last_timestamp;
  long delay_time;
  std::string consume_model;
  bool subscription_same;
  bool rebalance_ok;
};
struct OnsConsumerStatusResponseType {
  OnsConsumerStatusDataType data;
  std::string help_url;
};
} // end namespace
#endif
