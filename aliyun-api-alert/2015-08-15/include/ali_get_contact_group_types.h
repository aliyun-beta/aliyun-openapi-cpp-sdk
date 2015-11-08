#ifndef ALI_GET_CONTACT_GROUP_TYPESH
#define ALI_GET_CONTACT_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetContactGroupRequestType {
  std::string project_name;
  std::string group_name;
};
struct GetContactGroupResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
