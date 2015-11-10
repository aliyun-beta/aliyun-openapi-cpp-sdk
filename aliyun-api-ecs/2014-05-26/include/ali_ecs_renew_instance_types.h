#ifndef ALI_ECS_RENEW_INSTANCE_TYPESH
#define ALI_ECS_RENEW_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsRenewInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string instance_type;
  std::string internet_max_bandwidth_out;
  std::string internet_charge_type;
  std::string period;
  std::string reboot_time;
  std::string covert_disk_portable1_disk_id;
  std::string covert_disk_portable2_disk_id;
  std::string covert_disk_portable3_disk_id;
  std::string covert_disk_portable4_disk_id;
};
struct EcsRenewInstanceResponseType {
};
} // end namespace
#endif
