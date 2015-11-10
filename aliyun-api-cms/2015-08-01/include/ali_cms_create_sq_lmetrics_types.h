#ifndef ALI_CMS_CREATE_SQ_LMETRICS_TYPESH
#define ALI_CMS_CREATE_SQ_LMETRICS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CmsCreateSQLMetricsRequestType {
  std::string project_name;
  std::string sql;
  std::string is_public;
};
struct CmsCreateSQLMetricsResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
