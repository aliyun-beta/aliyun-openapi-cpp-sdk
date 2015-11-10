#ifndef ALI_CMS_DELETE_METRICS_TYPESH
#define ALI_CMS_DELETE_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsDeleteMetricsRequestType {
  std::string project_name;
  std::string metric_name;
};
struct CmsDeleteMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
