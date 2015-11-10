#ifndef ALI_RAM_GET_USER_TYPESH
#define ALI_RAM_GET_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetUserRequestType {
  std::string user_name;
};
struct RamGetUserResponseType {
  std::string user_name;
  std::string comments;
};
} // end namespace
#endif
