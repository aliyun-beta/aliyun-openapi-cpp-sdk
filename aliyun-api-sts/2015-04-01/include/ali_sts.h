#ifndef ALI_STSH
#define ALI_STSH
#include <string>
#include "ali_assume_role_types.h"
#include "ali_assume_role_with_service_identity_types.h"
namespace aliyun {
struct AliStsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Sts {
public:
  static Sts* CreateStsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Sts(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-04-01"),
  host_(host) {}
public:
  int AssumeRole(const AssumeRoleRequestType& req,
          AssumeRoleResponseType* resp,
          AliStsErrorInfo* error_info);

  int AssumeRoleWithServiceIdentity(const AssumeRoleWithServiceIdentityRequestType& req,
          AssumeRoleWithServiceIdentityResponseType* resp,
          AliStsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
