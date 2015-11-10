#ifndef ALI_AAS_UPDATE_ACCESS_KEY_STATUS_FOR_ACCOUNT_TYPESH
#define ALI_AAS_UPDATE_ACCESS_KEY_STATUS_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AasUpdateAccessKeyStatusForAccountRequestType {
  std::string pk;
  std::string ak_id;
  std::string ak_status;
};
struct AasUpdateAccessKeyStatusForAccountResponseType {
  std::string pk;
  std::string result;
};
} // end namespace
#endif
