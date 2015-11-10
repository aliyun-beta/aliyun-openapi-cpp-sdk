#ifndef ALI_RAM_SET_DEFAULT_POLICY_VERSION_TYPESH
#define ALI_RAM_SET_DEFAULT_POLICY_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamSetDefaultPolicyVersionRequestType {
  std::string policy_name;
  std::string version_id;
};
struct RamSetDefaultPolicyVersionResponseType {
};
} // end namespace
#endif
