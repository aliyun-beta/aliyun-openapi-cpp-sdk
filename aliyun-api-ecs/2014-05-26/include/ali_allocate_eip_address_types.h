#ifndef ALI_ALLOCATE_EIP_ADDRESS_TYPESH
#define ALI_ALLOCATE_EIP_ADDRESS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AllocateEipAddressRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string bandwidth;
  std::string internet_charge_type;
  std::string owner_account;
};
struct AllocateEipAddressResponseType {
  std::string allocation_id;
  std::string eip_address;
};
} // end namespace
#endif
