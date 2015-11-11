#ifndef ALI_ALERT_UPDATE_ALERT_TYPESH
#define ALI_ALERT_UPDATE_ALERT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertUpdateAlertRequestType {
  std::string project_name;
  std::string alert_name;
  std::string alert;
};
struct AlertUpdateAlertResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
