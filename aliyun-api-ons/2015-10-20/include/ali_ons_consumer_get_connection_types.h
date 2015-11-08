#ifndef ALI_ONS_CONSUMER_GET_CONNECTION_TYPESH
#define ALI_ONS_CONSUMER_GET_CONNECTION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsConsumerGetConnectionRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
};
struct OnsConsumerGetConnectionConnectionDoType {
  std::string client_id;
  std::string client_addr;
  std::string language;
  std::string version;
};
struct OnsConsumerGetConnectionDataType {
  std::vector<OnsConsumerGetConnectionConnectionDoType> connection_list;
};
struct OnsConsumerGetConnectionResponseType {
  OnsConsumerGetConnectionDataType data;
  std::string help_url;
};
} // end namespace
#endif
