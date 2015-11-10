#ifndef ALI_SLB_DESCRIBE_SERVER_CERTIFICATES_TYPESH
#define ALI_SLB_DESCRIBE_SERVER_CERTIFICATES_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeServerCertificatesRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate_id;
  std::string owner_account;
};
struct SlbDescribeServerCertificatesServerCertificateType {
  std::string server_certificate_id;
  std::string fingerprint;
  std::string server_certificate_name;
  std::string region_id;
  std::string region_id_alias;
};
struct SlbDescribeServerCertificatesResponseType {
  std::vector<SlbDescribeServerCertificatesServerCertificateType> server_certificates;
};
} // end namespace
#endif
