#ifndef ALI_DELETE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#define ALI_DELETE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteAccessKeyForAccountRequestType {
  std::string pk;
  std::string ak_id;
};
struct DeleteAccessKeyForAccountResponseType {
  std::string pk;
  std::string result;
};
} // end namespace
#endif
