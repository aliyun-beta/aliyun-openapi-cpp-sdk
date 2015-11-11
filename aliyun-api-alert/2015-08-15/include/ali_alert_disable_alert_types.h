#ifndef ALI_ALERT_DISABLE_ALERT_TYPESH
#define ALI_ALERT_DISABLE_ALERT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDisableAlertRequestType {
  std::string project_name;
  std::string alert_name;
};
struct AlertDisableAlertResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
