#ifndef ALI_ALERT_LIST_NOTIFY_HISTORY_TYPESH
#define ALI_ALERT_LIST_NOTIFY_HISTORY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertListNotifyHistoryRequestType {
  std::string project_name;
  std::string alert_name;
  std::string dimensions;
  std::string start_time;
  std::string end_time;
  std::string page;
  std::string page_size;
};
struct AlertListNotifyHistoryResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string datapoints;
  std::string total;
};
} // end namespace
#endif
