#ifndef ALI_ALERT_DELETE_CONTACT_GROUP_TYPESH
#define ALI_ALERT_DELETE_CONTACT_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteContactGroupRequestType {
  std::string project_name;
  std::string group_name;
};
struct AlertDeleteContactGroupResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
