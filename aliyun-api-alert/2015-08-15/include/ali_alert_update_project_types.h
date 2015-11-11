#ifndef ALI_ALERT_UPDATE_PROJECT_TYPESH
#define ALI_ALERT_UPDATE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateProjectRequestType {
  std::string project_name;
  std::string project;
};
struct AlertUpdateProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
