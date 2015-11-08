#ifndef ALI_DELETE_ACCESS_KEY_TYPESH
#define ALI_DELETE_ACCESS_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteAccessKeyRequestType {
  std::string user_name;
  std::string user_access_key_id;
};
struct DeleteAccessKeyResponseType {
};
} // end namespace
#endif
