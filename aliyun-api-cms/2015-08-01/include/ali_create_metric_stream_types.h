#ifndef ALI_CREATE_METRIC_STREAM_TYPESH
#define ALI_CREATE_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream;
};
struct CreateMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
