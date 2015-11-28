#include "ali_cms.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_batch_create_sql_metrics_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_batch_create_sql_metrics() {
  CmsBatchCreateSqlMetricsRequestType req;
  CmsBatchCreateSqlMetricsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_create_sql_metrics_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.sqls = "Sqls";
  req.is_public = "IsPublic";
  int ret = cms->BatchCreateSqlMetrics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_batch_put_dim_table_data_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_batch_put_dim_table_data() {
  CmsBatchPutDimTableDataRequestType req;
  CmsBatchPutDimTableDataResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_put_dim_table_data_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  req.body = "Body";
  int ret = cms->BatchPutDimTableData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_batch_query_metric_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_batch_query_metric() {
  CmsBatchQueryMetricRequestType req;
  CmsBatchQueryMetricResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_query_metric_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.extend = "Extend";
  req.filter = "Filter";
  int ret = cms->BatchQueryMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_create_dim_table_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": 0"
"}";
static int test_create_dim_table() {
  CmsCreateDimTableRequestType req;
  CmsCreateDimTableResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_dim_table_response);
  listener->Start();
  req.dim_table = "DimTable";
  int ret = cms->CreateDimTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_create_metric_stream_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_create_metric_stream() {
  CmsCreateMetricStreamRequestType req;
  CmsCreateMetricStreamResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_metric_stream_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_stream = "MetricStream";
  int ret = cms->CreateMetricStream(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_create_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_create_project() {
  CmsCreateProjectRequestType req;
  CmsCreateProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_project_response);
  listener->Start();
  req.project = "Project";
  int ret = cms->CreateProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_create_sql_metrics_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_create_sql_metrics() {
  CmsCreateSqlMetricsRequestType req;
  CmsCreateSqlMetricsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_sql_metrics_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.sql = "Sql";
  req.is_public = "IsPublic";
  int ret = cms->CreateSqlMetrics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_delete_dim_table_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_delete_dim_table() {
  CmsDeleteDimTableRequestType req;
  CmsDeleteDimTableResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_dim_table_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  int ret = cms->DeleteDimTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_delete_dim_table_data_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_delete_dim_table_data() {
  CmsDeleteDimTableDataRequestType req;
  CmsDeleteDimTableDataResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_dim_table_data_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  req.key = "Key";
  int ret = cms->DeleteDimTableData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_delete_metrics_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_delete_metrics() {
  CmsDeleteMetricsRequestType req;
  CmsDeleteMetricsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_metrics_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = cms->DeleteMetrics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_delete_metric_stream_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_delete_metric_stream() {
  CmsDeleteMetricStreamRequestType req;
  CmsDeleteMetricStreamResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_metric_stream_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_stream_name = "MetricStreamName";
  int ret = cms->DeleteMetricStream(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_delete_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_delete_project() {
  CmsDeleteProjectRequestType req;
  CmsDeleteProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = cms->DeleteProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_describe_metric_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_describe_metric() {
  CmsDescribeMetricRequestType req;
  CmsDescribeMetricResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_metric_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  int ret = cms->DescribeMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_describe_metric_datum_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_describe_metric_datum() {
  CmsDescribeMetricDatumRequestType req;
  CmsDescribeMetricDatumResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_metric_datum_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.page = "Page";
  req.length = "Length";
  req.extend = "Extend";
  int ret = cms->DescribeMetricDatum(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_get_dim_table_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_get_dim_table() {
  CmsGetDimTableRequestType req;
  CmsGetDimTableResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_dim_table_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  int ret = cms->GetDimTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_get_metrics_meta_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_get_metrics_meta() {
  CmsGetMetricsMetaRequestType req;
  CmsGetMetricsMetaResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_metrics_meta_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = cms->GetMetricsMeta(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_get_metric_statistics_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"NextToken\": \"NextToken\","
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_get_metric_statistics() {
  CmsGetMetricStatisticsRequestType req;
  CmsGetMetricStatisticsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_metric_statistics_response);
  listener->Start();
  req.namespace_ = "Namespace_";
  req.metric_name = "MetricName";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.interval = "Interval";
  req.dimensions = "Dimensions";
  req.next_token = "NextToken";
  req.length = "Length";
  int ret = cms->GetMetricStatistics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_get_metric_stream_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_get_metric_stream() {
  CmsGetMetricStreamRequestType req;
  CmsGetMetricStreamResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_metric_stream_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_stream_name = "MetricStreamName";
  int ret = cms->GetMetricStream(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_get_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_get_project() {
  CmsGetProjectRequestType req;
  CmsGetProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = cms->GetProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_get_sql_metrics_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_get_sql_metrics() {
  CmsGetSqlMetricsRequestType req;
  CmsGetSqlMetricsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_sql_metrics_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  int ret = cms->GetSqlMetrics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_list_dim_table_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_list_dim_table() {
  CmsListDimTableRequestType req;
  CmsListDimTableResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_dim_table_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = cms->ListDimTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_list_metric_stream_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_list_metric_stream() {
  CmsListMetricStreamRequestType req;
  CmsListMetricStreamResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_metric_stream_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_stream_name = "MetricStreamName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = cms->ListMetricStream(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_list_project_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_list_project() {
  CmsListProjectRequestType req;
  CmsListProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_project_response);
  listener->Start();
  req.project_owner = "ProjectOwner";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = cms->ListProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_list_sql_metrics_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_list_sql_metrics() {
  CmsListSqlMetricsRequestType req;
  CmsListSqlMetricsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_sql_metrics_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  req.page = "Page";
  req.page_size = "PageSize";
  int ret = cms->ListSqlMetrics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_put_dim_table_data_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_put_dim_table_data() {
  CmsPutDimTableDataRequestType req;
  CmsPutDimTableDataResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_put_dim_table_data_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  req.body = "Body";
  int ret = cms->PutDimTableData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_query_incremental_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_query_incremental() {
  CmsQueryIncrementalRequestType req;
  CmsQueryIncrementalResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_incremental_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.target_period = "TargetPeriod";
  req.columns = "Columns";
  req.extend = "Extend";
  int ret = cms->QueryIncremental(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_query_list_metric_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_query_list_metric() {
  CmsQueryListMetricRequestType req;
  CmsQueryListMetricResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_list_metric_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.page = "Page";
  req.length = "Length";
  req.extend = "Extend";
  req.filter = "Filter";
  int ret = cms->QueryListMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_query_metric_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"NextToken\": 0"
"}";
static int test_query_metric() {
  CmsQueryMetricRequestType req;
  CmsQueryMetricResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_metric_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.page = "Page";
  req.length = "Length";
  req.extend = "Extend";
  int ret = cms->QueryMetric(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_query_metric_top_n_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_query_metric_top_n() {
  CmsQueryMetricTopNRequestType req;
  CmsQueryMetricTopNResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_metric_top_n_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.value_key = "ValueKey";
  req.top = "Top";
  req.extend = "Extend";
  int ret = cms->QueryMetricTopN(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_query_statistics_response = "{"
"  \"Datapoints\": {"
"    \"Datapoint\": ["
"      \"Datapoint\""
"    ]"
"  },"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_query_statistics() {
  CmsQueryStatisticsRequestType req;
  CmsQueryStatisticsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_statistics_response);
  listener->Start();
  req.project = "Project";
  req.metric = "Metric";
  req.period = "Period";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.dimensions = "Dimensions";
  req.target_period = "TargetPeriod";
  req.function = "Function";
  req.extend = "Extend";
  int ret = cms->QueryStatistics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_start_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_start_project() {
  CmsStartProjectRequestType req;
  CmsStartProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_start_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = cms->StartProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_status_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\","
"  \"Result\": \"Result\""
"}";
static int test_status_project() {
  CmsStatusProjectRequestType req;
  CmsStatusProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_status_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = cms->StatusProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_stop_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_stop_project() {
  CmsStopProjectRequestType req;
  CmsStopProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  int ret = cms->StopProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_update_dim_table_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_update_dim_table() {
  CmsUpdateDimTableRequestType req;
  CmsUpdateDimTableResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_dim_table_response);
  listener->Start();
  req.dim_table_name = "DimTableName";
  req.dim_table = "DimTable";
  int ret = cms->UpdateDimTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_update_metric_stream_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_update_metric_stream() {
  CmsUpdateMetricStreamRequestType req;
  CmsUpdateMetricStreamResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_metric_stream_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_stream_name = "MetricStreamName";
  req.metric_stream = "MetricStream";
  int ret = cms->UpdateMetricStream(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_update_project_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_update_project() {
  CmsUpdateProjectRequestType req;
  CmsUpdateProjectResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_project_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.project = "Project";
  int ret = cms->UpdateProject(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
static const char* test_update_sql_metrics_response = "{"
"  \"Code\": \"Code\","
"  \"Message\": \"Message\","
"  \"Success\": \"Success\","
"  \"TraceId\": \"TraceId\""
"}";
static int test_update_sql_metrics() {
  CmsUpdateSqlMetricsRequestType req;
  CmsUpdateSqlMetricsResponseType resp;
  Cms* cms = Cms::CreateCmsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cms->SetProxyHost("127.0.0.1:12234");
  cms->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_update_sql_metrics_response);
  listener->Start();
  req.project_name = "ProjectName";
  req.metric_name = "MetricName";
  req.sql = "Sql";
  req.is_public = "IsPublic";
  int ret = cms->UpdateSqlMetrics(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cms;
}
int main() {
  test_batch_create_sql_metrics();
  test_batch_put_dim_table_data();
  test_batch_query_metric();
  test_create_dim_table();
  test_create_metric_stream();
  test_create_project();
  test_create_sql_metrics();
  test_delete_dim_table();
  test_delete_dim_table_data();
  test_delete_metrics();
  test_delete_metric_stream();
  test_delete_project();
  test_describe_metric();
  test_describe_metric_datum();
  test_get_dim_table();
  test_get_metrics_meta();
  test_get_metric_statistics();
  test_get_metric_stream();
  test_get_project();
  test_get_sql_metrics();
  test_list_dim_table();
  test_list_metric_stream();
  test_list_project();
  test_list_sql_metrics();
  test_put_dim_table_data();
  test_query_incremental();
  test_query_list_metric();
  test_query_metric();
  test_query_metric_top_n();
  test_query_statistics();
  test_start_project();
  test_status_project();
  test_stop_project();
  test_update_dim_table();
  test_update_metric_stream();
  test_update_project();
  test_update_sql_metrics();
}
