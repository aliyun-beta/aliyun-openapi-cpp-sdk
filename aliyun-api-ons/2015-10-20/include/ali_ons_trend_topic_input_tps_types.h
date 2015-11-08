#ifndef ALI_ONS_TREND_TOPIC_INPUT_TPS_TYPESH
#define ALI_ONS_TREND_TOPIC_INPUT_TPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsTrendTopicInputTpsRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string topic;
  std::string begin_time;
  std::string end_time;
  std::string period;
};
struct OnsTrendTopicInputTpsStatsDataDoType {
  long x;
  float y;
};
struct OnsTrendTopicInputTpsDataType {
  std::vector<OnsTrendTopicInputTpsStatsDataDoType> records;
  std::string title;
  std::string xunit;
  std::string yunit;
};
struct OnsTrendTopicInputTpsResponseType {
  OnsTrendTopicInputTpsDataType data;
  std::string help_url;
};
} // end namespace
#endif
