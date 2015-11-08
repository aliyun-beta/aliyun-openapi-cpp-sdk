#ifndef ALI_SET_SERVER_CERTIFICATE_NAME_TYPESH
#define ALI_SET_SERVER_CERTIFICATE_NAME_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetServerCertificateNameRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate_id;
  std::string server_certificate_name;
  std::string owner_account;
};
struct SetServerCertificateNameResponseType {
};
} // end namespace
#endif
