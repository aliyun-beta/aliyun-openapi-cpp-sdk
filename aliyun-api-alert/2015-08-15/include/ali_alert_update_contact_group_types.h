#ifndef ALI_ALERT_UPDATE_CONTACT_GROUP_TYPESH
#define ALI_ALERT_UPDATE_CONTACT_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateContactGroupRequestType {
  std::string project_name;
  std::string group_name;
  std::string contact_group;
};
struct AlertUpdateContactGroupResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
