#ifndef ALI_CDN_DESCRIBE_CDN_SERVICE_TYPESH
#define ALI_CDN_DESCRIBE_CDN_SERVICE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnDescribeCdnServiceRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
};
struct CdnDescribeCdnServiceLockReasonType {
  std::string lock_reason;
};
struct CdnDescribeCdnServiceResponseType {
  std::vector<CdnDescribeCdnServiceLockReasonType> operation_locks;
  std::string internet_charge_type;
  std::string opening_time;
  std::string changing_charge_type;
  std::string changing_affect_time;
};
} // end namespace
#endif
