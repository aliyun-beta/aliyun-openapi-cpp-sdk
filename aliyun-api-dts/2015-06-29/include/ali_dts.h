#ifndef ALI_DTSH
#define ALI_DTSH
#include <string>
#include "ali_dts_drc_guid_route_api_types.h"
namespace aliyun {
struct DtsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Dts {
public:
  static Dts* CreateDtsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Dts(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-06-29"),
  host_(host) {}
public:
  int drcGuidRouteApi(const DtsdrcGuidRouteApiRequestType& req,
          DtsdrcGuidRouteApiResponseType* resp,
          DtsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
