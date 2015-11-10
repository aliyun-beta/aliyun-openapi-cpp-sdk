#ifndef ALI_ONS_ONS_TREND_GROUP_OUTPUT_TPS_TYPESH
#define ALI_ONS_ONS_TREND_GROUP_OUTPUT_TPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTrendGroupOutputTpsRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
  std::string begin_time;
  std::string end_time;
  std::string period;
};
struct OnsOnsTrendGroupOutputTpsStatsDataDoType {
  long x;
  float y;
};
struct OnsOnsTrendGroupOutputTpsDataType {
  std::vector<OnsOnsTrendGroupOutputTpsStatsDataDoType> records;
  std::string title;
  std::string xunit;
  std::string yunit;
};
struct OnsOnsTrendGroupOutputTpsResponseType {
  OnsOnsTrendGroupOutputTpsDataType data;
  std::string help_url;
};
} // end namespace
#endif
