#ifndef ALI_DELETE_METRIC_STREAM_TYPESH
#define ALI_DELETE_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct DeleteMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
