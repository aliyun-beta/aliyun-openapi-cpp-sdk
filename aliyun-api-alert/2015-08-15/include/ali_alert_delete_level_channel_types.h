#ifndef ALI_ALERT_DELETE_LEVEL_CHANNEL_TYPESH
#define ALI_ALERT_DELETE_LEVEL_CHANNEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AlertDeleteLevelChannelRequestType {
  std::string project_name;
  std::string level;
};
struct AlertDeleteLevelChannelResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
};
} // end namespace
#endif
