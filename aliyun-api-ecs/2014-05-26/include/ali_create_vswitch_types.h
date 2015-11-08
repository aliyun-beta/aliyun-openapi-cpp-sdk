#ifndef ALI_CREATE_VSWITCH_TYPESH
#define ALI_CREATE_VSWITCH_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CreateVSwitchRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string zone_id;
  std::string cidr_block;
  std::string vpc_id;
  std::string vswitch_name;
  std::string description;
  std::string client_token;
  std::string owner_account;
};
struct CreateVSwitchResponseType {
  std::string vswitch_id;
};
} // end namespace
#endif
