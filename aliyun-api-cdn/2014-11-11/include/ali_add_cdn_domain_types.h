#ifndef ALI_ADD_CDN_DOMAIN_TYPESH
#define ALI_ADD_CDN_DOMAIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddCdnDomainRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string ssl_flag;
  std::string source_type;
  std::string cdn_type;
  std::string sources;
};
struct AddCdnDomainResponseType {
};
} // end namespace
#endif
