#ifndef ALI_ALERT_CREATE_PROJECT_TYPESH
#define ALI_ALERT_CREATE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateProjectRequestType {
  std::string project;
};
struct AlertCreateProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
