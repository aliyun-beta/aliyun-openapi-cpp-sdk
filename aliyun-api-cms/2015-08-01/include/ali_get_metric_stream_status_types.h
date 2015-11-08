#ifndef ALI_GET_METRIC_STREAM_STATUS_TYPESH
#define ALI_GET_METRIC_STREAM_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMetricStreamStatusRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct GetMetricStreamStatusResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
