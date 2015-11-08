#ifndef ALI_ONS_WARN_LIST_TYPESH
#define ALI_ONS_WARN_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsWarnListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string consumer_id;
  std::string topic;
};
struct OnsWarnListYunContactType {
  std::string name;
  std::string value;
  std::string type;
  std::string params;
  std::string ari;
};
struct OnsWarnListWarnViewDOType {
  std::vector<OnsWarnListYunContactType> contacts;
  std::string aliyun_pk;
  std::string consumer_id;
  std::string topic;
  std::string threshold;
  bool status;
};
struct OnsWarnListResponseType {
  std::vector<OnsWarnListWarnViewDOType> data;
  std::string help_url;
};
} // end namespace
#endif
