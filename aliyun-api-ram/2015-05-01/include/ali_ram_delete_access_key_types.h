#ifndef ALI_RAM_DELETE_ACCESS_KEY_TYPESH
#define ALI_RAM_DELETE_ACCESS_KEY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamDeleteAccessKeyRequestType {
  std::string user_name;
  std::string user_access_key_id;
};
struct RamDeleteAccessKeyResponseType {
};
} // end namespace
#endif
