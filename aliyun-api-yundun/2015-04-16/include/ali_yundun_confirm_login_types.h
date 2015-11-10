#ifndef ALI_YUNDUN_CONFIRM_LOGIN_TYPESH
#define ALI_YUNDUN_CONFIRM_LOGIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunConfirmLoginRequestType {
  std::string instance_id;
  std::string source_ip;
  std::string time;
};
struct YundunConfirmLoginResponseType {
};
} // end namespace
#endif
