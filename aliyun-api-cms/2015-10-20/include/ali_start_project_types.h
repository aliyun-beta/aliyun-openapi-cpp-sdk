#ifndef ALI_START_PROJECT_TYPESH
#define ALI_START_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StartProjectRequestType {
  std::string project_name;
};
struct StartProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
