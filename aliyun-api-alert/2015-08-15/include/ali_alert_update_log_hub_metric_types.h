#ifndef ALI_ALERT_UPDATE_LOG_HUB_METRIC_TYPESH
#define ALI_ALERT_UPDATE_LOG_HUB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateLogHubMetricRequestType {
  std::string project_name;
  std::string metric_name;
  std::string metric;
};
struct AlertUpdateLogHubMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
