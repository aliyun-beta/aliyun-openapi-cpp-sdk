#ifndef ALI_GET_PROJECT_TYPESH
#define ALI_GET_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetProjectRequestType {
  std::string project_name;
};
struct GetProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
