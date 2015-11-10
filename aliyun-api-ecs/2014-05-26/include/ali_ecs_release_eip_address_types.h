#ifndef ALI_ECS_RELEASE_EIP_ADDRESS_TYPESH
#define ALI_ECS_RELEASE_EIP_ADDRESS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsReleaseEipAddressRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string allocation_id;
  std::string owner_account;
};
struct EcsReleaseEipAddressResponseType {
};
} // end namespace
#endif
