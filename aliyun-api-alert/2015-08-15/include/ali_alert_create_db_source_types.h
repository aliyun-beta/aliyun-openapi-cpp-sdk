#ifndef ALI_ALERT_CREATE_DB_SOURCE_TYPESH
#define ALI_ALERT_CREATE_DB_SOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateDBSourceRequestType {
  std::string project_name;
  std::string source;
};
struct AlertCreateDBSourceResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
