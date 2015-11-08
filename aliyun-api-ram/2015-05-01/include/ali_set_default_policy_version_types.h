#ifndef ALI_SET_DEFAULT_POLICY_VERSION_TYPESH
#define ALI_SET_DEFAULT_POLICY_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetDefaultPolicyVersionRequestType {
  std::string policy_name;
  std::string version_id;
};
struct SetDefaultPolicyVersionResponseType {
};
} // end namespace
#endif
