#ifndef ALI_ADD_AUTHENTIC_IP_TYPESH
#define ALI_ADD_AUTHENTIC_IP_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddAuthenticIPRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string authentic_ip;
};
struct AddAuthenticIPResponseType {
};
} // end namespace
#endif
