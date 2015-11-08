#ifndef ALI_GET_SQ_LMETRICS_TYPESH
#define ALI_GET_SQ_LMETRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetSQLMetricsRequestType {
  std::string project_name;
  std::string metric_name;
};
struct GetSQLMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
