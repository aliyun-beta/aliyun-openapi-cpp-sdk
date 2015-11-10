#ifndef ALI_ALERT_GET_PROJECT_TYPESH
#define ALI_ALERT_GET_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetProjectRequestType {
  std::string project_name;
};
struct AlertGetProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
