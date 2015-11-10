#ifndef ALI_ONS_ONS_TREND_CLUSTER_INPUT_TPS_TYPESH
#define ALI_ONS_ONS_TREND_CLUSTER_INPUT_TPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsTrendClusterInputTpsRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string cluster;
  std::string begin_time;
  std::string end_time;
  std::string period;
};
struct OnsOnsTrendClusterInputTpsStatsDataDoType {
  long x;
  float y;
};
struct OnsOnsTrendClusterInputTpsDataType {
  std::vector<OnsOnsTrendClusterInputTpsStatsDataDoType> records;
  std::string title;
  std::string xunit;
  std::string yunit;
};
struct OnsOnsTrendClusterInputTpsResponseType {
  OnsOnsTrendClusterInputTpsDataType data;
  std::string help_url;
};
} // end namespace
#endif
