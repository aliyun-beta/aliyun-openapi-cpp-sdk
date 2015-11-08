#ifndef ALI_START_INSTANCE_TYPESH
#define ALI_START_INSTANCE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StartInstanceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string instance_id;
  std::string owner_account;
};
struct StartInstanceResponseType {
};
} // end namespace
#endif
