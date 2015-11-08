#ifndef ALI_ACEOPSH
#define ALI_ACEOPSH
#include <string>
#include "aliquery_types.h"
#include "alireport_types.h"
namespace aliyun {
struct AliAceopsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Aceops {
public:
  static Aceops* CreateAceopsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Aceops(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-09-09"),
  host_(host) {}
public:
  int query(const queryRequestType& req,
          queryResponseType* resp,
          AliAceopsErrorInfo* error_info);

  int report(const reportRequestType& req,
          reportResponseType* resp,
          AliAceopsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
