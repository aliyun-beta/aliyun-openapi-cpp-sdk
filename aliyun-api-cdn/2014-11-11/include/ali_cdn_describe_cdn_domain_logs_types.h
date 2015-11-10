#ifndef ALI_CDN_DESCRIBE_CDN_DOMAIN_LOGS_TYPESH
#define ALI_CDN_DESCRIBE_CDN_DOMAIN_LOGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct CdnDescribeCdnDomainLogsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string log_day;
};
struct CdnDescribeCdnDomainLogsDomainLogDetailType {
  std::string log_name;
  std::string log_path;
  long log_size;
  std::string start_time;
  std::string end_time;
};
struct CdnDescribeCdnDomainLogsDomainLogModelType {
  std::vector<CdnDescribeCdnDomainLogsDomainLogDetailType> domain_log_details;
  std::string domain_name;
};
struct CdnDescribeCdnDomainLogsResponseType {
  CdnDescribeCdnDomainLogsDomainLogModelType domain_log_model;
};
} // end namespace
#endif
