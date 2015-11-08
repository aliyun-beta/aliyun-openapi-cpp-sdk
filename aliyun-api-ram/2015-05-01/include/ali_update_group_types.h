#ifndef ALI_UPDATE_GROUP_TYPESH
#define ALI_UPDATE_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateGroupRequestType {
  std::string group_name;
  std::string new_group_name;
  std::string new_comments;
};
struct UpdateGroupGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct UpdateGroupResponseType {
  UpdateGroupGroupType group;
};
} // end namespace
#endif
