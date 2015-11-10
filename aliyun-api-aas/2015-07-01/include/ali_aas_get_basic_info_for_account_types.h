#ifndef ALI_AAS_GET_BASIC_INFO_FOR_ACCOUNT_TYPESH
#define ALI_AAS_GET_BASIC_INFO_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AasGetBasicInfoForAccountRequestType {
  std::string aliyun_id;
};
struct AasGetBasicInfoForAccountResponseType {
  std::string pk;
  std::string last_login_date;
};
} // end namespace
#endif
