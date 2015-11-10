#ifndef ALI_CMS_GET_METRIC_STREAM_STATUS_TYPESH
#define ALI_CMS_GET_METRIC_STREAM_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsGetMetricStreamStatusRequestType {
  std::string project_name;
  std::string metric_stream_name;
};
struct CmsGetMetricStreamStatusResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
