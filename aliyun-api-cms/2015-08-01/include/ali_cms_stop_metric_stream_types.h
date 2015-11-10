#ifndef ALI_CMS_STOP_METRIC_STREAM_TYPESH
#define ALI_CMS_STOP_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsStopMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct CmsStopMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
