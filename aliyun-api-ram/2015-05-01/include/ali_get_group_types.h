#ifndef ALI_GET_GROUP_TYPESH
#define ALI_GET_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetGroupRequestType {
  std::string group_name;
};
struct GetGroupGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct GetGroupResponseType {
  GetGroupGroupType group;
};
} // end namespace
#endif
