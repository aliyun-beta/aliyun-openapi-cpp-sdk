#ifndef ALI_RAM_ADD_USER_TO_GROUP_TYPESH
#define ALI_RAM_ADD_USER_TO_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamAddUserToGroupRequestType {
  std::string user_name;
  std::string group_name;
};
struct RamAddUserToGroupResponseType {
};
} // end namespace
#endif
