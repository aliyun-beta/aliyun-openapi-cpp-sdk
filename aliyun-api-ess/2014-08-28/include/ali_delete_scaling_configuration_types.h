#ifndef ALI_DELETE_SCALING_CONFIGURATION_TYPESH
#define ALI_DELETE_SCALING_CONFIGURATION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteScalingConfigurationRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string scaling_configuration_id;
  std::string owner_account;
};
struct DeleteScalingConfigurationResponseType {
};
} // end namespace
#endif
