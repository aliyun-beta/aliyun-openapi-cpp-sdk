#ifndef ALI_START_CDN_DOMAIN_TYPESH
#define ALI_START_CDN_DOMAIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StartCdnDomainRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
};
struct StartCdnDomainResponseType {
};
} // end namespace
#endif
