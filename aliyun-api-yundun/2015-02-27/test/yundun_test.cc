#include "ali_yundun.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_all_malware_num_response = "{"
"  \"AllMalwareNum\": 0"
"}";
static int test_all_malware_num() {
  YundunAllMalwareNumResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_all_malware_num_response);
  listener->Start();
  int ret = yundun->AllMalwareNum(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_current_ddos_attack_num_response = "{"
"  \"CurrentDdosAttackNum\": 0"
"}";
static int test_current_ddos_attack_num() {
  YundunCurrentDdosAttackNumResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_current_ddos_attack_num_response);
  listener->Start();
  int ret = yundun->CurrentDdosAttackNum(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_today_aegis_online_rate_response = "{"
"  \"Rate\": 0"
"}";
static int test_today_aegis_online_rate() {
  YundunTodayAegisOnlineRateResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_today_aegis_online_rate_response);
  listener->Start();
  int ret = yundun->TodayAegisOnlineRate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_today_allkbps_response = "{"
"  \"Kbps\": 0"
"}";
static int test_today_allkbps() {
  YundunTodayAllkbpsResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_today_allkbps_response);
  listener->Start();
  int ret = yundun->TodayAllkbps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_today_allpps_response = "{"
"  \"Pps\": 0"
"}";
static int test_today_allpps() {
  YundunTodayAllppsResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_today_allpps_response);
  listener->Start();
  int ret = yundun->TodayAllpps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_today_backdoor_response = "{"
"  \"Backdoor\": 0"
"}";
static int test_today_backdoor() {
  YundunTodayBackdoorResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_today_backdoor_response);
  listener->Start();
  int ret = yundun->TodayBackdoor(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_today_crack_intercept_response = "{"
"  \"InterceptNum\": 0"
"}";
static int test_today_crack_intercept() {
  YundunTodayCrackInterceptResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_today_crack_intercept_response);
  listener->Start();
  int ret = yundun->TodayCrackIntercept(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_today_malware_num_response = "{"
"  \"TodayMalwareNum\": 0"
"}";
static int test_today_malware_num() {
  YundunTodayMalwareNumResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_today_malware_num_response);
  listener->Start();
  int ret = yundun->TodayMalwareNum(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_todayqps_by_region_response = "{"
"  \"Data\": {"
"    \"Region\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"RegionNumber\": 0,"
"        \"RegionFlow\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_todayqps_by_region() {
  YundunTodayqpsByRegionResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_todayqps_by_region_response);
  listener->Start();
  int ret = yundun->TodayqpsByRegion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_web_attack_num_response = "{"
"  \"WebAttackNum\": 0"
"}";
static int test_web_attack_num() {
  YundunWebAttackNumResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_web_attack_num_response);
  listener->Start();
  int ret = yundun->WebAttackNum(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
int main() {
  test_all_malware_num();
  test_current_ddos_attack_num();
  test_today_aegis_online_rate();
  test_today_allkbps();
  test_today_allpps();
  test_today_backdoor();
  test_today_crack_intercept();
  test_today_malware_num();
  test_todayqps_by_region();
  test_web_attack_num();
}
