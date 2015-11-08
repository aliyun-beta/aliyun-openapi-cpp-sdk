#ifndef ALI_CREATE_GROUP_TYPESH
#define ALI_CREATE_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateGroupRequestType {
  std::string group_name;
  std::string comments;
};
struct CreateGroupGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
};
struct CreateGroupResponseType {
  CreateGroupGroupType group;
};
} // end namespace
#endif
