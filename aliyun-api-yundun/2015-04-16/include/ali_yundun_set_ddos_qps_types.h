#ifndef ALI_YUNDUN_SET_DDOS_QPS_TYPESH
#define ALI_YUNDUN_SET_DDOS_QPS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunSetDdosQpsRequestType {
  std::string instance_id;
  std::string instance_type;
  std::string qps_position;
  std::string level;
};
struct YundunSetDdosQpsResponseType {
};
} // end namespace
#endif
