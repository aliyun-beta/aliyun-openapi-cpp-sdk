#ifndef ALI_ESS_DELETE_SCALING_CONFIGURATION_TYPESH
#define ALI_ESS_DELETE_SCALING_CONFIGURATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct EssDeleteScalingConfigurationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_configuration_id;
  std::string owner_account;
};
struct EssDeleteScalingConfigurationResponseType {
};
} // end namespace
#endif
