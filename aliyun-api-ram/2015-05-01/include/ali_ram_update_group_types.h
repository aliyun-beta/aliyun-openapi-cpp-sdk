#ifndef ALI_RAM_UPDATE_GROUP_TYPESH
#define ALI_RAM_UPDATE_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamUpdateGroupRequestType {
  std::string group_name;
  std::string new_group_name;
  std::string new_comments;
};
struct RamUpdateGroupGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct RamUpdateGroupResponseType {
  RamUpdateGroupGroupType group;
};
} // end namespace
#endif
