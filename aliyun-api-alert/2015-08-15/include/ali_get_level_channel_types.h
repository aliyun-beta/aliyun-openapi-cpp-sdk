#ifndef ALI_GET_LEVEL_CHANNEL_TYPESH
#define ALI_GET_LEVEL_CHANNEL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetLevelChannelRequestType {
  std::string project_name;
  std::string level;
};
struct GetLevelChannelResponseType {
  std::string code;
  std::string message;
  std::string success;
  std::string trace_id;
  std::string result;
};
} // end namespace
#endif
