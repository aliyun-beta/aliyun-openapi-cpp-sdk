#ifndef ALI_GET_METRIC_STREAM_TYPESH
#define ALI_GET_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct GetMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
