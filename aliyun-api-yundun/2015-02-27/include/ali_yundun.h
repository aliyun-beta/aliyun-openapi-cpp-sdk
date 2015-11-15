#ifndef ALI_YUNDUNH
#define ALI_YUNDUNH
#include <string>
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
namespace aliyun {
struct YundunErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Yundun {
public:
  static Yundun* CreateYundunClient(std::string endpoint, std::string appid, std::string secret);
private:
  Yundun(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-02-27"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
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
