#ifndef ALI_ALERT_UPDATE_DB_SOURCE_TYPESH
#define ALI_ALERT_UPDATE_DB_SOURCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateDBSourceRequestType {
  std::string project_name;
  std::string source_name;
  std::string source;
};
struct AlertUpdateDBSourceResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
