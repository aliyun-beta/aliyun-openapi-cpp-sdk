#ifndef ALI_OCS_REPLACE_AUTHENTIC_IP_TYPESH
#define ALI_OCS_REPLACE_AUTHENTIC_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsReplaceAuthenticIPRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string old_authentic_ip;
  std::string new_authentic_ip;
};
struct OcsReplaceAuthenticIPResponseType {
};
} // end namespace
#endif
