#ifndef ALI_ONS_CONSUMER_TIME_SPAN_TYPESH
#define ALI_ONS_CONSUMER_TIME_SPAN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsConsumerTimeSpanRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
};
struct OnsConsumerTimeSpanMessageQueueType {
  std::string topic;
  std::string broker_name;
  int queue_id;
};
struct OnsConsumerTimeSpanQueueTimeSpanType {
  OnsConsumerTimeSpanMessageQueueType message_queue;
  long min_time_stamp;
  long max_time_stamp;
  long consume_time_stamp;
};
struct OnsConsumerTimeSpanDataType {
  std::vector<OnsConsumerTimeSpanQueueTimeSpanType> queue_time_spans;
  std::string topic;
  long min_time_stamp;
  long max_time_stamp;
  long consume_time_stamp;
};
struct OnsConsumerTimeSpanResponseType {
  OnsConsumerTimeSpanDataType data;
  std::string help_url;
};
} // end namespace
#endif
