#ifndef ALI_STATUS_PROJECT_TYPESH
#define ALI_STATUS_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StatusProjectRequestType {
  std::string project_name;
};
struct StatusProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
