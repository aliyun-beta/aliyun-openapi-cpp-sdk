#ifndef ALI_PTS_GET_KEY_SECRET_TYPESH
#define ALI_PTS_GET_KEY_SECRET_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct PTSGetKeySecretResponseType {
  std::string key;
  std::string secret;
};
} // end namespace
#endif
