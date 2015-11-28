#include "ali_oms.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_get_product_define_response = "{"
"  \"ProductList\": {"
"    \"Product\": ["
"      {"
"        \"TypeList\": {"
"          \"Type\": ["
"            {"
"              \"Fields\": {"
"                \"Field\": ["
"                  \"Field\""
"                ]"
"              },"
"              \"DataType\": \"DataType\""
"            }"
"          ]"
"        },"
"        \"ProductName\": \"ProductName\""
"      }"
"    ]"
"  },"
"  \"ProductName\": \"ProductName\","
"  \"DataType\": \"DataType\""
"}";
static int test_get_product_define() {
  OmsGetProductDefineRequestType req;
  OmsGetProductDefineResponseType resp;
  Oms* oms = Oms::CreateOmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  oms->SetProxyHost("127.0.0.1:12234");
  oms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_product_define_response);
  listener->Start();
  req.product_name = "ProductName";
  req.data_type = "DataType";
  int ret = oms->GetProductDefine(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete oms;
}
static const char* test_get_user_data_response = "{"
"  \"DataList\": {"
"    \"Data\": ["
"      {"
"        \"DataItems\": {"
"          \"DataItem\": ["
"            {"
"              \"Name\": \"Name\","
"              \"Value\": \"Value\""
"            }"
"          ]"
"        }"
"      }"
"    ]"
"  },"
"  \"ProductName\": \"ProductName\","
"  \"DataType\": \"DataType\","
"  \"NextToken\": \"NextToken\""
"}";
static int test_get_user_data() {
  OmsGetUserDataRequestType req;
  OmsGetUserDataResponseType resp;
  Oms* oms = Oms::CreateOmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  oms->SetProxyHost("127.0.0.1:12234");
  oms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_user_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.owner_account = "OwnerAccount";
  req.product_name = "ProductName";
  req.data_type = "DataType";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.next_token = "NextToken";
  req.max_result = "MaxResult";
  int ret = oms->GetUserData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete oms;
}
int main() {
  test_get_product_define();
  test_get_user_data();
}
