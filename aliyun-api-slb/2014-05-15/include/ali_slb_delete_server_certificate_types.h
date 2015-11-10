#ifndef ALI_SLB_DELETE_SERVER_CERTIFICATE_TYPESH
#define ALI_SLB_DELETE_SERVER_CERTIFICATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDeleteServerCertificateRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate_id;
  std::string owner_account;
};
struct SlbDeleteServerCertificateResponseType {
};
} // end namespace
#endif
