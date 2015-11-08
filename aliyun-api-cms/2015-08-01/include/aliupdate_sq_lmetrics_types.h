#ifndef ALIUPDATE_SQ_LMETRICS_TYPESH
#define ALIUPDATE_SQ_LMETRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct updateSQLMetricsRequestType {
  std::string project_name;
  std::string metric_name;
  std::string sql;
  std::string is_public;
};
struct updateSQLMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
