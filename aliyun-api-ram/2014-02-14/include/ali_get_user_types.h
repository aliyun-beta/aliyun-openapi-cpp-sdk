#ifndef ALI_GET_USER_TYPESH
#define ALI_GET_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetUserRequestType {
  std::string user_name;
};
struct GetUserResponseType {
  std::string user_name;
  std::string comments;
};
} // end namespace
#endif
