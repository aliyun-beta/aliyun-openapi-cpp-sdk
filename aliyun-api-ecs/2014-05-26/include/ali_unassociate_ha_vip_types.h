#ifndef ALI_UNASSOCIATE_HA_VIP_TYPESH
#define ALI_UNASSOCIATE_HA_VIP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UnassociateHaVipRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string client_token;
  std::string ha_vip_id;
  std::string instance_id;
  std::string force;
};
struct UnassociateHaVipResponseType {
};
} // end namespace
#endif
