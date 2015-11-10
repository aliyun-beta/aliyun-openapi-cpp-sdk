#ifndef ALI_RAM_ADD_USER_TYPESH
#define ALI_RAM_ADD_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamAddUserRequestType {
  std::string user_name;
  std::string comments;
};
struct RamAddUserResponseType {
};
} // end namespace
#endif
