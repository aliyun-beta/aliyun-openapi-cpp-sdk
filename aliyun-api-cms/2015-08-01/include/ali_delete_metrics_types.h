#ifndef ALI_DELETE_METRICS_TYPESH
#define ALI_DELETE_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteMetricsRequestType {
  std::string project_name;
  std::string metric_name;
};
struct DeleteMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
