#ifndef ALI_ALERT_CREATE_DB_METRIC_TYPESH
#define ALI_ALERT_CREATE_DB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateDBMetricRequestType {
  std::string project_name;
  std::string metric;
};
struct AlertCreateDBMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
