#ifndef ALI_DELETE_PROJECT_TYPESH
#define ALI_DELETE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteProjectRequestType {
  std::string project_name;
};
struct DeleteProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
