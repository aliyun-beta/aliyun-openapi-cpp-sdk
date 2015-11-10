#ifndef ALI_BSS_SET_RESOURCE_BUSINESS_STATUS_TYPESH
#define ALI_BSS_SET_RESOURCE_BUSINESS_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct BssSetResourceBusinessStatusRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string resource_type;
  std::string resource_id;
  std::string business_status;
  std::string owner_account;
};
struct BssSetResourceBusinessStatusResponseType {
};
} // end namespace
#endif
