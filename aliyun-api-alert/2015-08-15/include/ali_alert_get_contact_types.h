#ifndef ALI_ALERT_GET_CONTACT_TYPESH
#define ALI_ALERT_GET_CONTACT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetContactRequestType {
  std::string project_name;
  std::string contact_name;
};
struct AlertGetContactResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
