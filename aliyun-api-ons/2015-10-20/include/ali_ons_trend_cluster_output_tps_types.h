#ifndef ALI_ONS_TREND_CLUSTER_OUTPUT_TPS_TYPESH
#define ALI_ONS_TREND_CLUSTER_OUTPUT_TPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsTrendClusterOutputTpsRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string cluster;
  std::string begin_time;
  std::string end_time;
  std::string period;
};
struct OnsTrendClusterOutputTpsStatsDataDoType {
  long x;
  float y;
};
struct OnsTrendClusterOutputTpsDataType {
  std::vector<OnsTrendClusterOutputTpsStatsDataDoType> records;
  std::string title;
  std::string xunit;
  std::string yunit;
};
struct OnsTrendClusterOutputTpsResponseType {
  OnsTrendClusterOutputTpsDataType data;
  std::string help_url;
};
} // end namespace
#endif
