#ifndef ALI_RELEASE_EIP_ADDRESS_TYPESH
#define ALI_RELEASE_EIP_ADDRESS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ReleaseEipAddressRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string allocation_id;
  std::string owner_account;
};
struct ReleaseEipAddressResponseType {
};
} // end namespace
#endif
