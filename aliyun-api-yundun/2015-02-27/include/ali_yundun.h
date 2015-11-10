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
  host_(host) {}
public:
  int AllMalwareNum(const YundunAllMalwareNumRequestType& req,
          YundunAllMalwareNumResponseType* resp,
          YundunErrorInfo* error_info);

  int CurrentDdosAttackNum(const YundunCurrentDdosAttackNumRequestType& req,
          YundunCurrentDdosAttackNumResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayAegisOnlineRate(const YundunTodayAegisOnlineRateRequestType& req,
          YundunTodayAegisOnlineRateResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayAllkbps(const YundunTodayAllkbpsRequestType& req,
          YundunTodayAllkbpsResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayAllpps(const YundunTodayAllppsRequestType& req,
          YundunTodayAllppsResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayBackdoor(const YundunTodayBackdoorRequestType& req,
          YundunTodayBackdoorResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayCrackIntercept(const YundunTodayCrackInterceptRequestType& req,
          YundunTodayCrackInterceptResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayMalwareNum(const YundunTodayMalwareNumRequestType& req,
          YundunTodayMalwareNumResponseType* resp,
          YundunErrorInfo* error_info);

  int TodayqpsByRegion(const YundunTodayqpsByRegionRequestType& req,
          YundunTodayqpsByRegionResponseType* resp,
          YundunErrorInfo* error_info);

  int WebAttackNum(const YundunWebAttackNumRequestType& req,
          YundunWebAttackNumResponseType* resp,
          YundunErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
