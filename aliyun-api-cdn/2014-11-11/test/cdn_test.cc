#include "ali_cdn.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_cdn_domain_response = "{}";
static int test_add_cdn_domain() {
  CdnAddCdnDomainRequestType req;
  CdnAddCdnDomainResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_cdn_domain_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  req.ssl_flag = "SslFlag";
  req.source_type = "SourceType";
  req.cdn_type = "CdnType";
  req.sources = "Sources";
  int ret = cdn->AddCdnDomain(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_delete_cdn_domain_response = "{}";
static int test_delete_cdn_domain() {
  CdnDeleteCdnDomainRequestType req;
  CdnDeleteCdnDomainResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_cdn_domain_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  int ret = cdn->DeleteCdnDomain(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_cdn_domain_base_detail_response = "{"
"  \"DomainBaseDetailModel\": {"
"    \"Sources\": {"
"      \"Source\": ["
"        \"Source\""
"      ]"
"    },"
"    \"Cname\": \"Cname\","
"    \"CdnType\": \"CdnType\","
"    \"DomainStatus\": \"DomainStatus\","
"    \"SourceType\": \"SourceType\","
"    \"DomainName\": \"DomainName\","
"    \"Remark\": \"Remark\","
"    \"GmtModified\": \"GmtModified\","
"    \"GmtCreated\": \"GmtCreated\""
"  }"
"}";
static int test_describe_cdn_domain_base_detail() {
  CdnDescribeCdnDomainBaseDetailRequestType req;
  CdnDescribeCdnDomainBaseDetailResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cdn_domain_base_detail_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  int ret = cdn->DescribeCdnDomainBaseDetail(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_cdn_domain_detail_response = "{"
"  \"GetDomainDetailModel\": {"
"    \"Sources\": {"
"      \"Source\": ["
"        \"Source\""
"      ]"
"    },"
"    \"GmtCreated\": \"GmtCreated\","
"    \"GmtModified\": \"GmtModified\","
"    \"SourceType\": \"SourceType\","
"    \"DomainStatus\": \"DomainStatus\","
"    \"CdnType\": \"CdnType\","
"    \"Cname\": \"Cname\","
"    \"HttpsCname\": \"HttpsCname\","
"    \"DomainName\": \"DomainName\","
"    \"Remark\": \"Remark\""
"  }"
"}";
static int test_describe_cdn_domain_detail() {
  CdnDescribeCdnDomainDetailRequestType req;
  CdnDescribeCdnDomainDetailResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cdn_domain_detail_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  int ret = cdn->DescribeCdnDomainDetail(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_cdn_domain_logs_response = "{"
"  \"DomainLogModel\": {"
"    \"DomainLogDetails\": {"
"      \"DomainLogDetail\": ["
"        {"
"          \"LogName\": \"LogName\","
"          \"LogPath\": \"LogPath\","
"          \"LogSize\": 0,"
"          \"StartTime\": \"StartTime\","
"          \"EndTime\": \"EndTime\""
"        }"
"      ]"
"    },"
"    \"DomainName\": \"DomainName\""
"  }"
"}";
static int test_describe_cdn_domain_logs() {
  CdnDescribeCdnDomainLogsRequestType req;
  CdnDescribeCdnDomainLogsResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cdn_domain_logs_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  req.log_day = "LogDay";
  int ret = cdn->DescribeCdnDomainLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_cdn_monitor_data_response = "{"
"  \"MonitorDatas\": {"
"    \"CDNMonitorData\": ["
"      {"
"        \"TimeStamp\": \"TimeStamp\","
"        \"QueryPerSecond\": \"QueryPerSecond\","
"        \"BytesPerSecond\": \"BytesPerSecond\","
"        \"BytesHitRate\": \"BytesHitRate\","
"        \"RequestHitRate\": \"RequestHitRate\","
"        \"AverageObjectSize\": \"AverageObjectSize\""
"      }"
"    ]"
"  },"
"  \"DomainName\": \"DomainName\","
"  \"MonitorInterval\": 0,"
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\""
"}";
static int test_describe_cdn_monitor_data() {
  CdnDescribeCdnMonitorDataRequestType req;
  CdnDescribeCdnMonitorDataResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cdn_monitor_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  int ret = cdn->DescribeCdnMonitorData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_cdn_service_response = "{"
"  \"OperationLocks\": {"
"    \"LockReason\": ["
"      {"
"        \"LockReason\": \"LockReason\""
"      }"
"    ]"
"  },"
"  \"InternetChargeType\": \"InternetChargeType\","
"  \"OpeningTime\": \"OpeningTime\","
"  \"ChangingChargeType\": \"ChangingChargeType\","
"  \"ChangingAffectTime\": \"ChangingAffectTime\""
"}";
static int test_describe_cdn_service() {
  CdnDescribeCdnServiceRequestType req;
  CdnDescribeCdnServiceResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cdn_service_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  int ret = cdn->DescribeCdnService(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_one_minute_data_response = "{"
"  \"Bps\": \"Bps\","
"  \"Qps\": \"Qps\""
"}";
static int test_describe_one_minute_data() {
  CdnDescribeOneMinuteDataRequestType req;
  CdnDescribeOneMinuteDataResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_one_minute_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  req.data_time = "DataTime";
  int ret = cdn->DescribeOneMinuteData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_refresh_tasks_response = "{"
"  \"Tasks\": {"
"    \"CDNTask\": ["
"      {"
"        \"TaskId\": \"TaskId\","
"        \"ObjectPath\": \"ObjectPath\","
"        \"Status\": \"Status\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_describe_refresh_tasks() {
  CdnDescribeRefreshTasksRequestType req;
  CdnDescribeRefreshTasksResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_refresh_tasks_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.task_id = "TaskId";
  req.object_path = "ObjectPath";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = cdn->DescribeRefreshTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_describe_user_domains_response = "{"
"  \"Domains\": {"
"    \"PageData\": ["
"      {"
"        \"DomainName\": \"DomainName\","
"        \"Cname\": \"Cname\","
"        \"CdnType\": \"CdnType\","
"        \"DomainStatus\": \"DomainStatus\","
"        \"GmtCreated\": \"GmtCreated\","
"        \"GmtModified\": \"GmtModified\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_describe_user_domains() {
  CdnDescribeUserDomainsRequestType req;
  CdnDescribeUserDomainsResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_user_domains_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  int ret = cdn->DescribeUserDomains(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_modify_cdn_service_response = "{}";
static int test_modify_cdn_service() {
  CdnModifyCdnServiceRequestType req;
  CdnModifyCdnServiceResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_cdn_service_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.internet_charge_type = "InternetChargeType";
  int ret = cdn->ModifyCdnService(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_open_cdn_service_response = "{}";
static int test_open_cdn_service() {
  CdnOpenCdnServiceRequestType req;
  CdnOpenCdnServiceResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_open_cdn_service_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.internet_charge_type = "InternetChargeType";
  int ret = cdn->OpenCdnService(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_push_object_cache_response = "{"
"  \"PushTaskId\": \"PushTaskId\""
"}";
static int test_push_object_cache() {
  CdnPushObjectCacheRequestType req;
  CdnPushObjectCacheResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_push_object_cache_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.object_path = "ObjectPath";
  int ret = cdn->PushObjectCache(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_refresh_object_caches_response = "{"
"  \"RefreshTaskId\": \"RefreshTaskId\""
"}";
static int test_refresh_object_caches() {
  CdnRefreshObjectCachesRequestType req;
  CdnRefreshObjectCachesResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_refresh_object_caches_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.object_path = "ObjectPath";
  req.object_type = "ObjectType";
  int ret = cdn->RefreshObjectCaches(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_start_cdn_domain_response = "{}";
static int test_start_cdn_domain() {
  CdnStartCdnDomainRequestType req;
  CdnStartCdnDomainResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_start_cdn_domain_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  int ret = cdn->StartCdnDomain(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
static const char* test_stop_cdn_domain_response = "{}";
static int test_stop_cdn_domain() {
  CdnStopCdnDomainRequestType req;
  CdnStopCdnDomainResponseType resp;
  Cdn* cdn = Cdn::CreateCdnClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  cdn->SetProxyHost("127.0.0.1:12234");
  cdn->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_cdn_domain_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.domain_name = "DomainName";
  int ret = cdn->StopCdnDomain(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete cdn;
}
int main() {
  test_add_cdn_domain();
  test_delete_cdn_domain();
  test_describe_cdn_domain_base_detail();
  test_describe_cdn_domain_detail();
  test_describe_cdn_domain_logs();
  test_describe_cdn_monitor_data();
  test_describe_cdn_service();
  test_describe_one_minute_data();
  test_describe_refresh_tasks();
  test_describe_user_domains();
  test_modify_cdn_service();
  test_open_cdn_service();
  test_push_object_cache();
  test_refresh_object_caches();
  test_start_cdn_domain();
  test_stop_cdn_domain();
}
