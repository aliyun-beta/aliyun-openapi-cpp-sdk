#ifndef ALI_UPDATE_ACCESS_KEY_TYPESH
#define ALI_UPDATE_ACCESS_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateAccessKeyRequestType {
  std::string user_name;
  std::string user_access_key_id;
  std::string status;
};
struct UpdateAccessKeyResponseType {
};
} // end namespace
#endif
