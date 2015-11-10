#ifndef ALI_ONS_ONS_CONSUMER_GET_CONNECTION_TYPESH
#define ALI_ONS_ONS_CONSUMER_GET_CONNECTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsConsumerGetConnectionRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
};
struct OnsOnsConsumerGetConnectionConnectionDoType {
  std::string client_id;
  std::string client_addr;
  std::string language;
  std::string version;
};
struct OnsOnsConsumerGetConnectionDataType {
  std::vector<OnsOnsConsumerGetConnectionConnectionDoType> connection_list;
};
struct OnsOnsConsumerGetConnectionResponseType {
  OnsOnsConsumerGetConnectionDataType data;
  std::string help_url;
};
} // end namespace
#endif
