#ifndef ALI_CMS_CREATE_METRICS_TYPESH
#define ALI_CMS_CREATE_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsCreateMetricsRequestType {
  std::string project_name;
  std::string metric_stream_name;
  std::string metrics;
};
struct CmsCreateMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
