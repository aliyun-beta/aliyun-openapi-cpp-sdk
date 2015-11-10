#ifndef ALI_RAM_DELETE_POLICY_VERSION_TYPESH
#define ALI_RAM_DELETE_POLICY_VERSION_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamDeletePolicyVersionRequestType {
  std::string policy_name;
  std::string version_id;
};
struct RamDeletePolicyVersionResponseType {
};
} // end namespace
#endif
