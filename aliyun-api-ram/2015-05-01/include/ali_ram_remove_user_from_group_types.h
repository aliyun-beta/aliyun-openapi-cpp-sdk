#ifndef ALI_RAM_REMOVE_USER_FROM_GROUP_TYPESH
#define ALI_RAM_REMOVE_USER_FROM_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamRemoveUserFromGroupRequestType {
  std::string user_name;
  std::string group_name;
};
struct RamRemoveUserFromGroupResponseType {
};
} // end namespace
#endif
