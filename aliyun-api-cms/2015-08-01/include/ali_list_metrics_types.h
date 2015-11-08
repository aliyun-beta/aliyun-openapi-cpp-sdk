#ifndef ALI_LIST_METRICS_TYPESH
#define ALI_LIST_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListMetricsRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string metric_name;
  std::string page;
  std::string page_size;
};
struct ListMetricsResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
