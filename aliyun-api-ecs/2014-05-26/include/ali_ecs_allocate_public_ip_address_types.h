#ifndef ALI_ECS_ALLOCATE_PUBLIC_IP_ADDRESS_TYPESH
#define ALI_ECS_ALLOCATE_PUBLIC_IP_ADDRESS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsAllocatePublicIpAddressRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string ip_address;
  std::string vlan_id;
  std::string owner_account;
};
struct EcsAllocatePublicIpAddressResponseType {
  std::string ip_address;
};
} // end namespace
#endif
