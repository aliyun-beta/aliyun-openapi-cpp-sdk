#ifndef ALI_OTS_GET_INSTANCE_TYPESH
#define ALI_OTS_GET_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsGetInstanceRequestType {
  std::string instance_name;
};
struct OtsGetInstanceQuotaType {
  int entity_quota;
};
struct OtsGetInstanceInstanceInfoType {
  OtsGetInstanceQuotaType quota;
  std::string instance_name;
  std::string user_id;
  std::string cluster_name;
  int status;
  int write_capacity;
  int read_capacity;
  std::string description;
  std::string create_time;
};
struct OtsGetInstanceResponseType {
  OtsGetInstanceInstanceInfoType instance_info;
};
} // end namespace
#endif
