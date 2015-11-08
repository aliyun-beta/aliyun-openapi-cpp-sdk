#ifndef ALI_QUERY_DDOS_CONFIG_TYPESH
#define ALI_QUERY_DDOS_CONFIG_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct QueryDdosConfigRequestType {
  std::string instance_id;
  std::string instance_type;
};
struct QueryDdosConfigResponseType {
  long bps;
  long pps;
  long qps;
  long sipconn;
  long sipnew;
  bool layer7_config;
  int flow_position;
  int qps_position;
  int strategy_position;
  int level;
  std::string hole_bps;
  std::string config_type;
};
} // end namespace
#endif
