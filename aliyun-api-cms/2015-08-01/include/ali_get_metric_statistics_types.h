#ifndef ALI_GET_METRIC_STATISTICS_TYPESH
#define ALI_GET_METRIC_STATISTICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMetricStatisticsRequestType {
  std::string namespace_;
  std::string metric_name;
  std::string start_time;
  std::string end_time;
  std::string interval;
  std::string dimensions;
  std::string next_token;
  std::string length;
};
struct GetMetricStatisticsResponseType {
  std::vector<std::string> datapoints;
  std::string next_token;
  std::string code;
  std::string message;
};
} // end namespace
#endif
