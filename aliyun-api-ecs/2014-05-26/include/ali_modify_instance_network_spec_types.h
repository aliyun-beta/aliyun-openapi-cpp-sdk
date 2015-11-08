#ifndef ALI_MODIFY_INSTANCE_NETWORK_SPEC_TYPESH
#define ALI_MODIFY_INSTANCE_NETWORK_SPEC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyInstanceNetworkSpecRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string internet_max_bandwidth_out;
  std::string internet_max_bandwidth_in;
  std::string owner_account;
};
struct ModifyInstanceNetworkSpecResponseType {
};
} // end namespace
#endif
