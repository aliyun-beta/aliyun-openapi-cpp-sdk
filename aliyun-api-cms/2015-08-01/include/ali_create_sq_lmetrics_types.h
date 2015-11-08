#ifndef ALI_CREATE_SQ_LMETRICS_TYPESH
#define ALI_CREATE_SQ_LMETRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateSQLMetricsRequestType {
  std::string project_name;
  std::string sql;
  std::string is_public;
};
struct CreateSQLMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
