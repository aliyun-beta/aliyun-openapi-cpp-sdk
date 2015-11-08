#ifndef ALI_REMOVE_USER_FROM_GROUP_TYPESH
#define ALI_REMOVE_USER_FROM_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RemoveUserFromGroupRequestType {
  std::string user_name;
  std::string group_name;
};
struct RemoveUserFromGroupResponseType {
};
} // end namespace
#endif
