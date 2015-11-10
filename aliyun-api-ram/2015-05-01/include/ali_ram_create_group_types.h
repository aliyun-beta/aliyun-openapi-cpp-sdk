#ifndef ALI_RAM_CREATE_GROUP_TYPESH
#define ALI_RAM_CREATE_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamCreateGroupRequestType {
  std::string group_name;
  std::string comments;
};
struct RamCreateGroupGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
};
struct RamCreateGroupResponseType {
  RamCreateGroupGroupType group;
};
} // end namespace
#endif
