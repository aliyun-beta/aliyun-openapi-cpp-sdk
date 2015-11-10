#ifndef ALI_CMS_UPDATE_METRIC_STREAM_TYPESH
#define ALI_CMS_UPDATE_METRIC_STREAM_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsUpdateMetricStreamRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string metric_stream;
};
struct CmsUpdateMetricStreamResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
