#ifndef ALI_DELETE_POLICY_VERSION_TYPESH
#define ALI_DELETE_POLICY_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeletePolicyVersionRequestType {
  std::string policy_name;
  std::string version_id;
};
struct DeletePolicyVersionResponseType {
};
} // end namespace
#endif
