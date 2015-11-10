#ifndef ALI_ECS_MODIFY_HA_VIP_ATTRIBUTE_TYPESH
#define ALI_ECS_MODIFY_HA_VIP_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyHaVipAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string client_token;
  std::string ha_vip_id;
  std::string description;
};
struct EcsModifyHaVipAttributeResponseType {
};
} // end namespace
#endif
