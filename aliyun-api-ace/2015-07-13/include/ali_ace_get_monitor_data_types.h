#ifndef ALI_ACE_GET_MONITOR_DATA_TYPESH
#define ALI_ACE_GET_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AceGetMonitorDataRequestType {
  std::string app_id;
  std::string item;
  std::string start_time;
  std::string end_time;
  std::string cur_page;
  std::string page_size;
};
struct AceGetMonitorDataItemType {
  long timestamp;
  float value;
};
struct AceGetMonitorDataResponseType {
  std::vector<AceGetMonitorDataItemType> data;
  std::string next_page_num;
};
} // end namespace
#endif
