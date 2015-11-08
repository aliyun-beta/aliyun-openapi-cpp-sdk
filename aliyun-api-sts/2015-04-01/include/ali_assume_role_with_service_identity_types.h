#ifndef ALI_ASSUME_ROLE_WITH_SERVICE_IDENTITY_TYPESH
#define ALI_ASSUME_ROLE_WITH_SERVICE_IDENTITY_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AssumeRoleWithServiceIdentityRequestType {
  std::string duration_seconds;
  std::string policy;
  std::string role_arn;
  std::string role_session_name;
  std::string assume_role_for;
};
struct AssumeRoleWithServiceIdentityCredentialsType {
  std::string security_token;
  std::string access_key_secret;
  std::string access_key_id;
  std::string expiration;
};
struct AssumeRoleWithServiceIdentityAssumedRoleUserType {
  std::string arn;
  std::string assumed_role_id;
};
struct AssumeRoleWithServiceIdentityResponseType {
  AssumeRoleWithServiceIdentityCredentialsType credentials;
  AssumeRoleWithServiceIdentityAssumedRoleUserType assumed_role_user;
};
} // end namespace
#endif
