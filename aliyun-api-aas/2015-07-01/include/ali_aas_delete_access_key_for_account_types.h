#ifndef ALI_AAS_DELETE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#define ALI_AAS_DELETE_ACCESS_KEY_FOR_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AasDeleteAccessKeyForAccountRequestType {
  std::string pk;
  std::string ak_id;
};
struct AasDeleteAccessKeyForAccountResponseType {
  std::string pk;
  std::string result;
};
} // end namespace
#endif
