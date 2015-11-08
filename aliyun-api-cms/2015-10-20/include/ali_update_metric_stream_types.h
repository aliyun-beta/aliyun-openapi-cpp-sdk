#ifndef ALI_UPDATE_METRIC_STREAM_TYPESH
#define ALI_UPDATE_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string metric_stream;
};
struct UpdateMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
