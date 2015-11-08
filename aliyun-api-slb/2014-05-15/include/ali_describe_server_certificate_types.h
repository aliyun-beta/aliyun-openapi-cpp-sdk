#ifndef ALI_DESCRIBE_SERVER_CERTIFICATE_TYPESH
#define ALI_DESCRIBE_SERVER_CERTIFICATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeServerCertificateRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate_id;
  std::string owner_account;
};
struct DescribeServerCertificateResponseType {
  std::string server_certificate_id;
  std::string fingerprint;
  std::string region_id;
  std::string region_id_alias;
  std::string server_certificate_name;
};
} // end namespace
#endif
