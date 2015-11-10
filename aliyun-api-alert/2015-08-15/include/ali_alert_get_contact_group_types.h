#ifndef ALI_ALERT_GET_CONTACT_GROUP_TYPESH
#define ALI_ALERT_GET_CONTACT_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetContactGroupRequestType {
  std::string project_name;
  std::string group_name;
};
struct AlertGetContactGroupResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
