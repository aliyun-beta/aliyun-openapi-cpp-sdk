#ifndef ALI_CMS_GET_METRIC_STATISTICS_TYPESH
#define ALI_CMS_GET_METRIC_STATISTICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsGetMetricStatisticsRequestType {
  std::string namespace_;
  std::string metric_name;
  std::string start_time;
  std::string end_time;
  std::string interval;
  std::string dimensions;
  std::string next_token;
  std::string length;
};
struct CmsGetMetricStatisticsResponseType {
  std::vector<std::string> datapoints;
  std::string next_token;
  std::string code;
  std::string message;
};
} // end namespace
#endif
