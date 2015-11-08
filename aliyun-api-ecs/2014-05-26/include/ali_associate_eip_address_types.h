#ifndef ALI_ASSOCIATE_EIP_ADDRESS_TYPESH
#define ALI_ASSOCIATE_EIP_ADDRESS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AssociateEipAddressRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string allocation_id;
  std::string instance_id;
  std::string owner_account;
  std::string instance_type;
};
struct AssociateEipAddressResponseType {
};
} // end namespace
#endif
