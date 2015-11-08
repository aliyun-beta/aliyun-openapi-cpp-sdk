#ifndef ALI_INSERT_INSTANCE_TYPESH
#define ALI_INSERT_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct InsertInstanceRequestType {
  std::string instance_name;
  std::string cluster_type;
  std::string description;
};
struct InsertInstanceResponseType {
};
} // end namespace
#endif
