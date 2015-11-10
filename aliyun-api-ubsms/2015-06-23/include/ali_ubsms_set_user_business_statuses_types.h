#ifndef ALI_UBSMS_SET_USER_BUSINESS_STATUSES_TYPESH
#define ALI_UBSMS_SET_USER_BUSINESS_STATUSES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UbsmsSetUserBusinessStatusesRequestType {
  std::string uid;
  std::string service_code;
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
struct UbsmsSetUserBusinessStatusesResponseType {
  bool success;
};
} // end namespace
#endif
