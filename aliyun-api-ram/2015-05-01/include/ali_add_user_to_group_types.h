#ifndef ALI_ADD_USER_TO_GROUP_TYPESH
#define ALI_ADD_USER_TO_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddUserToGroupRequestType {
  std::string user_name;
  std::string group_name;
};
struct AddUserToGroupResponseType {
};
} // end namespace
#endif
