#ifndef ALI_ONS_ONS_CLUSTER_LIST_TYPESH
#define ALI_ONS_ONS_CLUSTER_LIST_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OnsOnsClusterListRequestType {
  std::string ons_region_id;
  std::string ons_platform;
  std::string prevent_cache;
  std::string cluster;
};
struct OnsOnsClusterListBrokerInfoDataDoType {
  std::string cluster_name;
  std::string broker_name;
  int broker_id;
  std::string broker_addr;
  std::string broker_ip;
  std::string version;
  float in_tp_s;
  float out_tp_s;
  float in_total_yest;
  float out_total_yest;
  float in_total_today;
  float out_total_today;
};
struct OnsOnsClusterListClusterInfoDataDoType {
  std::vector<OnsOnsClusterListBrokerInfoDataDoType> broker_info_list;
  std::string cluster_name;
};
struct OnsOnsClusterListResponseType {
  std::vector<OnsOnsClusterListClusterInfoDataDoType> data;
  std::string help_url;
};
} // end namespace
#endif
