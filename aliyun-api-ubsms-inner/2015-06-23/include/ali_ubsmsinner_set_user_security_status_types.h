#ifndef ALI_UBSMSINNER_SET_USER_SECURITY_STATUS_TYPESH
#define ALI_UBSMSINNER_SET_USER_SECURITY_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UbsmsinnerSetUserSecurityStatusRequestType {
  std::string uid;
  std::string status_key1;
  std::string status_value1;
  std::string status_key2;
  std::string status_value2;
  std::string status_key3;
  std::string status_value3;
  std::string status_key4;
  std::string status_value4;
  std::string status_key5;
  std::string status_value5;
  std::string status_key6;
  std::string status_value6;
  std::string status_key7;
  std::string status_value7;
  std::string status_key8;
  std::string status_value8;
  std::string status_key9;
  std::string status_value9;
  std::string status_key10;
  std::string status_value10;
  std::string password;
};
struct UbsmsinnerSetUserSecurityStatusResponseType {
  bool success;
};
} // end namespace
#endif
