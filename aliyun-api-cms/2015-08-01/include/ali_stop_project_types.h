#ifndef ALI_STOP_PROJECT_TYPESH
#define ALI_STOP_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StopProjectRequestType {
  std::string project_name;
};
struct StopProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
