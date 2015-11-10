#ifndef ALI_OTS_INSERT_INSTANCE_TYPESH
#define ALI_OTS_INSERT_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsInsertInstanceRequestType {
  std::string instance_name;
  std::string cluster_name;
  std::string write_capacity;
  std::string read_capacity;
  std::string entity_quota;
  std::string description;
};
struct OtsInsertInstanceResponseType {
};
} // end namespace
#endif
