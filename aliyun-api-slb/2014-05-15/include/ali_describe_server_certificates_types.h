#ifndef ALI_DESCRIBE_SERVER_CERTIFICATES_TYPESH
#define ALI_DESCRIBE_SERVER_CERTIFICATES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeServerCertificatesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate_id;
  std::string owner_account;
};
struct DescribeServerCertificatesServerCertificateType {
  std::string server_certificate_id;
  std::string fingerprint;
  std::string server_certificate_name;
  std::string region_id;
  std::string region_id_alias;
};
struct DescribeServerCertificatesResponseType {
  std::vector<DescribeServerCertificatesServerCertificateType> server_certificates;
};
} // end namespace
#endif
