#ifndef ALI_OCS_REMOVE_AUTHENTIC_IP_TYPESH
#define ALI_OCS_REMOVE_AUTHENTIC_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsRemoveAuthenticIPRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string authentic_ip;
};
struct OcsRemoveAuthenticIPResponseType {
};
} // end namespace
#endif
