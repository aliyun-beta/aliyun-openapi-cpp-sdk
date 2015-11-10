#ifndef ALI_CDN_START_CDN_DOMAIN_TYPESH
#define ALI_CDN_START_CDN_DOMAIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnStartCdnDomainRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
};
struct CdnStartCdnDomainResponseType {
};
} // end namespace
#endif
