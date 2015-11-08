#ifndef ALI_DELETE_CDN_DOMAIN_TYPESH
#define ALI_DELETE_CDN_DOMAIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DeleteCdnDomainRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
};
struct DeleteCdnDomainResponseType {
};
} // end namespace
#endif
