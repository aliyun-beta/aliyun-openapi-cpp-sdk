#ifndef ALI_GET_INSTANCE_TYPESH
#define ALI_GET_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct GetInstanceRequestType {
  std::string instance_name;
};
struct GetInstanceQuotaType {
  int entity_quota;
};
struct GetInstanceInstanceInfoType {
  GetInstanceQuotaType quota;
  std::string instance_name;
  std::string user_id;
  std::string cluster_name;
  int status;
  int write_capacity;
  int read_capacity;
  std::string description;
  std::string create_time;
};
struct GetInstanceResponseType {
  GetInstanceInstanceInfoType instance_info;
};
} // end namespace
#endif
