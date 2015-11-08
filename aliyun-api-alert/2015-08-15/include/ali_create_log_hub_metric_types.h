#ifndef ALI_CREATE_LOG_HUB_METRIC_TYPESH
#define ALI_CREATE_LOG_HUB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateLogHubMetricRequestType {
  std::string project_name;
  std::string metric;
};
struct CreateLogHubMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
