#ifndef ALI_ECS_MODIFY_INSTANCE_NETWORK_SPEC_TYPESH
#define ALI_ECS_MODIFY_INSTANCE_NETWORK_SPEC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EcsModifyInstanceNetworkSpecRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string internet_max_bandwidth_out;
  std::string internet_max_bandwidth_in;
  std::string owner_account;
};
struct EcsModifyInstanceNetworkSpecResponseType {
};
} // end namespace
#endif
