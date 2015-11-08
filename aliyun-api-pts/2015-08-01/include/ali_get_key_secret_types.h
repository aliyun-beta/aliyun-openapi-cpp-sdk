#ifndef ALI_GET_KEY_SECRET_TYPESH
#define ALI_GET_KEY_SECRET_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetKeySecretRequestType {
};
struct GetKeySecretResponseType {
  std::string key;
  std::string secret;
};
} // end namespace
#endif
