#ifndef ALI_SET_USER_BUSINESS_STATUS_TYPESH
#define ALI_SET_USER_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetUserBusinessStatusRequestType {
  std::string uid;
  std::string service;
  std::string status_key;
  std::string status_value;
};
struct SetUserBusinessStatusResponseType {
  bool success;
};
} // end namespace
#endif
