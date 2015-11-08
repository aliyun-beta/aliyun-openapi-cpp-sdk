#ifndef ALI_REMOVE_PROJECT_OWNER_TYPESH
#define ALI_REMOVE_PROJECT_OWNER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RemoveProjectOwnerRequestType {
  std::string project_name;
  std::string owners;
};
struct RemoveProjectOwnerResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
