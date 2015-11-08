#ifndef ALI_GET_METRICS_META_TYPESH
#define ALI_GET_METRICS_META_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMetricsMetaRequestType {
  std::string project_name;
  std::string metric_name;
};
struct GetMetricsMetaResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
