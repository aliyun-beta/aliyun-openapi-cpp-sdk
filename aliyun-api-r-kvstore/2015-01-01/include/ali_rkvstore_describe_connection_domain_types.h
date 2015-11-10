#ifndef ALI_RKVSTORE_DESCRIBE_CONNECTION_DOMAIN_TYPESH
#define ALI_RKVSTORE_DESCRIBE_CONNECTION_DOMAIN_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RkvstoreDescribeConnectionDomainRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string owner_account;
  std::string connection_domain;
};
struct RkvstoreDescribeConnectionDomainResponseType {
  std::string instance_id;
};
} // end namespace
#endif
