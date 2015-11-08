#ifndef ALI_GET_DDOS_CONFIG_OPTIONS_TYPESH
#define ALI_GET_DDOS_CONFIG_OPTIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetDdosConfigOptionsRequestType {
};
struct GetDdosConfigOptionsRequestThresholdOptionType {
  long bps;
  long pps;
};
struct GetDdosConfigOptionsConnectionThresholdOptionType {
  long sipconn;
  long sipnew;
};
struct GetDdosConfigOptionsResponseType {
  std::vector<GetDdosConfigOptionsRequestThresholdOptionType> request_threshold_options1;
  std::vector<GetDdosConfigOptionsRequestThresholdOptionType> request_threshold_options2;
  std::vector<GetDdosConfigOptionsConnectionThresholdOptionType> connection_threshold_options;
  std::vector<std::string> qps_options1;
  std::vector<std::string> qps_options2;
};
} // end namespace
#endif
