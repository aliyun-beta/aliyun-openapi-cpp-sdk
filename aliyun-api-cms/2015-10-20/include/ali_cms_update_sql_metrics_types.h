#ifndef ALI_CMS_UPDATE_SQL_METRICS_TYPESH
#define ALI_CMS_UPDATE_SQL_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsUpdateSqlMetricsRequestType {
  std::string project_name;
  std::string metric_name;
  std::string sql;
  std::string is_public;
};
struct CmsUpdateSqlMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
