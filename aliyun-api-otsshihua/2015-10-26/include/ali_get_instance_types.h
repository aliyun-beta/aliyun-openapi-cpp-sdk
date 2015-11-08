#ifndef ALI_GET_INSTANCE_TYPESH
#define ALI_GET_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetInstanceRequestType {
  std::string instance_name;
};
struct GetInstanceInstanceInfoType {
  std::string instance_name;
  int status;
  std::string description;
  std::string timestamp;
};
struct GetInstanceResponseType {
  GetInstanceInstanceInfoType instance_info;
};
} // end namespace
#endif
