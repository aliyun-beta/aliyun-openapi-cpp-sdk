#ifndef ALI_YUNDUNH
#define ALI_YUNDUNH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_yundun_all_malware_num_types.h"
#include "ali_yundun_current_ddos_attack_num_types.h"
#include "ali_yundun_today_aegis_online_rate_types.h"
#include "ali_yundun_today_allkbps_types.h"
#include "ali_yundun_today_allpps_types.h"
#include "ali_yundun_today_backdoor_types.h"
#include "ali_yundun_today_crack_intercept_types.h"
#include "ali_yundun_today_malware_num_types.h"
#include "ali_yundun_todayqps_by_region_types.h"
#include "ali_yundun_web_attack_num_types.h"
#ifdef WIN32
 #ifdef aliyun_api_yundun_2015_02_27_EXPORTS
 #define ALIYUN_API_YUNDUN_2015_02_27_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_YUNDUN_2015_02_27_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_YUNDUN_2015_02_27_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct YundunErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_YUNDUN_2015_02_27_DLL_EXPORT_IMPORT Yundun {
public:
  static Yundun* CreateYundunClient(std::string endpoint, std::string appid, std::string secret);
  ~Yundun();
private:
  Yundun(std::string host, std::string appid, std::string secret);
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
  int AllMalwareNum(YundunAllMalwareNumResponseType* resp,
          YundunErrorInfo* error_info);

  int CurrentDdosAttackNum(YundunCurrentDdosAttackNumResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayAegisOnlineRate(YundunTodayAegisOnlineRateResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayAllkbps(YundunTodayAllkbpsResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayAllpps(YundunTodayAllppsResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayBackdoor(YundunTodayBackdoorResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayCrackIntercept(YundunTodayCrackInterceptResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayMalwareNum(YundunTodayMalwareNumResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayqpsByRegion(YundunTodayqpsByRegionResponseType* resp,
          YundunErrorInfo* error_info);

  int WebAttackNum(YundunWebAttackNumResponseType* resp,
          YundunErrorInfo* error_info);

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
