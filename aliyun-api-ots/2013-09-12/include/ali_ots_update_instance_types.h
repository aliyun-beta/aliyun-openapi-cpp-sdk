#ifndef ALI_OTS_UPDATE_INSTANCE_TYPESH
#define ALI_OTS_UPDATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsUpdateInstanceRequestType {
  std::string instance_name;
  std::string write_capacity;
  std::string read_capacity;
  std::string entity_quota;
  std::string description;
};
struct OtsUpdateInstanceResponseType {
};
} // end namespace
#endif
