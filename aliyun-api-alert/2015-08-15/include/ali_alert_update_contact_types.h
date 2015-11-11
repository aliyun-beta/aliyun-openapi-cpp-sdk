#ifndef ALI_ALERT_UPDATE_CONTACT_TYPESH
#define ALI_ALERT_UPDATE_CONTACT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateContactRequestType {
  std::string project_name;
  std::string contact_name;
  std::string contact;
};
struct AlertUpdateContactResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
