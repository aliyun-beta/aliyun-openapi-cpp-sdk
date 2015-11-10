#ifndef ALI_CMS_BATCH_CREATE_SQL_METRICS_TYPESH
#define ALI_CMS_BATCH_CREATE_SQL_METRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsBatchCreateSqlMetricsRequestType {
  std::string project_name;
  std::string sqls;
  std::string is_public;
};
struct CmsBatchCreateSqlMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
