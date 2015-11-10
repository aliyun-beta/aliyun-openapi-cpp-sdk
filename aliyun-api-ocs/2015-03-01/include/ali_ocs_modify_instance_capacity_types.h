#ifndef ALI_OCS_MODIFY_INSTANCE_CAPACITY_TYPESH
#define ALI_OCS_MODIFY_INSTANCE_CAPACITY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OcsModifyInstanceCapacityRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string instance_id;
  std::string capacity;
};
struct OcsModifyInstanceCapacityResponseType {
};
} // end namespace
#endif
