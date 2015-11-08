#ifndef ALI_UPDATE_ACCESS_KEY_STATUS_FOR_ACCOUNT_TYPESH
#define ALI_UPDATE_ACCESS_KEY_STATUS_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateAccessKeyStatusForAccountRequestType {
  std::string pk;
  std::string ak_id;
  std::string ak_status;
};
struct UpdateAccessKeyStatusForAccountResponseType {
  std::string pk;
  std::string result;
};
} // end namespace
#endif
