#ifndef ALI_ALERT_GET_DB_SOURCE_TYPESH
#define ALI_ALERT_GET_DB_SOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetDBSourceRequestType {
  std::string project_name;
  std::string source_name;
};
struct AlertGetDBSourceResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
