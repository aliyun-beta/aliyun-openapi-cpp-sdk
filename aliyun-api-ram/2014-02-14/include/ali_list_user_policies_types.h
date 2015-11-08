#ifndef ALI_LIST_USER_POLICIES_TYPESH
#define ALI_LIST_USER_POLICIES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ListUserPoliciesRequestType {
  std::string user_name;
};
struct ListUserPoliciesResponseType {
  std::vector<std::string> policies;
};
} // end namespace
#endif
