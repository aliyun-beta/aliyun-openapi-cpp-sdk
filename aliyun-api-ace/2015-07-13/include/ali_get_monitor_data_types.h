#ifndef ALI_GET_MONITOR_DATA_TYPESH
#define ALI_GET_MONITOR_DATA_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetMonitorDataRequestType {
  std::string app_id;
  std::string item;
  std::string start_time;
  std::string end_time;
  std::string cur_page;
  std::string page_size;
};
struct GetMonitorDataItemType {
  long timestamp;
  float value;
};
struct GetMonitorDataResponseType {
  std::vector<GetMonitorDataItemType> data;
  std::string next_page_num;
};
} // end namespace
#endif
