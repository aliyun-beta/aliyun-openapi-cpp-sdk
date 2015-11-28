#include "ali_aas.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_create_access_key_for_account_response = "{"
"  \"AccessKey\": {"
"    \"CreateTime\": \"CreateTime\","
"    \"AccessKeyId\": \"AccessKeyId\","
"    \"AccessKeySecret\": \"AccessKeySecret\","
"    \"AccessKeyStatus\": \"AccessKeyStatus\","
"    \"AccessKeyType\": \"AccessKeyType\""
"  },"
"  \"PK\": \"PK\""
"}";
static int test_create_access_key_for_account() {
  AasCreateAccessKeyForAccountRequestType req;
  AasCreateAccessKeyForAccountResponseType resp;
  Aas* aas = Aas::CreateAasClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aas->SetProxyHost("127.0.0.1:12234");
  aas->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_access_key_for_account_response);
  listener->Start();
  req.pk = "PK";
  req.ak_secret = "AKSecret";
  int ret = aas->CreateAccessKeyForAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aas;
}
static const char* test_create_aliyun_account_response = "{"
"  \"PK\": \"PK\","
"  \"AliyunId\": \"AliyunId\""
"}";
static int test_create_aliyun_account() {
  AasCreateAliyunAccountRequestType req;
  AasCreateAliyunAccountResponseType resp;
  Aas* aas = Aas::CreateAasClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aas->SetProxyHost("127.0.0.1:12234");
  aas->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_aliyun_account_response);
  listener->Start();
  req.aliyun_id = "AliyunId";
  int ret = aas->CreateAliyunAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aas;
}
static const char* test_delete_access_key_for_account_response = "{"
"  \"PK\": \"PK\","
"  \"Result\": \"Result\""
"}";
static int test_delete_access_key_for_account() {
  AasDeleteAccessKeyForAccountRequestType req;
  AasDeleteAccessKeyForAccountResponseType resp;
  Aas* aas = Aas::CreateAasClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aas->SetProxyHost("127.0.0.1:12234");
  aas->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_access_key_for_account_response);
  listener->Start();
  req.pk = "PK";
  req.ak_id = "AKId";
  int ret = aas->DeleteAccessKeyForAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aas;
}
static const char* test_get_basic_info_for_account_response = "{"
"  \"PK\": \"PK\","
"  \"LastLoginDate\": \"LastLoginDate\""
"}";
static int test_get_basic_info_for_account() {
  AasGetBasicInfoForAccountRequestType req;
  AasGetBasicInfoForAccountResponseType resp;
  Aas* aas = Aas::CreateAasClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aas->SetProxyHost("127.0.0.1:12234");
  aas->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_basic_info_for_account_response);
  listener->Start();
  req.aliyun_id = "AliyunId";
  int ret = aas->GetBasicInfoForAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aas;
}
static const char* test_list_access_keys_for_account_response = "{"
"  \"AccessKeys\": {"
"    \"AccessKey\": ["
"      {"
"        \"CreateTime\": \"CreateTime\","
"        \"AccessKeyId\": \"AccessKeyId\","
"        \"AccessKeySecret\": \"AccessKeySecret\","
"        \"AccessKeyStatus\": \"AccessKeyStatus\","
"        \"AccessKeyType\": \"AccessKeyType\""
"      }"
"    ]"
"  },"
"  \"PK\": \"PK\""
"}";
static int test_list_access_keys_for_account() {
  AasListAccessKeysForAccountRequestType req;
  AasListAccessKeysForAccountResponseType resp;
  Aas* aas = Aas::CreateAasClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aas->SetProxyHost("127.0.0.1:12234");
  aas->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_access_keys_for_account_response);
  listener->Start();
  req.pk = "PK";
  req.ak_status = "AKStatus";
  req.ak_type = "AKType";
  int ret = aas->ListAccessKeysForAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aas;
}
static const char* test_update_access_key_status_for_account_response = "{"
"  \"PK\": \"PK\","
"  \"Result\": \"Result\""
"}";
static int test_update_access_key_status_for_account() {
  AasUpdateAccessKeyStatusForAccountRequestType req;
  AasUpdateAccessKeyStatusForAccountResponseType resp;
  Aas* aas = Aas::CreateAasClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  aas->SetProxyHost("127.0.0.1:12234");
  aas->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_access_key_status_for_account_response);
  listener->Start();
  req.pk = "PK";
  req.ak_id = "AKId";
  req.ak_status = "AKStatus";
  int ret = aas->UpdateAccessKeyStatusForAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete aas;
}
int main() {
  test_create_access_key_for_account();
  test_create_aliyun_account();
  test_delete_access_key_for_account();
  test_get_basic_info_for_account();
  test_list_access_keys_for_account();
  test_update_access_key_status_for_account();
}
