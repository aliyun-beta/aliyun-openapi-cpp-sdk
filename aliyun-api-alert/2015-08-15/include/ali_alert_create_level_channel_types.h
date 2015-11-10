#ifndef ALI_ALERT_CREATE_LEVEL_CHANNEL_TYPESH
#define ALI_ALERT_CREATE_LEVEL_CHANNEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertCreateLevelChannelRequestType {
  std::string project_name;
  std::string level_channel_setting;
};
struct AlertCreateLevelChannelResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
