#ifndef ALI_CDN_MODIFY_CDN_SERVICE_TYPESH
#define ALI_CDN_MODIFY_CDN_SERVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnModifyCdnServiceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string internet_charge_type;
};
struct CdnModifyCdnServiceResponseType {
};
} // end namespace
#endif
