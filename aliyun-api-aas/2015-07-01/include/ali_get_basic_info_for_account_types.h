#ifndef ALI_GET_BASIC_INFO_FOR_ACCOUNT_TYPESH
#define ALI_GET_BASIC_INFO_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetBasicInfoForAccountRequestType {
  std::string aliyun_id;
};
struct GetBasicInfoForAccountResponseType {
  std::string pk;
  std::string last_login_date;
};
} // end namespace
#endif
