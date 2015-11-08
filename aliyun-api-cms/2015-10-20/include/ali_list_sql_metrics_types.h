#ifndef ALI_LIST_SQL_METRICS_TYPESH
#define ALI_LIST_SQL_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListSqlMetricsRequestType {
  std::string project_name;
  std::string metric_name;
  std::string page;
  std::string page_size;
};
struct ListSqlMetricsResponseType {
  std::vector<std::string> datapoints;
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  int next_token;
};
} // end namespace
#endif
