#ifndef ALI_BATCH_QUERY_METRIC_TYPESH
#define ALI_BATCH_QUERY_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct BatchQueryMetricRequestType {
  std::string project;
  std::string metric;
  std::string period;
  std::string start_time;
  std::string end_time;
  std::string dimensions;
  std::string extend;
  std::string filter;
};
struct BatchQueryMetricResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
