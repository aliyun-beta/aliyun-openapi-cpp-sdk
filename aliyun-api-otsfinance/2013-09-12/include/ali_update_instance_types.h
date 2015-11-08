#ifndef ALI_UPDATE_INSTANCE_TYPESH
#define ALI_UPDATE_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UpdateInstanceRequestType {
  std::string instance_name;
  std::string write_capacity;
  std::string read_capacity;
  std::string entity_quota;
  std::string description;
};
struct UpdateInstanceResponseType {
};
} // end namespace
#endif
