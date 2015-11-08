#ifndef ALI_GET_METRICS_TYPESH
#define ALI_GET_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMetricsRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string metric_name;
};
struct GetMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
