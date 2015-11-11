#ifndef ALI_ALERT_DELETE_ALERT_TYPESH
#define ALI_ALERT_DELETE_ALERT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteAlertRequestType {
  std::string project_name;
  std::string alert_name;
};
struct AlertDeleteAlertResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
