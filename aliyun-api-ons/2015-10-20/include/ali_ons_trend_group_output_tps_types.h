#ifndef ALI_ONS_TREND_GROUP_OUTPUT_TPS_TYPESH
#define ALI_ONS_TREND_GROUP_OUTPUT_TPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsTrendGroupOutputTpsRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
  std::string begin_time;
  std::string end_time;
  std::string period;
};
struct OnsTrendGroupOutputTpsStatsDataDoType {
  long x;
  float y;
};
struct OnsTrendGroupOutputTpsDataType {
  std::vector<OnsTrendGroupOutputTpsStatsDataDoType> records;
  std::string title;
  std::string xunit;
  std::string yunit;
};
struct OnsTrendGroupOutputTpsResponseType {
  OnsTrendGroupOutputTpsDataType data;
  std::string help_url;
};
} // end namespace
#endif
