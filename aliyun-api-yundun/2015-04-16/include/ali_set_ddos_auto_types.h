#ifndef ALI_SET_DDOS_AUTO_TYPESH
#define ALI_SET_DDOS_AUTO_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetDdosAutoRequestType {
  std::string instance_id;
  std::string instance_type;
};
struct SetDdosAutoResponseType {
};
} // end namespace
#endif
