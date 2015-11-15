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
  use_tls_(false),
  support_tls_(false),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int drcGuidRouteApi(const DtsdrcGuidRouteApiRequestType& req,
          DtsdrcGuidRouteApiResponseType* resp,
          DtsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
