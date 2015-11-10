#ifndef ALI_SLB_SET_SERVER_CERTIFICATE_NAME_TYPESH
#define ALI_SLB_SET_SERVER_CERTIFICATE_NAME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetServerCertificateNameRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate_id;
  std::string server_certificate_name;
  std::string owner_account;
};
struct SlbSetServerCertificateNameResponseType {
};
} // end namespace
#endif
