#ifndef ALI_UBSMS_NOTIFY_USER_BUSINESS_COMMAND_TYPESH
#define ALI_UBSMS_NOTIFY_USER_BUSINESS_COMMAND_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UbsmsNotifyUserBusinessCommandRequestType {
  std::string uid;
  std::string service_code;
  std::string cmd;
  std::string region;
  std::string instance_id;
  std::string client_token;
  std::string password;
};
struct UbsmsNotifyUserBusinessCommandResponseType {
  bool success;
};
} // end namespace
#endif
