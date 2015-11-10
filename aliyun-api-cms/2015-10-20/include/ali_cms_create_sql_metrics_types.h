#ifndef ALI_CMS_CREATE_SQL_METRICS_TYPESH
#define ALI_CMS_CREATE_SQL_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsCreateSqlMetricsRequestType {
  std::string project_name;
  std::string sql;
  std::string is_public;
};
struct CmsCreateSqlMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
