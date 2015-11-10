#ifndef ALI_ALERT_REMOVE_PROJECT_OWNER_TYPESH
#define ALI_ALERT_REMOVE_PROJECT_OWNER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertRemoveProjectOwnerRequestType {
  std::string project_name;
  std::string owners;
};
struct AlertRemoveProjectOwnerResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
