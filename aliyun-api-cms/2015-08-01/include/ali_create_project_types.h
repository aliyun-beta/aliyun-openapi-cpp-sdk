#ifndef ALI_CREATE_PROJECT_TYPESH
#define ALI_CREATE_PROJECT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateProjectRequestType {
  std::string project;
};
struct CreateProjectResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
