#ifndef ALI_DESCRIBE_CDN_DOMAIN_LOGS_TYPESH
#define ALI_DESCRIBE_CDN_DOMAIN_LOGS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeCdnDomainLogsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string domain_name;
  std::string log_day;
};
struct DescribeCdnDomainLogsDomainLogDetailType {
  std::string log_name;
  std::string log_path;
  long log_size;
  std::string start_time;
  std::string end_time;
};
struct DescribeCdnDomainLogsDomainLogModelType {
  std::vector<DescribeCdnDomainLogsDomainLogDetailType> domain_log_details;
  std::string domain_name;
};
struct DescribeCdnDomainLogsResponseType {
  DescribeCdnDomainLogsDomainLogModelType domain_log_model;
};
} // end namespace
#endif
