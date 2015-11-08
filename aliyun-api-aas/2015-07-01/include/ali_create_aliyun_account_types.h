#ifndef ALI_CREATE_ALIYUN_ACCOUNT_TYPESH
#define ALI_CREATE_ALIYUN_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateAliyunAccountRequestType {
  std::string aliyun_id;
};
struct CreateAliyunAccountResponseType {
  std::string pk;
  std::string aliyun_id;
};
} // end namespace
#endif
