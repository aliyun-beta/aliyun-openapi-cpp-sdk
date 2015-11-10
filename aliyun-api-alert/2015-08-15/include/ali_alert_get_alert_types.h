#ifndef ALI_ALERT_GET_ALERT_TYPESH
#define ALI_ALERT_GET_ALERT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertGetAlertRequestType {
  std::string project_name;
  std::string alert_name;
};
struct AlertGetAlertResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
