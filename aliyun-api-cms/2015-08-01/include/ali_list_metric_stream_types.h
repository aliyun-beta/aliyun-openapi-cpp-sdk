#ifndef ALI_LIST_METRIC_STREAM_TYPESH
#define ALI_LIST_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string page;
  std::string page_size;
};
struct ListMetricStreamResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
