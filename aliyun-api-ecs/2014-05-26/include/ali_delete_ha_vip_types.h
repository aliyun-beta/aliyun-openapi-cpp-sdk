#ifndef ALI_DELETE_HA_VIP_TYPESH
#define ALI_DELETE_HA_VIP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteHaVipRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string client_token;
  std::string ha_vip_id;
};
struct DeleteHaVipResponseType {
};
} // end namespace
#endif
