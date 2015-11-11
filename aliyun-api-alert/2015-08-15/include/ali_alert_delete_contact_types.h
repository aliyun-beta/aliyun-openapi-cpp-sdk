#ifndef ALI_ALERT_DELETE_CONTACT_TYPESH
#define ALI_ALERT_DELETE_CONTACT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteContactRequestType {
  std::string project_name;
  std::string contact_name;
};
struct AlertDeleteContactResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
