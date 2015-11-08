#ifndef ALI_GET_DB_METRIC_TYPESH
#define ALI_GET_DB_METRIC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetDBMetricRequestType {
  std::string project_name;
  std::string metric_name;
};
struct GetDBMetricResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
