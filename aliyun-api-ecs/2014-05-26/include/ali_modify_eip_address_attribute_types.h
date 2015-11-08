#ifndef ALI_MODIFY_EIP_ADDRESS_ATTRIBUTE_TYPESH
#define ALI_MODIFY_EIP_ADDRESS_ATTRIBUTE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyEipAddressAttributeRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string allocation_id;
  std::string bandwidth;
  std::string owner_account;
};
struct ModifyEipAddressAttributeResponseType {
};
} // end namespace
#endif
