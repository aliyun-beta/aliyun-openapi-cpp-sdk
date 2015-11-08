#ifndef ALI_DESCRIBE_CDN_DOMAIN_BASE_DETAIL_TYPESH
#define ALI_DESCRIBE_CDN_DOMAIN_BASE_DETAIL_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeCdnDomainBaseDetailRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
};
struct DescribeCdnDomainBaseDetailDomainBaseDetailModelType {
  std::vector<std::string> sources;
  std::string cname;
  std::string cdn_type;
  std::string domain_status;
  std::string source_type;
  std::string domain_name;
  std::string remark;
  std::string gmt_modified;
  std::string gmt_created;
};
struct DescribeCdnDomainBaseDetailResponseType {
  DescribeCdnDomainBaseDetailDomainBaseDetailModelType domain_base_detail_model;
};
} // end namespace
#endif
