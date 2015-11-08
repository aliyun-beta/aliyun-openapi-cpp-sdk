#ifndef ALI_CONFIG_DDOS_TYPESH
#define ALI_CONFIG_DDOS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ConfigDdosRequestType {
  std::string instance_id;
  std::string instance_type;
  std::string flow_position;
  std::string strategy_position;
  std::string level;
};
struct ConfigDdosResponseType {
};
} // end namespace
#endif
