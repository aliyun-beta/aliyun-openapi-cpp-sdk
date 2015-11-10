#ifndef ALI_CMS_UPDATE_METRICS_TYPESH
#define ALI_CMS_UPDATE_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsUpdateMetricsRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string metric_name;
  std::string metrics;
};
struct CmsUpdateMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
