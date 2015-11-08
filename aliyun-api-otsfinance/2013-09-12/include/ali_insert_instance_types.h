#ifndef ALI_INSERT_INSTANCE_TYPESH
#define ALI_INSERT_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct InsertInstanceRequestType {
  std::string instance_name;
  std::string cluster_name;
  std::string write_capacity;
  std::string read_capacity;
  std::string entity_quota;
  std::string description;
};
struct InsertInstanceResponseType {
};
} // end namespace
#endif
