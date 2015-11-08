#ifndef ALI_STOP_INSTANCE_TYPESH
#define ALI_STOP_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StopInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string force_stop;
  std::string owner_account;
};
struct StopInstanceResponseType {
};
} // end namespace
#endif
