#ifndef ALI_NOTIFY_USER_BUSINESS_COMMAND_TYPESH
#define ALI_NOTIFY_USER_BUSINESS_COMMAND_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct NotifyUserBusinessCommandRequestType {
  std::string uid;
  std::string service_code;
  std::string cmd;
  std::string region;
  std::string instance_id;
  std::string client_token;
  std::string password;
};
struct NotifyUserBusinessCommandResponseType {
  bool success;
};
} // end namespace
#endif
