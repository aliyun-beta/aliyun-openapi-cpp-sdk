#include "ali_push.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_batch_get_devices_info_response = "{"
"  \"DeviceInfos\": {"
"    \"DeviceInfo\": ["
"      {"
"        \"DeviceId\": \"DeviceId\","
"        \"IsOnline\": 0,"
"        \"Status\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_batch_get_devices_info() {
  PushBatchGetDevicesInfoRequestType req;
  PushBatchGetDevicesInfoResponseType resp;
  Push* push = Push::CreatePushClient("cn-hangzhou", "my_appid", "my_secret");
  if(!push) return 0;
  push->SetProxyHost("127.0.0.1:12234");
  push->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_get_devices_info_response);
  listener->Start();
  req.devices = "Devices";
  req.app_id = "AppId";
  int ret = push->BatchGetDevicesInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete push;
}
static const char* test_push_byte_message_response = "{"
"  \"ResponseId\": \"ResponseId\""
"}";
static int test_push_byte_message() {
  PushPushByteMessageRequestType req;
  PushPushByteMessageResponseType resp;
  Push* push = Push::CreatePushClient("cn-hangzhou", "my_appid", "my_secret");
  if(!push) return 0;
  push->SetProxyHost("127.0.0.1:12234");
  push->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_push_byte_message_response);
  listener->Start();
  req.app_id = "AppId";
  req.send_type = "SendType";
  req.accounts = "Accounts";
  req.device_ids = "DeviceIds";
  req.push_content = "PushContent";
  int ret = push->PushByteMessage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete push;
}
static const char* test_revert_rpc_response = "{"
"  \"RpcCode\": \"RpcCode\","
"  \"ResponseContent\": \"ResponseContent\""
"}";
static int test_revert_rpc() {
  PushRevertRpcRequestType req;
  PushRevertRpcResponseType resp;
  Push* push = Push::CreatePushClient("cn-hangzhou", "my_appid", "my_secret");
  if(!push) return 0;
  push->SetProxyHost("127.0.0.1:12234");
  push->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_revert_rpc_response);
  listener->Start();
  req.app_id = "AppId";
  req.device_id = "DeviceId";
  req.rpc_content = "RpcContent";
  req.time_out = "TimeOut";
  int ret = push->RevertRpc(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete push;
}
int main() {
  test_batch_get_devices_info();
  test_push_byte_message();
  test_revert_rpc();
}
