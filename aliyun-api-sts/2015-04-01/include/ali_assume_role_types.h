#ifndef ALI_ASSUME_ROLE_TYPESH
#define ALI_ASSUME_ROLE_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AssumeRoleRequestType {
  std::string duration_seconds;
  std::string policy;
  std::string role_arn;
  std::string role_session_name;
};
struct AssumeRoleCredentialsType {
  std::string security_token;
  std::string access_key_secret;
  std::string access_key_id;
  std::string expiration;
};
struct AssumeRoleAssumedRoleUserType {
  std::string arn;
  std::string assumed_role_id;
};
struct AssumeRoleResponseType {
  AssumeRoleCredentialsType credentials;
  AssumeRoleAssumedRoleUserType assumed_role_user;
};
} // end namespace
#endif
