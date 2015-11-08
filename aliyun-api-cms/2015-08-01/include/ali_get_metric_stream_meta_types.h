#ifndef ALI_GET_METRIC_STREAM_META_TYPESH
#define ALI_GET_METRIC_STREAM_META_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMetricStreamMetaRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct GetMetricStreamMetaResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
