#include "ali_cms.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_describe_metric_datum_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"NextToken\": \"NextToken\","
"  \"Code\": \"Code\","
"  \"Message\": \"Message\""
"}";
static int test_describe_metric_datum() {
  CmsDescribeMetricDatumRequestType req;
  CmsDescribeMetricDatumResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!cms) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_metric_datum_response);
  listener->Start();
  req.namespace_ = "Namespace_";
  req.metric_name = "MetricName";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.period = "Period";
  req.statistics = "Statistics";
  req.group_name = "GroupName";
  req.next_token = "NextToken";
  req.length = "Length";
  int ret = cms->DescribeMetricDatum(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
int main() {
  test_describe_metric_datum();
}
