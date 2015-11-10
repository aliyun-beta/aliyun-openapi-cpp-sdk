#ifndef ALI_AAS_CREATE_ALIYUN_ACCOUNT_TYPESH
#define ALI_AAS_CREATE_ALIYUN_ACCOUNT_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AasCreateAliyunAccountRequestType {
  std::string aliyun_id;
};
struct AasCreateAliyunAccountResponseType {
  std::string pk;
  std::string aliyun_id;
};
} // end namespace
#endif
