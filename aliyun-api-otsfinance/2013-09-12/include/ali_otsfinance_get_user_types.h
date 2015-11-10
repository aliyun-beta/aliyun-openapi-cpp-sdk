#ifndef ALI_OTSFINANCE_GET_USER_TYPESH
#define ALI_OTSFINANCE_GET_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsFinanceGetUserRequestType {
};
struct OtsFinanceGetUserQuotaType {
  int instance_quota;
};
struct OtsFinanceGetUserUserInfoType {
  OtsFinanceGetUserQuotaType quota;
  std::string user_id;
  std::string description;
  std::string create_time;
};
struct OtsFinanceGetUserResponseType {
  OtsFinanceGetUserUserInfoType user_info;
};
} // end namespace
#endif
