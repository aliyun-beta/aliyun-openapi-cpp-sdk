#ifndef ALI_ALERT_GET_DB_METRIC_TYPESH
#define ALI_ALERT_GET_DB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetDBMetricRequestType {
  std::string project_name;
  std::string metric_name;
};
struct AlertGetDBMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
