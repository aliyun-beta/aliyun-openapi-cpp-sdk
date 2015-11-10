#ifndef ALI_STS_ASSUME_ROLE_TYPESH
#define ALI_STS_ASSUME_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct StsAssumeRoleRequestType {
  std::string duration_seconds;
  std::string policy;
  std::string role_arn;
  std::string role_session_name;
};
struct StsAssumeRoleCredentialsType {
  std::string security_token;
  std::string access_key_secret;
  std::string access_key_id;
  std::string expiration;
};
struct StsAssumeRoleAssumedRoleUserType {
  std::string arn;
  std::string assumed_role_id;
};
struct StsAssumeRoleResponseType {
  StsAssumeRoleCredentialsType credentials;
  StsAssumeRoleAssumedRoleUserType assumed_role_user;
};
} // end namespace
#endif
