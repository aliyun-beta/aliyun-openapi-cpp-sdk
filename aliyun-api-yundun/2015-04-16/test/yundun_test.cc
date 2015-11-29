#include "ali_yundun.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_cname_waf_response = "{"
"  \"WafInfoList\": {"
"    \"WafInfo\": ["
"      {"
"        \"Id\": 0,"
"        \"Domain\": \"Domain\","
"        \"Cname\": \"Cname\","
"        \"Status\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_add_cname_waf() {
  YundunAddCNameWafRequestType req;
  YundunAddCNameWafResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_cname_waf_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  req.domain = "Domain";
  int ret = yundun->AddCNameWaf(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_bruteforce_log_response = "{"
"  \"LogList\": {"
"    \"BruteforceLog\": ["
"      {"
"        \"BlockTimes\": 0,"
"        \"SourceIp\": \"SourceIp\","
"        \"Status\": 0,"
"        \"Time\": \"Time\","
"        \"Location\": \"Location\""
"      }"
"    ]"
"  },"
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\","
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_bruteforce_log() {
  YundunBruteforceLogRequestType req;
  YundunBruteforceLogResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_bruteforce_log_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id = "InstanceId";
  req.record_type = "RecordType";
  int ret = yundun->BruteforceLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_close_cc_protect_response = "{}";
static int test_close_cc_protect() {
  YundunCloseCCProtectRequestType req;
  YundunCloseCCProtectResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_close_cc_protect_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->CloseCCProtect(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_close_port_scan_response = "{}";
static int test_close_port_scan() {
  YundunClosePortScanRequestType req;
  YundunClosePortScanResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_close_port_scan_response);
  listener->Start();
  req.instance_id = "InstanceId";
  int ret = yundun->ClosePortScan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_close_vul_scan_response = "{}";
static int test_close_vul_scan() {
  YundunCloseVulScanRequestType req;
  YundunCloseVulScanResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_close_vul_scan_response);
  listener->Start();
  req.instance_id = "InstanceId";
  int ret = yundun->CloseVulScan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_config_ddos_response = "{}";
static int test_config_ddos() {
  YundunConfigDdosRequestType req;
  YundunConfigDdosResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_config_ddos_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  req.flow_position = "FlowPosition";
  req.strategy_position = "StrategyPosition";
  req.level = "Level";
  int ret = yundun->ConfigDdos(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_confirm_login_response = "{}";
static int test_confirm_login() {
  YundunConfirmLoginRequestType req;
  YundunConfirmLoginResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_confirm_login_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.source_ip = "SourceIp";
  req.time = "Time";
  int ret = yundun->ConfirmLogin(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_ddos_flow_graph_response = "{"
"  \"NormalFlows\": {"
"    \"NormalFlow\": ["
"      {"
"        \"time\": 0,"
"        \"BitRecv\": 0,"
"        \"BitSend\": 0,"
"        \"PktRecv\": 0,"
"        \"PktSend\": 0"
"      }"
"    ]"
"  },"
"  \"TotalFlows\": {"
"    \"TotalFlow\": ["
"      {"
"        \"time\": 0,"
"        \"BitRecv\": 0,"
"        \"PktRecv\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_ddos_flow_graph() {
  YundunDdosFlowGraphRequestType req;
  YundunDdosFlowGraphResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ddos_flow_graph_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->DdosFlowGraph(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_ddos_log_response = "{"
"  \"LogList\": {"
"    \"DdosLog\": ["
"      {"
"        \"StartTime\": \"StartTime\","
"        \"EndTime\": \"EndTime\","
"        \"Reason\": \"Reason\","
"        \"Status\": 0,"
"        \"Bps\": 0,"
"        \"Pps\": 0,"
"        \"Qps\": 0,"
"        \"AttackType\": \"AttackType\","
"        \"AttackIpList\": \"AttackIpList\","
"        \"Type\": 0"
"      }"
"    ]"
"  },"
"  \"AttackStatus\": 0,"
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\","
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_ddos_log() {
  YundunDdosLogRequestType req;
  YundunDdosLogResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_ddos_log_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->DdosLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_delete_back_door_file_response = "{}";
static int test_delete_back_door_file() {
  YundunDeleteBackDoorFileRequestType req;
  YundunDeleteBackDoorFileResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_back_door_file_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.instance_id = "InstanceId";
  req.path = "Path";
  int ret = yundun->DeleteBackDoorFile(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_delete_cname_waf_response = "{"
"  \"WafInfoList\": {"
"    \"WafInfo\": ["
"      {"
"        \"Id\": 0,"
"        \"Domain\": \"Domain\","
"        \"Cname\": \"Cname\","
"        \"Status\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_delete_cname_waf() {
  YundunDeleteCNameWafRequestType req;
  YundunDeleteCNameWafResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_cname_waf_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.domain = "Domain";
  req.cname_id = "CnameId";
  req.instance_type = "InstanceType";
  int ret = yundun->DeleteCNameWaf(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_detect_vul_by_id_response = "{}";
static int test_detect_vul_by_id() {
  YundunDetectVulByIdRequestType req;
  YundunDetectVulByIdResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detect_vul_by_id_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.vul_id = "VulId";
  int ret = yundun->DetectVulById(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_detect_vul_by_ip_response = "{}";
static int test_detect_vul_by_ip() {
  YundunDetectVulByIpRequestType req;
  YundunDetectVulByIpResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detect_vul_by_ip_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.vul_ip = "VulIp";
  int ret = yundun->DetectVulByIp(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_get_ddos_config_options_response = "{"
"  \"RequestThresholdOptions1\": {"
"    \"RequestThresholdOption\": ["
"      {"
"        \"Bps\": 0,"
"        \"Pps\": 0"
"      }"
"    ]"
"  },"
"  \"RequestThresholdOptions2\": {"
"    \"RequestThresholdOption\": ["
"      {"
"        \"Bps\": 0,"
"        \"Pps\": 0"
"      }"
"    ]"
"  },"
"  \"ConnectionThresholdOptions\": {"
"    \"ConnectionThresholdOption\": ["
"      {"
"        \"Sipconn\": 0,"
"        \"Sipnew\": 0"
"      }"
"    ]"
"  },"
"  \"QpsOptions1\": {"
"    \"value\": ["
"      \"value\""
"    ]"
"  },"
"  \"QpsOptions2\": {"
"    \"value\": ["
"      \"value\""
"    ]"
"  }"
"}";
static int test_get_ddos_config_options() {
  YundunGetDdosConfigOptionsResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_ddos_config_options_response);
  listener->Start();
  int ret = yundun->GetDdosConfigOptions(&resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_list_instance_infos_response = "{"
"  \"InfosList\": {"
"    \"InstanceInfo\": ["
"      {"
"        \"Region\": \"Region\","
"        \"RegionName\": \"RegionName\","
"        \"RegionEnName\": \"RegionEnName\","
"        \"InstanceName\": \"InstanceName\","
"        \"InstanceId\": \"InstanceId\","
"        \"Ip\": \"Ip\","
"        \"InternetIp\": \"InternetIp\","
"        \"IntranetIp\": \"IntranetIp\","
"        \"Ddos\": 0,"
"        \"HostEvent\": 0,"
"        \"SecureCheck\": 0,"
"        \"AegisStatus\": 0,"
"        \"Waf\": 0,"
"        \"IsLock\": true,"
"        \"LockType\": \"LockType\","
"        \"UnLockTimes\": 0,"
"        \"TriggerTime\": \"TriggerTime\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_list_instance_infos() {
  YundunListInstanceInfosRequestType req;
  YundunListInstanceInfosResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_instance_infos_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.region = "Region";
  req.event_type = "EventType";
  req.instance_name = "InstanceName";
  req.instance_type = "InstanceType";
  req.instance_ids = "InstanceIds";
  int ret = yundun->ListInstanceInfos(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_loginevent_log_response = "{"
"  \"LogList\": {"
"    \"LoginEventLog\": ["
"      {"
"        \"BlockTimes\": 0,"
"        \"SourceIp\": \"SourceIp\","
"        \"Status\": 0,"
"        \"Time\": \"Time\","
"        \"Location\": \"Location\""
"      }"
"    ]"
"  },"
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\","
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_loginevent_log() {
  YundunLogineventLogRequestType req;
  YundunLogineventLogResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_loginevent_log_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id = "InstanceId";
  req.record_type = "RecordType";
  int ret = yundun->LogineventLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_open_cc_protect_response = "{}";
static int test_open_cc_protect() {
  YundunOpenCCProtectRequestType req;
  YundunOpenCCProtectResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_open_cc_protect_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->OpenCCProtect(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_open_port_scan_response = "{}";
static int test_open_port_scan() {
  YundunOpenPortScanRequestType req;
  YundunOpenPortScanResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_open_port_scan_response);
  listener->Start();
  req.instance_id = "InstanceId";
  int ret = yundun->OpenPortScan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_open_vul_scan_response = "{}";
static int test_open_vul_scan() {
  YundunOpenVulScanRequestType req;
  YundunOpenVulScanResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_open_vul_scan_response);
  listener->Start();
  req.instance_id = "InstanceId";
  int ret = yundun->OpenVulScan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_query_ddos_config_response = "{"
"  \"Bps\": 0,"
"  \"Pps\": 0,"
"  \"Qps\": 0,"
"  \"Sipconn\": 0,"
"  \"Sipnew\": 0,"
"  \"Layer7Config\": true,"
"  \"FlowPosition\": 0,"
"  \"QpsPosition\": 0,"
"  \"StrategyPosition\": 0,"
"  \"Level\": 0,"
"  \"HoleBps\": \"HoleBps\","
"  \"ConfigType\": \"ConfigType\""
"}";
static int test_query_ddos_config() {
  YundunQueryDdosConfigRequestType req;
  YundunQueryDdosConfigResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_query_ddos_config_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->QueryDdosConfig(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_secure_check_response = "{"
"  \"ProblemList\": {"
"    \"Info\": ["
"      {"
"        \"Ip\": \"Ip\","
"        \"Status\": \"Status\","
"        \"VulNum\": \"VulNum\","
"        \"InstanceId\": \"InstanceId\""
"      }"
"    ]"
"  },"
"  \"NoProblemList\": {"
"    \"Info\": ["
"      {"
"        \"Ip\": \"Ip\","
"        \"Status\": \"Status\","
"        \"VulNum\": \"VulNum\","
"        \"InstanceId\": \"InstanceId\""
"      }"
"    ]"
"  },"
"  \"NoScanList\": {"
"    \"Info\": ["
"      {"
"        \"Ip\": \"Ip\","
"        \"Status\": \"Status\","
"        \"VulNum\": \"VulNum\","
"        \"InstanceId\": \"InstanceId\""
"      }"
"    ]"
"  },"
"  \"ScanningList\": {"
"    \"Info\": ["
"      {"
"        \"Ip\": \"Ip\","
"        \"Status\": \"Status\","
"        \"VulNum\": \"VulNum\","
"        \"InstanceId\": \"InstanceId\""
"      }"
"    ]"
"  },"
"  \"InnerIpList\": {"
"    \"Info\": ["
"      {"
"        \"Ip\": \"Ip\","
"        \"Status\": \"Status\","
"        \"VulNum\": \"VulNum\","
"        \"InstanceId\": \"InstanceId\""
"      }"
"    ]"
"  },"
"  \"RecentInstanceId\": \"RecentInstanceId\""
"}";
static int test_secure_check() {
  YundunSecureCheckRequestType req;
  YundunSecureCheckResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_secure_check_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.instance_ids = "InstanceIds";
  int ret = yundun->SecureCheck(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_service_status_response = "{"
"  \"PortScan\": true,"
"  \"VulScan\": true"
"}";
static int test_service_status() {
  YundunServiceStatusRequestType req;
  YundunServiceStatusResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_service_status_response);
  listener->Start();
  req.instance_id = "InstanceId";
  int ret = yundun->ServiceStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_set_ddos_auto_response = "{}";
static int test_set_ddos_auto() {
  YundunSetDdosAutoRequestType req;
  YundunSetDdosAutoResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_ddos_auto_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->SetDdosAuto(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_set_ddos_qps_response = "{}";
static int test_set_ddos_qps() {
  YundunSetDdosQpsRequestType req;
  YundunSetDdosQpsResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_ddos_qps_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  req.qps_position = "QpsPosition";
  req.level = "Level";
  int ret = yundun->SetDdosQps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_summary_response = "{"
"  \"Ddos\": {"
"    \"Count\": 0,"
"    \"HostCount\": 0"
"  },"
"  \"BruteForce\": {"
"    \"Count\": 0,"
"    \"HostCount\": 0"
"  },"
"  \"Webshell\": {"
"    \"Count\": 0,"
"    \"HostCount\": 0"
"  },"
"  \"RemoteLogin\": {"
"    \"Count\": 0,"
"    \"HostCount\": 0"
"  },"
"  \"WebAttack\": {"
"    \"Count\": 0,"
"    \"HostCount\": 0"
"  },"
"  \"WebLeak\": {"
"    \"Count\": 0,"
"    \"HostCount\": 0"
"  },"
"  \"Status\": 0,"
"  \"AbnormalHostCount\": 0"
"}";
static int test_summary() {
  YundunSummaryRequestType req;
  YundunSummaryResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_summary_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.instance_ids = "InstanceIds";
  int ret = yundun->Summary(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_vul_scan_log_response = "{"
"  \"LogList\": {"
"    \"VulScanLog\": ["
"      {"
"        \"Id\": 0,"
"        \"Type\": \"Type\","
"        \"Url\": \"Url\","
"        \"HelpAddress\": \"HelpAddress\","
"        \"VulParameter\": \"VulParameter\","
"        \"Status\": 0"
"      }"
"    ]"
"  },"
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\","
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_vul_scan_log() {
  YundunVulScanLogRequestType req;
  YundunVulScanLogResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_vul_scan_log_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id = "InstanceId";
  req.vul_status = "VulStatus";
  int ret = yundun->VulScanLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_waf_info_response = "{"
"  \"WafInfos\": {"
"    \"WafInfo\": ["
"      {"
"        \"Id\": 0,"
"        \"Domain\": \"Domain\","
"        \"Cname\": \"Cname\","
"        \"Status\": 0"
"      }"
"    ]"
"  },"
"  \"WafDomainNum\": 0"
"}";
static int test_waf_info() {
  YundunWafInfoRequestType req;
  YundunWafInfoResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_waf_info_response);
  listener->Start();
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->WafInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_waf_log_response = "{"
"  \"LogList\": {"
"    \"WafLog\": ["
"      {"
"        \"SourceIp\": \"SourceIp\","
"        \"Time\": \"Time\","
"        \"Url\": \"Url\","
"        \"Type\": \"Type\","
"        \"Status\": 0"
"      }"
"    ]"
"  },"
"  \"WebAttack\": 0,"
"  \"NewWafUser\": true,"
"  \"WafOpened\": true,"
"  \"InWhiteList\": true,"
"  \"DomainCount\": 0,"
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\","
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_waf_log() {
  YundunWafLogRequestType req;
  YundunWafLogResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_waf_log_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id = "InstanceId";
  req.instance_type = "InstanceType";
  int ret = yundun->WafLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
static const char* test_webshell_log_response = "{"
"  \"LogList\": {"
"    \"WebshellLog\": ["
"      {"
"        \"Id\": \"Id\","
"        \"Path\": \"Path\","
"        \"Status\": 0,"
"        \"Time\": \"Time\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_webshell_log() {
  YundunWebshellLogRequestType req;
  YundunWebshellLogResponseType resp;
  Yundun* yundun = Yundun::CreateYundunClient("cn-hangzhou", "my_appid", "my_secret");
  if(!yundun) return 0;
  yundun->SetProxyHost("127.0.0.1:12234");
  yundun->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_webshell_log_response);
  listener->Start();
  req.jst_owner_id = "JstOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id = "InstanceId";
  req.record_type = "RecordType";
  int ret = yundun->WebshellLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete yundun;
}
int main() {
  test_add_cname_waf();
  test_bruteforce_log();
  test_close_cc_protect();
  test_close_port_scan();
  test_close_vul_scan();
  test_config_ddos();
  test_confirm_login();
  test_ddos_flow_graph();
  test_ddos_log();
  test_delete_back_door_file();
  test_delete_cname_waf();
  test_detect_vul_by_id();
  test_detect_vul_by_ip();
  test_get_ddos_config_options();
  test_list_instance_infos();
  test_loginevent_log();
  test_open_cc_protect();
  test_open_port_scan();
  test_open_vul_scan();
  test_query_ddos_config();
  test_secure_check();
  test_service_status();
  test_set_ddos_auto();
  test_set_ddos_qps();
  test_summary();
  test_vul_scan_log();
  test_waf_info();
  test_waf_log();
  test_webshell_log();
}
