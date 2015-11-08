#ifndef ALI_YUNDUNH
#define ALI_YUNDUNH
#include <string>
#include "ali_all_malware_num_types.h"
#include "ali_current_ddos_attack_num_types.h"
#include "ali_today_aegis_online_rate_types.h"
#include "ali_today_allkbps_types.h"
#include "ali_today_allpps_types.h"
#include "ali_today_backdoor_types.h"
#include "ali_today_crack_intercept_types.h"
#include "ali_today_malware_num_types.h"
#include "ali_todayqps_by_region_types.h"
#include "ali_web_attack_num_types.h"
namespace aliyun {
struct AliYundunErrorInfo {
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
  int AllMalwareNum(const AllMalwareNumRequestType& req,
          AllMalwareNumResponseType* resp,
          AliYundunErrorInfo* error_info);

  int CurrentDdosAttackNum(const CurrentDdosAttackNumRequestType& req,
          CurrentDdosAttackNumResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayAegisOnlineRate(const TodayAegisOnlineRateRequestType& req,
          TodayAegisOnlineRateResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayAllkbps(const TodayAllkbpsRequestType& req,
          TodayAllkbpsResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayAllpps(const TodayAllppsRequestType& req,
          TodayAllppsResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayBackdoor(const TodayBackdoorRequestType& req,
          TodayBackdoorResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayCrackIntercept(const TodayCrackInterceptRequestType& req,
          TodayCrackInterceptResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayMalwareNum(const TodayMalwareNumRequestType& req,
          TodayMalwareNumResponseType* resp,
          AliYundunErrorInfo* error_info);

  int TodayqpsByRegion(const TodayqpsByRegionRequestType& req,
          TodayqpsByRegionResponseType* resp,
          AliYundunErrorInfo* error_info);

  int WebAttackNum(const WebAttackNumRequestType& req,
          WebAttackNumResponseType* resp,
          AliYundunErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
