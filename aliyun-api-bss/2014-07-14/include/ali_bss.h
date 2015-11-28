#ifndef ALI_BSSH
#define ALI_BSSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_bss_describe_cash_detail_types.h"
#include "ali_bss_describe_coupon_detail_types.h"
#include "ali_bss_describe_coupon_list_types.h"
#include "ali_bss_set_resource_business_status_types.h"
#ifdef WIN32
 #ifdef aliyun_api_bss_2014_07_14_EXPORTS
 #define ALIYUN_API_BSS_2014_07_14_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_BSS_2014_07_14_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_BSS_2014_07_14_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct BssErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_BSS_2014_07_14_DLL_EXPORT_IMPORT Bss {
public:
  static Bss* CreateBssClient(std::string endpoint, std::string appid, std::string secret);
  ~Bss();
private:
  Bss(std::string host, std::string appid, std::string secret);
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetProxyHost(std::string proxy_host) {
    if(this->proxy_host_) {
      free(this->proxy_host_);
    }
    this->proxy_host_ = strdup(proxy_host.c_str());
  }
  std::string GetProxyHost() {  return this->proxy_host_;  }
  void SetRegionId(std::string region_id) {
    if(this->region_id_) {
      free(this->region_id_);
    }
    this->region_id_ = strdup(region_id.c_str());
  }
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
  char* appid_;
  char* secret_;
  char* version_;
  char* host_;
  char* proxy_host_;
  bool support_tls_;
  bool use_tls_;
  char* region_id_;
};  //end class
} // end namespace
#endif
