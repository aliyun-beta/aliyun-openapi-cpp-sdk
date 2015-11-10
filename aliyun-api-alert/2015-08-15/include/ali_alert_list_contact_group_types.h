#ifndef ALI_ALERT_LIST_CONTACT_GROUP_TYPESH
#define ALI_ALERT_LIST_CONTACT_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertListContactGroupRequestType {
  std::string project_name;
  std::string group_name;
  std::string page;
  std::string page_size;
};
struct AlertListContactGroupResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
