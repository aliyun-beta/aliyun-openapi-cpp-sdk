#ifndef ALI_ECS_DELETE_VSWITCH_TYPESH
#define ALI_ECS_DELETE_VSWITCH_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsDeleteVSwitchRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vswitch_id;
  std::string owner_account;
};
struct EcsDeleteVSwitchResponseType {
};
} // end namespace
#endif
