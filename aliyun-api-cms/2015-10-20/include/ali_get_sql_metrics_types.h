#ifndef ALI_GET_SQL_METRICS_TYPESH
#define ALI_GET_SQL_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetSqlMetricsRequestType {
  std::string project_name;
  std::string metric_name;
};
struct GetSqlMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
