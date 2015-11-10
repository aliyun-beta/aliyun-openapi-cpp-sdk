#ifndef ALI_ALERT_CREATE_CONTACT_GROUP_TYPESH
#define ALI_ALERT_CREATE_CONTACT_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateContactGroupRequestType {
  std::string project_name;
  std::string contact_group;
};
struct AlertCreateContactGroupResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
