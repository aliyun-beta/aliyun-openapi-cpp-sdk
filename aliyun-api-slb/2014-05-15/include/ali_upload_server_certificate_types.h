#ifndef ALI_UPLOAD_SERVER_CERTIFICATE_TYPESH
#define ALI_UPLOAD_SERVER_CERTIFICATE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct UploadServerCertificateRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string server_certificate;
  std::string private_key;
  std::string server_certificate_name;
  std::string owner_account;
};
struct UploadServerCertificateResponseType {
  std::string server_certificate_id;
  std::string fingerprint;
  std::string server_certificate_name;
  std::string region_id;
  std::string region_id_alias;
};
} // end namespace
#endif
