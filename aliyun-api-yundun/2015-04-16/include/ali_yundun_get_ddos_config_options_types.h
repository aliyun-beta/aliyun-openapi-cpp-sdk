#ifndef ALI_YUNDUN_GET_DDOS_CONFIG_OPTIONS_TYPESH
#define ALI_YUNDUN_GET_DDOS_CONFIG_OPTIONS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunGetDdosConfigOptionsRequestType {
};
struct YundunGetDdosConfigOptionsRequestThresholdOptionType {
  long bps;
  long pps;
};
struct YundunGetDdosConfigOptionsConnectionThresholdOptionType {
  long sipconn;
  long sipnew;
};
struct YundunGetDdosConfigOptionsResponseType {
  std::vector<YundunGetDdosConfigOptionsRequestThresholdOptionType> request_threshold_options1;
  std::vector<YundunGetDdosConfigOptionsRequestThresholdOptionType> request_threshold_options2;
  std::vector<YundunGetDdosConfigOptionsConnectionThresholdOptionType> connection_threshold_options;
  std::vector<std::string> qps_options1;
  std::vector<std::string> qps_options2;
};
} // end namespace
#endif
