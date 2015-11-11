#ifndef ALI_ALERT_DELETE_PROJECT_TYPESH
#define ALI_ALERT_DELETE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteProjectRequestType {
  std::string project_name;
};
struct AlertDeleteProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
