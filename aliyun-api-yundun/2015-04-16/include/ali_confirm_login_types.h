#ifndef ALI_CONFIRM_LOGIN_TYPESH
#define ALI_CONFIRM_LOGIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ConfirmLoginRequestType {
  std::string instance_id;
  std::string source_ip;
  std::string time;
};
struct ConfirmLoginResponseType {
};
} // end namespace
#endif
