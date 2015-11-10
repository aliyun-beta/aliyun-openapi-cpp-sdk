#ifndef ALI_PUSH_PUSH_BYTE_MESSAGE_TYPESH
#define ALI_PUSH_PUSH_BYTE_MESSAGE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PushPushByteMessageRequestType {
  std::string app_id;
  std::string send_type;
  std::string accounts;
  std::string device_ids;
  std::string push_content;
};
struct PushPushByteMessageResponseType {
  std::string response_id;
};
} // end namespace
#endif
