#ifndef ALI_RAM_GET_GROUP_TYPESH
#define ALI_RAM_GET_GROUP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamGetGroupRequestType {
  std::string group_name;
};
struct RamGetGroupGroupType {
  std::string group_name;
  std::string comments;
  std::string create_date;
  std::string update_date;
};
struct RamGetGroupResponseType {
  RamGetGroupGroupType group;
};
} // end namespace
#endif
