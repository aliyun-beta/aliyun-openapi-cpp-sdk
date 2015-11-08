#ifndef ALI_BSSH
#define ALI_BSSH
#include <string>
#include "ali_describe_cash_detail_types.h"
#include "ali_describe_coupon_detail_types.h"
#include "ali_describe_coupon_list_types.h"
#include "ali_set_resource_business_status_types.h"
namespace aliyun {
struct AliBssErrorInfo {
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
  host_(host) {}
public:
  int DescribeCashDetail(const DescribeCashDetailRequestType& req,
          DescribeCashDetailResponseType* resp,
          AliBssErrorInfo* error_info);

  int DescribeCouponDetail(const DescribeCouponDetailRequestType& req,
          DescribeCouponDetailResponseType* resp,
          AliBssErrorInfo* error_info);

  int DescribeCouponList(const DescribeCouponListRequestType& req,
          DescribeCouponListResponseType* resp,
          AliBssErrorInfo* error_info);

  int SetResourceBusinessStatus(const SetResourceBusinessStatusRequestType& req,
          SetResourceBusinessStatusResponseType* resp,
          AliBssErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
