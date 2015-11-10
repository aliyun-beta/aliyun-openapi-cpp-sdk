#ifndef ALI_ACEOPSH
#define ALI_ACEOPSH
#include <string>
#include "ali_aceops_query_types.h"
#include "ali_aceops_report_types.h"
namespace aliyun {
struct AceopsErrorInfo {
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
  int query(const AceopsqueryRequestType& req,
          AceopsqueryResponseType* resp,
          AceopsErrorInfo* error_info);

  int report(const AceopsreportRequestType& req,
          AceopsreportResponseType* resp,
          AceopsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
