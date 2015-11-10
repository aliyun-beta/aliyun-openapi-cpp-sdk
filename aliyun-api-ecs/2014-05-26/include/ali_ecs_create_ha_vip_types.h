#ifndef ALI_ECS_CREATE_HA_VIP_TYPESH
#define ALI_ECS_CREATE_HA_VIP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsCreateHaVipRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string client_token;
  std::string vswitch_id;
  std::string ip_address;
  std::string description;
};
struct EcsCreateHaVipResponseType {
  std::string ha_vip_id;
};
} // end namespace
#endif
