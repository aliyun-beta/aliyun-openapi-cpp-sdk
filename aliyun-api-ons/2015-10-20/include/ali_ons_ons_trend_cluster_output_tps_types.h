#ifndef ALI_ONS_ONS_TREND_CLUSTER_OUTPUT_TPS_TYPESH
#define ALI_ONS_ONS_TREND_CLUSTER_OUTPUT_TPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTrendClusterOutputTpsRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string cluster;
  std::string begin_time;
  std::string end_time;
  std::string period;
};
struct OnsOnsTrendClusterOutputTpsStatsDataDoType {
  long x;
  float y;
};
struct OnsOnsTrendClusterOutputTpsDataType {
  std::vector<OnsOnsTrendClusterOutputTpsStatsDataDoType> records;
  std::string title;
  std::string xunit;
  std::string yunit;
};
struct OnsOnsTrendClusterOutputTpsResponseType {
  OnsOnsTrendClusterOutputTpsDataType data;
  std::string help_url;
};
} // end namespace
#endif
