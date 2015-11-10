#ifndef ALI_OTSFINANCE_GET_INSTANCE_TYPESH
#define ALI_OTSFINANCE_GET_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OtsFinanceGetInstanceRequestType {
  std::string instance_name;
};
struct OtsFinanceGetInstanceQuotaType {
  int entity_quota;
};
struct OtsFinanceGetInstanceInstanceInfoType {
  OtsFinanceGetInstanceQuotaType quota;
  std::string instance_name;
  std::string user_id;
  std::string cluster_name;
  int status;
  int write_capacity;
  int read_capacity;
  std::string description;
  std::string create_time;
};
struct OtsFinanceGetInstanceResponseType {
  OtsFinanceGetInstanceInstanceInfoType instance_info;
};
} // end namespace
#endif
