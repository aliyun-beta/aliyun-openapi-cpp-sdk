#ifndef ALI_CREATE_ALERT_TYPESH
#define ALI_CREATE_ALERT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateAlertRequestType {
  std::string project_name;
  std::string alert;
};
struct CreateAlertResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
