#ifndef ALI_CMS_GET_METRICS_META_TYPESH
#define ALI_CMS_GET_METRICS_META_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsGetMetricsMetaRequestType {
  std::string project_name;
  std::string metric_name;
};
struct CmsGetMetricsMetaResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
