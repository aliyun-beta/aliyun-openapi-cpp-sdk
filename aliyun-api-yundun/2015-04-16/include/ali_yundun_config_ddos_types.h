#ifndef ALI_YUNDUN_CONFIG_DDOS_TYPESH
#define ALI_YUNDUN_CONFIG_DDOS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct YundunConfigDdosRequestType {
  std::string instance_id;
  std::string instance_type;
  std::string flow_position;
  std::string strategy_position;
  std::string level;
};
struct YundunConfigDdosResponseType {
};
} // end namespace
#endif
