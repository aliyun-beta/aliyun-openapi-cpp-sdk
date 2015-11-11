#ifndef ALI_ALERT_UPDATE_DB_METRIC_TYPESH
#define ALI_ALERT_UPDATE_DB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateDBMetricRequestType {
  std::string project_name;
  std::string metric_name;
  std::string metric;
};
struct AlertUpdateDBMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
