#include "ali_slb.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_backend_servers_response = "{"
"  \"BackendServers\": {"
"    \"BackendServer\": ["
"      {"
"        \"ServerId\": \"ServerId\","
"        \"Weight\": 0"
"      }"
"    ]"
"  },"
"  \"LoadBalancerId\": \"LoadBalancerId\""
"}";
static int test_add_backend_servers() {
  SlbAddBackendServersRequestType req;
  SlbAddBackendServersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_backend_servers_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.backend_servers = "BackendServers";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->AddBackendServers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_response = "{"
"  \"Address\": \"Address\","
"  \"LoadBalancerId\": \"LoadBalancerId\","
"  \"LoadBalancerName\": \"LoadBalancerName\""
"}";
static int test_create_load_balancer() {
  SlbCreateLoadBalancerRequestType req;
  SlbCreateLoadBalancerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.is_public_address = "IsPublicAddress";
  req.address = "Address";
  req.client_token = "ClientToken";
  req.load_balancer_name = "LoadBalancerName";
  req.load_balancer_mode = "LoadBalancerMode";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_ht_tp_listener_response = "{}";
static int test_create_load_balancer_ht_tp_listener() {
  SlbCreateLoadBalancerHTTPListenerRequestType req;
  SlbCreateLoadBalancerHTTPListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_ht_tp_listener_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.backend_server_port = "BackendServerPort";
  req.listener_status = "ListenerStatus";
  req.xforwarded_for = "XForwardedFor";
  req.scheduler = "Scheduler";
  req.sticky_session = "StickySession";
  req.sticky_session_type = "StickySessionType";
  req.cookie_timeout = "CookieTimeout";
  req.cookie = "Cookie";
  req.health_check = "HealthCheck";
  req.domain = "Domain";
  req.ur_i = "URI";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_timeout = "HealthCheckTimeout";
  req.interval = "Interval";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancerHTTPListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_tc_plistener_response = "{}";
static int test_create_load_balancer_tc_plistener() {
  SlbCreateLoadBalancerTCPListenerRequestType req;
  SlbCreateLoadBalancerTCPListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_tc_plistener_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.backend_server_port = "BackendServerPort";
  req.listener_status = "ListenerStatus";
  req.scheduler = "Scheduler";
  req.persistence_timeout = "PersistenceTimeout";
  req.health_check = "HealthCheck";
  req.connect_timeout = "ConnectTimeout";
  req.connect_port = "ConnectPort";
  req.interval = "Interval";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancerTCPListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_delete_load_balancer_response = "{}";
static int test_delete_load_balancer() {
  SlbDeleteLoadBalancerRequestType req;
  SlbDeleteLoadBalancerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_load_balancer_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DeleteLoadBalancer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_delete_load_balancer_listener_response = "{}";
static int test_delete_load_balancer_listener() {
  SlbDeleteLoadBalancerListenerRequestType req;
  SlbDeleteLoadBalancerListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_load_balancer_listener_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DeleteLoadBalancerListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_backend_servers_response = "{"
"  \"Listeners\": {"
"    \"Listener\": ["
"      {"
"        \"BackendServers\": {"
"          \"BackendServer\": ["
"            {"
"              \"ServerId\": \"ServerId\","
"              \"ServerHealthStatus\": \"ServerHealthStatus\""
"            }"
"          ]"
"        },"
"        \"ListenerPort\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_describe_backend_servers() {
  SlbDescribeBackendServersRequestType req;
  SlbDescribeBackendServersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_backend_servers_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeBackendServers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_attribute_response = "{"
"  \"BackendServers\": {"
"    \"BackendServer\": ["
"      {"
"        \"ServerId\": \"ServerId\","
"        \"Weight\": 0"
"      }"
"    ]"
"  },"
"  \"ListenerPorts\": {"
"    \"ListenerPort\": ["
"      \"ListenerPort\""
"    ]"
"  },"
"  \"LoadBalancerId\": \"LoadBalancerId\","
"  \"LoadBalancerName\": \"LoadBalancerName\","
"  \"LoadBalancerStatus\": \"LoadBalancerStatus\","
"  \"RegionId\": \"RegionId\","
"  \"Address\": \"Address\","
"  \"IsPublicAddress\": \"IsPublicAddress\""
"}";
static int test_describe_load_balancer_attribute() {
  SlbDescribeLoadBalancerAttributeRequestType req;
  SlbDescribeLoadBalancerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_attribute_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_ht_tp_listener_attribute_response = "{"
"  \"ListenerPort\": 0,"
"  \"BackendServerPort\": 0,"
"  \"Status\": \"Status\","
"  \"XForwardedFor\": \"XForwardedFor\","
"  \"Scheduler\": \"Scheduler\","
"  \"StickySession\": \"StickySession\","
"  \"StickySessionapiType\": \"StickySessionapiType\","
"  \"CookieTimeout\": 0,"
"  \"Cookie\": \"Cookie\","
"  \"HealthCheck\": \"HealthCheck\","
"  \"Domain\": \"Domain\","
"  \"URI\": \"URI\","
"  \"HealthyThreshold\": 0,"
"  \"UnhealthyThreshold\": 0,"
"  \"HealthCheckTimeout\": 0,"
"  \"Interval\": 0"
"}";
static int test_describe_load_balancer_ht_tp_listener_attribute() {
  SlbDescribeLoadBalancerHTTPListenerAttributeRequestType req;
  SlbDescribeLoadBalancerHTTPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_ht_tp_listener_attribute_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerHTTPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancers_response = "{"
"  \"LoadBalancers\": {"
"    \"LoadBalancer\": ["
"      {"
"        \"LoadBalancerId\": \"LoadBalancerId\","
"        \"LoadBalancerName\": \"LoadBalancerName\","
"        \"LoadBalancerStatus\": \"LoadBalancerStatus\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_load_balancers() {
  SlbDescribeLoadBalancersRequestType req;
  SlbDescribeLoadBalancersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancers_response);
  listener->Start();
  req.server_id = "ServerId";
  req.load_balancer_id = "LoadBalancerId";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_tc_plistener_attribute_response = "{"
"  \"ListenerPort\": 0,"
"  \"BackendServerPort\": 0,"
"  \"Status\": \"Status\","
"  \"Scheduler\": \"Scheduler\","
"  \"PersistenceTimeout\": 0,"
"  \"HealthCheck\": \"HealthCheck\","
"  \"HealthyThreshold\": 0,"
"  \"UnhealthyThreshold\": 0,"
"  \"ConnectTimeout\": 0,"
"  \"ConnectPort\": 0,"
"  \"Interval\": 0"
"}";
static int test_describe_load_balancer_tc_plistener_attribute() {
  SlbDescribeLoadBalancerTCPListenerAttributeRequestType req;
  SlbDescribeLoadBalancerTCPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_tc_plistener_attribute_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerTCPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_regions_response = "{"
"  \"Regions\": {"
"    \"Region\": ["
"      {"
"        \"RegionId\": \"RegionId\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions() {
  SlbDescribeRegionsRequestType req;
  SlbDescribeRegionsResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_remove_backend_servers_response = "{"
"  \"BackendServers\": {"
"    \"BackendServer\": ["
"      {"
"        \"ServerId\": \"ServerId\","
"        \"Weight\": 0"
"      }"
"    ]"
"  },"
"  \"LoadBalancerId\": \"LoadBalancerId\""
"}";
static int test_remove_backend_servers() {
  SlbRemoveBackendServersRequestType req;
  SlbRemoveBackendServersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_backend_servers_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.backend_servers = "BackendServers";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->RemoveBackendServers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_ht_tp_listener_attribute_response = "{}";
static int test_set_load_balancer_ht_tp_listener_attribute() {
  SlbSetLoadBalancerHTTPListenerAttributeRequestType req;
  SlbSetLoadBalancerHTTPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_ht_tp_listener_attribute_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.xforwarded_for = "XForwardedFor";
  req.scheduler = "Scheduler";
  req.sticky_session = "StickySession";
  req.sticky_session_type = "StickySessionType";
  req.cookie_timeout = "CookieTimeout";
  req.cookie = "Cookie";
  req.health_check = "HealthCheck";
  req.domain = "Domain";
  req.ur_i = "URI";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_timeout = "HealthCheckTimeout";
  req.interval = "Interval";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerHTTPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_listener_status_response = "{}";
static int test_set_load_balancer_listener_status() {
  SlbSetLoadBalancerListenerStatusRequestType req;
  SlbSetLoadBalancerListenerStatusResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_listener_status_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.listener_status = "ListenerStatus";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerListenerStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_name_response = "{}";
static int test_set_load_balancer_name() {
  SlbSetLoadBalancerNameRequestType req;
  SlbSetLoadBalancerNameResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_name_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.load_balancer_name = "LoadBalancerName";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerName(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_status_response = "{}";
static int test_set_load_balancer_status() {
  SlbSetLoadBalancerStatusRequestType req;
  SlbSetLoadBalancerStatusResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_status_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.load_balancer_status = "LoadBalancerStatus";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_tc_plistener_attribute_response = "{}";
static int test_set_load_balancer_tc_plistener_attribute() {
  SlbSetLoadBalancerTCPListenerAttributeRequestType req;
  SlbSetLoadBalancerTCPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_tc_plistener_attribute_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.scheduler = "Scheduler";
  req.persistence_timeout = "PersistenceTimeout";
  req.health_check = "HealthCheck";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.connect_timeout = "ConnectTimeout";
  req.connect_port = "ConnectPort";
  req.interval = "Interval";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerTCPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_banancer_listener_status_response = "{}";
static int test_set_load_banancer_listener_status() {
  SlbSetLoadBanancerListenerStatusRequestType req;
  SlbSetLoadBanancerListenerStatusResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_banancer_listener_status_response);
  listener->Start();
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.listener_status = "ListenerStatus";
  req.host_id = "HostId";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBanancerListenerStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
int main() {
  test_add_backend_servers();
  test_create_load_balancer();
  test_create_load_balancer_ht_tp_listener();
  test_create_load_balancer_tc_plistener();
  test_delete_load_balancer();
  test_delete_load_balancer_listener();
  test_describe_backend_servers();
  test_describe_load_balancer_attribute();
  test_describe_load_balancer_ht_tp_listener_attribute();
  test_describe_load_balancers();
  test_describe_load_balancer_tc_plistener_attribute();
  test_describe_regions();
  test_remove_backend_servers();
  test_set_load_balancer_ht_tp_listener_attribute();
  test_set_load_balancer_listener_status();
  test_set_load_balancer_name();
  test_set_load_balancer_status();
  test_set_load_balancer_tc_plistener_attribute();
  test_set_load_banancer_listener_status();
}
