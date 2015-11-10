#ifndef ALI_CDN_OPEN_CDN_SERVICE_TYPESH
#define ALI_CDN_OPEN_CDN_SERVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnOpenCdnServiceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string internet_charge_type;
};
struct CdnOpenCdnServiceResponseType {
};
} // end namespace
#endif
