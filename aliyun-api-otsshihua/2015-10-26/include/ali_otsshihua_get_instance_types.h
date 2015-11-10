#ifndef ALI_OTSSHIHUA_GET_INSTANCE_TYPESH
#define ALI_OTSSHIHUA_GET_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsShihuaGetInstanceRequestType {
  std::string instance_name;
};
struct OtsShihuaGetInstanceInstanceInfoType {
  std::string instance_name;
  int status;
  std::string description;
  std::string timestamp;
};
struct OtsShihuaGetInstanceResponseType {
  OtsShihuaGetInstanceInstanceInfoType instance_info;
};
} // end namespace
#endif
