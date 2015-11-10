#ifndef ALI_ONS_ONS_CONSUMER_ACCUMULATE_TYPESH
#define ALI_ONS_ONS_CONSUMER_ACCUMULATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsConsumerAccumulateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string detail;
};
struct OnsOnsConsumerAccumulateConsumeQueueOffsetType {
  std::string topic;
  std::string broker_name;
  int queue_id;
  long broker_offset;
  long consumer_offset;
  long last_timestamp;
};
struct OnsOnsConsumerAccumulateDetailInTopicDoType {
  std::vector<OnsOnsConsumerAccumulateConsumeQueueOffsetType> offset_list;
  std::string topic;
  float consume_tps;
  long last_timestamp;
  long delay_time;
};
struct OnsOnsConsumerAccumulateDataType {
  std::vector<OnsOnsConsumerAccumulateDetailInTopicDoType> detail_in_topic_list;
  bool online;
  long total_diff;
  float consume_tps;
  long last_timestamp;
  long delay_time;
};
struct OnsOnsConsumerAccumulateResponseType {
  OnsOnsConsumerAccumulateDataType data;
  std::string help_url;
};
} // end namespace
#endif
