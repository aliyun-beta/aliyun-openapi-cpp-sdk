#ifndef ALI_GET_LOG_HUB_METRIC_TYPESH
#define ALI_GET_LOG_HUB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetLogHubMetricRequestType {
  std::string project_name;
  std::string metric_name;
};
struct GetLogHubMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
