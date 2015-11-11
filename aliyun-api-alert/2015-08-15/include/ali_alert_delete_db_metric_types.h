#ifndef ALI_ALERT_DELETE_DB_METRIC_TYPESH
#define ALI_ALERT_DELETE_DB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteDBMetricRequestType {
  std::string project_name;
  std::string metric_name;
};
struct AlertDeleteDBMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
