#ifndef ALI_ADD_USER_TYPESH
#define ALI_ADD_USER_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddUserRequestType {
  std::string user_name;
  std::string comments;
};
struct AddUserResponseType {
};
} // end namespace
#endif
