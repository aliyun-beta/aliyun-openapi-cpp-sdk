#ifndef ALI_OTSSHIHUA_INSERT_INSTANCE_TYPESH
#define ALI_OTSSHIHUA_INSERT_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsShihuaInsertInstanceRequestType {
  std::string instance_name;
  std::string cluster_type;
  std::string description;
};
struct OtsShihuaInsertInstanceResponseType {
};
} // end namespace
#endif
