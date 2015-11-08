#ifndef ALI_SET_DDOS_QPS_TYPESH
#define ALI_SET_DDOS_QPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetDdosQpsRequestType {
  std::string instance_id;
  std::string instance_type;
  std::string qps_position;
  std::string level;
};
struct SetDdosQpsResponseType {
};
} // end namespace
#endif
