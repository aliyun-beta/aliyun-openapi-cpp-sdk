#include "ali_crm.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_label_response = "{"
"  \"Result\": \"Result\""
"}";
static int test_add_label() {
  CrmAddLabelRequestType req;
  CrmAddLabelResponseType resp;
  Crm* crm = Crm::CreateCrmClient("cn-hangzhou", "my_appid", "my_secret");
  if(!crm) return 0;
  crm->SetProxyHost("127.0.0.1:12234");
  crm->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_label_response);
  listener->Start();
  req.pk = "PK";
  req.label_name = "LabelName";
  req.label_series = "LabelSeries";
  req.end_time = "EndTime";
  int ret = crm->AddLabel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete crm;
}
static const char* test_check_label_response = "{"
"  \"Result\": 0"
"}";
static int test_check_label() {
  CrmCheckLabelRequestType req;
  CrmCheckLabelResponseType resp;
  Crm* crm = Crm::CreateCrmClient("cn-hangzhou", "my_appid", "my_secret");
  if(!crm) return 0;
  crm->SetProxyHost("127.0.0.1:12234");
  crm->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_check_label_response);
  listener->Start();
  req.pk = "PK";
  req.label_name = "LabelName";
  req.label_series = "LabelSeries";
  int ret = crm->CheckLabel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete crm;
}
static const char* test_delete_label_response = "{"
"  \"Result\": \"Result\""
"}";
static int test_delete_label() {
  CrmDeleteLabelRequestType req;
  CrmDeleteLabelResponseType resp;
  Crm* crm = Crm::CreateCrmClient("cn-hangzhou", "my_appid", "my_secret");
  if(!crm) return 0;
  crm->SetProxyHost("127.0.0.1:12234");
  crm->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_label_response);
  listener->Start();
  req.pk = "PK";
  req.label_name = "LabelName";
  req.label_series = "LabelSeries";
  int ret = crm->DeleteLabel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete crm;
}
static const char* test_query_customer_label_response = "{"
"  \"Data\": {"
"    \"CustomerLabel\": ["
"      {"
"        \"Label\": \"Label\","
"        \"LabelSeries\": \"LabelSeries\""
"      }"
"    ]"
"  },"
"  \"Success\": 0,"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\""
"}";
static int test_query_customer_label() {
  CrmQueryCustomerLabelRequestType req;
  CrmQueryCustomerLabelResponseType resp;
  Crm* crm = Crm::CreateCrmClient("cn-hangzhou", "my_appid", "my_secret");
  if(!crm) return 0;
  crm->SetProxyHost("127.0.0.1:12234");
  crm->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_customer_label_response);
  listener->Start();
  req.label_series = "LabelSeries";
  int ret = crm->QueryCustomerLabel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete crm;
}
int main() {
  test_add_label();
  test_check_label();
  test_delete_label();
  test_query_customer_label();
}
