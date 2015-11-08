#ifndef ALI_DELETE_VSWITCH_TYPESH
#define ALI_DELETE_VSWITCH_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteVSwitchRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string vswitch_id;
  std::string owner_account;
};
struct DeleteVSwitchResponseType {
};
} // end namespace
#endif
