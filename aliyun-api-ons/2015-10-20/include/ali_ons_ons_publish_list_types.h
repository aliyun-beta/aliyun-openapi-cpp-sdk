#ifndef ALI_ONS_ONS_PUBLISH_LIST_TYPESH
#define ALI_ONS_ONS_PUBLISH_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsPublishListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
};
struct OnsOnsPublishListPublishInfoDoType {
  long id;
  int channel_id;
  std::string channel_name;
  std::string region_id;
  std::string region_name;
  std::string owner;
  std::string producer_id;
  std::string topic;
  int status;
  std::string status_name;
  long create_time;
  long update_time;
};
struct OnsOnsPublishListResponseType {
  std::vector<OnsOnsPublishListPublishInfoDoType> data;
  std::string help_url;
};
} // end namespace
#endif
