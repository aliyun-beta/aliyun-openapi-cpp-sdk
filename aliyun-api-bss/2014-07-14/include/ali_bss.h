#ifndef ALI_BSSH
#define ALI_BSSH
#include <string>
#include "ali_bss_describe_cash_detail_types.h"
#include "ali_bss_describe_coupon_detail_types.h"
#include "ali_bss_describe_coupon_list_types.h"
#include "ali_bss_set_resource_business_status_types.h"
namespace aliyun {
struct BssErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Bss {
public:
  static Bss* CreateBssClient(std::string endpoint, std::string appid, std::string secret);
private:
  Bss(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-07-14"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int DescribeCashDetail(BssDescribeCashDetailResponseType* resp,
          BssErrorInfo* error_info);

  int DescribeCouponDetail(const BssDescribeCouponDetailRequestType& req,
          BssDescribeCouponDetailResponseType* resp,
          BssErrorInfo* error_info);

  int DescribeCouponList(const BssDescribeCouponListRequestType& req,
          BssDescribeCouponListResponseType* resp,
          BssErrorInfo* error_info);

  int SetResourceBusinessStatus(const BssSetResourceBusinessStatusRequestType& req,
          BssSetResourceBusinessStatusResponseType* resp,
          BssErrorInfo* error_info);

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
