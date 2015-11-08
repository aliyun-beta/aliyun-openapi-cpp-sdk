#ifndef ALI_OPEN_CDN_SERVICE_TYPESH
#define ALI_OPEN_CDN_SERVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct OpenCdnServiceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string internet_charge_type;
};
struct OpenCdnServiceResponseType {
};
} // end namespace
#endif
