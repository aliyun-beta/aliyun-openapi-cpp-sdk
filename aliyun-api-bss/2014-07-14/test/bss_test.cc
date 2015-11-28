#include "ali_bss.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_describe_cash_detail_response = "{"
"  \"BalanceAmount\": \"BalanceAmount\","
"  \"AmountOwed\": \"AmountOwed\","
"  \"EnableThresholdAlert\": \"EnableThresholdAlert\","
"  \"MiniAlertThreshold\": 0,"
"  \"FrozenAmount\": \"FrozenAmount\","
"  \"CreditCardAmount\": \"CreditCardAmount\","
"  \"RemmitanceAmount\": \"RemmitanceAmount\","
"  \"CreditLimit\": \"CreditLimit\","
"  \"AvailableCredit\": \"AvailableCredit\""
"}";
static int test_describe_cash_detail() {
  BssDescribeCashDetailResponseType resp;
  Bss* bss = Bss::CreateBssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  bss->SetProxyHost("127.0.0.1:12234");
  bss->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cash_detail_response);
  listener->Start();
  int ret = bss->DescribeCashDetail(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete bss;
}
static const char* test_describe_coupon_detail_response = "{"
"  \"ProductCodes\": {"
"    \"ProductCode\": ["
"      \"ProductCode\""
"    ]"
"  },"
"  \"TradeTypes\": {"
"    \"TradeType\": ["
"      \"TradeType\""
"    ]"
"  },"
"  \"CouponTemplateId\": 0,"
"  \"TotalAmount\": \"TotalAmount\","
"  \"BalanceAmount\": \"BalanceAmount\","
"  \"FrozenAmount\": \"FrozenAmount\","
"  \"ExpiredAmount\": \"ExpiredAmount\","
"  \"DeliveryTime\": \"DeliveryTime\","
"  \"ExpiredTime\": \"ExpiredTime\","
"  \"CouponNumber\": \"CouponNumber\","
"  \"Status\": \"Status\","
"  \"Description\": \"Description\","
"  \"CreationTime\": \"CreationTime\","
"  \"ModificationTime\": \"ModificationTime\","
"  \"PriceLimit\": \"PriceLimit\","
"  \"Application\": \"Application\""
"}";
static int test_describe_coupon_detail() {
  BssDescribeCouponDetailRequestType req;
  BssDescribeCouponDetailResponseType resp;
  Bss* bss = Bss::CreateBssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  bss->SetProxyHost("127.0.0.1:12234");
  bss->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_coupon_detail_response);
  listener->Start();
  req.coupon_number = "CouponNumber";
  int ret = bss->DescribeCouponDetail(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete bss;
}
static const char* test_describe_coupon_list_response = "{"
"  \"Coupons\": {"
"    \"Coupon\": ["
"      {"
"        \"ProductCodes\": {"
"          \"ProductCode\": ["
"            \"ProductCode\""
"          ]"
"        },"
"        \"TradeTypes\": {"
"          \"TradeType\": ["
"            \"TradeType\""
"          ]"
"        },"
"        \"CouponTemplateId\": 0,"
"        \"TotalAmount\": \"TotalAmount\","
"        \"BalanceAmount\": \"BalanceAmount\","
"        \"FrozenAmount\": \"FrozenAmount\","
"        \"ExpiredAmount\": \"ExpiredAmount\","
"        \"DeliveryTime\": \"DeliveryTime\","
"        \"ExpiredTime\": \"ExpiredTime\","
"        \"CouponNumber\": \"CouponNumber\","
"        \"Status\": \"Status\","
"        \"Description\": \"Description\","
"        \"CreationTime\": \"CreationTime\","
"        \"ModificationTime\": \"ModificationTime\","
"        \"PriceLimit\": \"PriceLimit\","
"        \"Application\": \"Application\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_coupon_list() {
  BssDescribeCouponListRequestType req;
  BssDescribeCouponListResponseType resp;
  Bss* bss = Bss::CreateBssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  bss->SetProxyHost("127.0.0.1:12234");
  bss->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_coupon_list_response);
  listener->Start();
  req.status = "Status";
  req.start_delivery_time = "StartDeliveryTime";
  req.end_delivery_time = "EndDeliveryTime";
  req.page_size = "PageSize";
  req.page_num = "PageNum";
  int ret = bss->DescribeCouponList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete bss;
}
static const char* test_set_resource_business_status_response = "{}";
static int test_set_resource_business_status() {
  BssSetResourceBusinessStatusRequestType req;
  BssSetResourceBusinessStatusResponseType resp;
  Bss* bss = Bss::CreateBssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  bss->SetProxyHost("127.0.0.1:12234");
  bss->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_resource_business_status_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.resource_type = "ResourceType";
  req.resource_id = "ResourceId";
  req.business_status = "BusinessStatus";
  req.owner_account = "OwnerAccount";
  int ret = bss->SetResourceBusinessStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete bss;
}
int main() {
  test_describe_cash_detail();
  test_describe_coupon_detail();
  test_describe_coupon_list();
  test_set_resource_business_status();
}
