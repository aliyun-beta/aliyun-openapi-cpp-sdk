#ifndef ALI_ONS_ONS_REGION_LIST_TYPESH
#define ALI_ONS_ONS_REGION_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsRegionListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
};
struct OnsOnsRegionListRegionDoType {
  long id;
  std::string region_id;
  std::string region_name;
  int channel_id;
  std::string channel_name;
  std::string owner;
  std::string cluster;
  int status;
  int is_share;
  long create_time;
  long update_time;
};
struct OnsOnsRegionListResponseType {
  std::vector<OnsOnsRegionListRegionDoType> data;
  std::string help_url;
};
} // end namespace
#endif
