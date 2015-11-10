#ifndef ALI_ALERT_LIST_LOG_HUB_METRIC_TYPESH
#define ALI_ALERT_LIST_LOG_HUB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertListLogHubMetricRequestType {
  std::string project_name;
  std::string metric_name;
  std::string page;
  std::string page_size;
};
struct AlertListLogHubMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
