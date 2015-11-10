#ifndef ALI_CMS_GET_METRIC_STREAM_TYPESH
#define ALI_CMS_GET_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsGetMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct CmsGetMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
