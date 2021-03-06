#ifndef ALI_ALERT_CREATE_CONTACT_TYPESH
#define ALI_ALERT_CREATE_CONTACT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateContactRequestType {
  std::string project_name;
  std::string contact;
};
struct AlertCreateContactResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
