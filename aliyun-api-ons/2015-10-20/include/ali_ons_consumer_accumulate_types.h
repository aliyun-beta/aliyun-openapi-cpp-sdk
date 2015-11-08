#ifndef ALI_ONS_CONSUMER_ACCUMULATE_TYPESH
#define ALI_ONS_CONSUMER_ACCUMULATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsConsumerAccumulateRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string detail;
};
struct OnsConsumerAccumulateConsumeQueueOffsetType {
  std::string topic;
  std::string broker_name;
  int queue_id;
  long broker_offset;
  long consumer_offset;
  long last_timestamp;
};
struct OnsConsumerAccumulateDetailInTopicDoType {
  std::vector<OnsConsumerAccumulateConsumeQueueOffsetType> offset_list;
  std::string topic;
  float consume_tps;
  long last_timestamp;
  long delay_time;
};
struct OnsConsumerAccumulateDataType {
  std::vector<OnsConsumerAccumulateDetailInTopicDoType> detail_in_topic_list;
  bool online;
  long total_diff;
  float consume_tps;
  long last_timestamp;
  long delay_time;
};
struct OnsConsumerAccumulateResponseType {
  OnsConsumerAccumulateDataType data;
  std::string help_url;
};
} // end namespace
#endif
