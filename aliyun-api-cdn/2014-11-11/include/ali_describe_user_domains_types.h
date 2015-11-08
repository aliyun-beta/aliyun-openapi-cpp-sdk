#ifndef ALI_DESCRIBE_USER_DOMAINS_TYPESH
#define ALI_DESCRIBE_USER_DOMAINS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeUserDomainsRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string page_size;
  std::string page_number;
};
struct DescribeUserDomainsPageDataType {
  std::string domain_name;
  std::string cname;
  std::string cdn_type;
  std::string domain_status;
  std::string gmt_created;
  std::string gmt_modified;
};
struct DescribeUserDomainsResponseType {
  std::vector<DescribeUserDomainsPageDataType> domains;
  long page_number;
  long page_size;
  long total_count;
};
} // end namespace
#endif
