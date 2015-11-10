#ifndef ALI_CDN_DESCRIBE_CDN_DOMAIN_DETAIL_TYPESH
#define ALI_CDN_DESCRIBE_CDN_DOMAIN_DETAIL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnDescribeCdnDomainDetailRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
};
struct CdnDescribeCdnDomainDetailGetDomainDetailModelType {
  std::vector<std::string> sources;
  std::string gmt_created;
  std::string gmt_modified;
  std::string source_type;
  std::string domain_status;
  std::string cdn_type;
  std::string cname;
  std::string https_cname;
  std::string domain_name;
  std::string remark;
};
struct CdnDescribeCdnDomainDetailResponseType {
  CdnDescribeCdnDomainDetailGetDomainDetailModelType get_domain_detail_model;
};
} // end namespace
#endif
