#ifndef ALI_MODIFY_CDN_SERVICE_TYPESH
#define ALI_MODIFY_CDN_SERVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct ModifyCdnServiceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string internet_charge_type;
};
struct ModifyCdnServiceResponseType {
};
} // end namespace
#endif
