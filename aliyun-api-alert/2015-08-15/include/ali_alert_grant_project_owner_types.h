#ifndef ALI_ALERT_GRANT_PROJECT_OWNER_TYPESH
#define ALI_ALERT_GRANT_PROJECT_OWNER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGrantProjectOwnerRequestType {
  std::string project_name;
  std::string owners;
};
struct AlertGrantProjectOwnerResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
