#ifndef ALI_ONS_ONS_TOPIC_STATUS_TYPESH
#define ALI_ONS_ONS_TOPIC_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTopicStatusRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string detail;
};
struct OnsOnsTopicStatusTopicQueueOffsetType {
  std::string topic;
  std::string broker_name;
  int queue_id;
  long min_offset;
  long max_offset;
  long last_update_timestamp;
};
struct OnsOnsTopicStatusDataType {
  std::vector<OnsOnsTopicStatusTopicQueueOffsetType> offset_table;
  long total_count;
  long last_time_stamp;
};
struct OnsOnsTopicStatusResponseType {
  OnsOnsTopicStatusDataType data;
  std::string help_url;
};
} // end namespace
#endif
