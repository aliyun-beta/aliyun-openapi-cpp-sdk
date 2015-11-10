#ifndef ALI_RAM_LIST_USER_POLICIES_TYPESH
#define ALI_RAM_LIST_USER_POLICIES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RamListUserPoliciesRequestType {
  std::string user_name;
};
struct RamListUserPoliciesResponseType {
  std::vector<std::string> policies;
};
} // end namespace
#endif
