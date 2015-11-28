#include "ali_slb.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_backend_servers_response = "{"
"  \"BackendServers\": {"
"    \"BackendServer\": ["
"      {"
"        \"ServerId\": \"ServerId\","
"        \"Weight\": \"Weight\""
"      }"
"    ]"
"  },"
"  \"LoadBalancerId\": \"LoadBalancerId\""
"}";
static int test_add_backend_servers() {
  SlbAddBackendServersRequestType req;
  SlbAddBackendServersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_backend_servers_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.backend_servers = "BackendServers";
  req.owner_account = "OwnerAccount";
  int ret = slb->AddBackendServers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_add_listener_white_list_item_response = "{}";
static int test_add_listener_white_list_item() {
  SlbAddListenerWhiteListItemRequestType req;
  SlbAddListenerWhiteListItemResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_listener_white_list_item_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.source_items = "SourceItems";
  req.owner_account = "OwnerAccount";
  int ret = slb->AddListenerWhiteListItem(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_response = "{"
"  \"LoadBalancerId\": \"LoadBalancerId\","
"  \"Address\": \"Address\","
"  \"LoadBalancerName\": \"LoadBalancerName\","
"  \"VpcId\": \"VpcId\","
"  \"VSwitchId\": \"VSwitchId\","
"  \"NetworkType\": \"NetworkType\""
"}";
static int test_create_load_balancer() {
  SlbCreateLoadBalancerRequestType req;
  SlbCreateLoadBalancerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.address_type = "AddressType";
  req.internet_charge_type = "InternetChargeType";
  req.bandwidth = "Bandwidth";
  req.client_token = "ClientToken";
  req.load_balancer_name = "LoadBalancerName";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VSwitchId";
  req.owner_account = "OwnerAccount";
  req.master_zone_id = "MasterZoneId";
  req.slave_zone_id = "SlaveZoneId";
  req.max_conn_limit = "MaxConnLimit";
  req.security_status = "SecurityStatus";
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
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_ht_tp_listener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.bandwidth = "Bandwidth";
  req.listener_port = "ListenerPort";
  req.backend_server_port = "BackendServerPort";
  req.xforwarded_for = "XForwardedFor";
  req.scheduler = "Scheduler";
  req.sticky_session = "StickySession";
  req.sticky_session_type = "StickySessionType";
  req.cookie_timeout = "CookieTimeout";
  req.cookie = "Cookie";
  req.health_check = "HealthCheck";
  req.health_check_domain = "HealthCheckDomain";
  req.health_check_ur_i = "HealthCheckURI";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_timeout = "HealthCheckTimeout";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_interval = "HealthCheckInterval";
  req.health_check_http_code = "HealthCheckHttpCode";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancerHTTPListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_ht_tp_slistener_response = "{}";
static int test_create_load_balancer_ht_tp_slistener() {
  SlbCreateLoadBalancerHTTPSListenerRequestType req;
  SlbCreateLoadBalancerHTTPSListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_ht_tp_slistener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.bandwidth = "Bandwidth";
  req.listener_port = "ListenerPort";
  req.backend_server_port = "BackendServerPort";
  req.xforwarded_for = "XForwardedFor";
  req.scheduler = "Scheduler";
  req.sticky_session = "StickySession";
  req.sticky_session_type = "StickySessionType";
  req.cookie_timeout = "CookieTimeout";
  req.cookie = "Cookie";
  req.health_check = "HealthCheck";
  req.health_check_domain = "HealthCheckDomain";
  req.health_check_ur_i = "HealthCheckURI";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_timeout = "HealthCheckTimeout";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_interval = "HealthCheckInterval";
  req.health_check_http_code = "HealthCheckHttpCode";
  req.server_certificate_id = "ServerCertificateId";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancerHTTPSListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_tc_plistener_response = "{}";
static int test_create_load_balancer_tc_plistener() {
  SlbCreateLoadBalancerTCPListenerRequestType req;
  SlbCreateLoadBalancerTCPListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_tc_plistener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.backend_server_port = "BackendServerPort";
  req.bandwidth = "Bandwidth";
  req.scheduler = "Scheduler";
  req.persistence_timeout = "PersistenceTimeout";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_connect_timeout = "HealthCheckConnectTimeout";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_interval = "healthCheckInterval";
  req.health_check_domain = "HealthCheckDomain";
  req.health_check_ur_i = "HealthCheckURI";
  req.health_check_http_code = "HealthCheckHttpCode";
  req.health_check_type = "HealthCheckType";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancerTCPListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_create_load_balancer_ud_plistener_response = "{}";
static int test_create_load_balancer_ud_plistener() {
  SlbCreateLoadBalancerUDPListenerRequestType req;
  SlbCreateLoadBalancerUDPListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_load_balancer_ud_plistener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.backend_server_port = "BackendServerPort";
  req.bandwidth = "Bandwidth";
  req.scheduler = "Scheduler";
  req.persistence_timeout = "PersistenceTimeout";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_connect_timeout = "HealthCheckConnectTimeout";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_interval = "healthCheckInterval";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->CreateLoadBalancerUDPListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_delete_load_balancer_response = "{}";
static int test_delete_load_balancer() {
  SlbDeleteLoadBalancerRequestType req;
  SlbDeleteLoadBalancerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
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
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_load_balancer_listener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DeleteLoadBalancerListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_delete_server_certificate_response = "{}";
static int test_delete_server_certificate() {
  SlbDeleteServerCertificateRequestType req;
  SlbDeleteServerCertificateResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_server_certificate_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.server_certificate_id = "ServerCertificateId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DeleteServerCertificate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_health_status_response = "{"
"  \"BackendServers\": {"
"    \"BackendServer\": ["
"      {"
"        \"ServerId\": \"ServerId\","
"        \"ServerHealthStatus\": \"ServerHealthStatus\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_health_status() {
  SlbDescribeHealthStatusRequestType req;
  SlbDescribeHealthStatusResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_health_status_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeHealthStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_listener_access_control_attribute_response = "{"
"  \"AccessControlStatus\": \"AccessControlStatus\","
"  \"SourceItems\": \"SourceItems\""
"}";
static int test_describe_listener_access_control_attribute() {
  SlbDescribeListenerAccessControlAttributeRequestType req;
  SlbDescribeListenerAccessControlAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_listener_access_control_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeListenerAccessControlAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_attribute_response = "{"
"  \"ListenerPortsAndProtocal\": {"
"    \"ListenerPortAndProtocal\": ["
"      {"
"        \"ListenerPort\": 0,"
"        \"ListenerProtocal\": \"ListenerProtocal\""
"      }"
"    ]"
"  },"
"  \"ListenerPortsAndProtocol\": {"
"    \"ListenerPortAndProtocol\": ["
"      {"
"        \"ListenerPort\": 0,"
"        \"ListenerProtocol\": \"ListenerProtocol\""
"      }"
"    ]"
"  },"
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
"  \"RegionIdAlias\": \"RegionIdAlias\","
"  \"Address\": \"Address\","
"  \"AddressType\": \"AddressType\","
"  \"VpcId\": \"VpcId\","
"  \"VSwitchId\": \"VSwitchId\","
"  \"NetworkType\": \"NetworkType\","
"  \"InternetChargeType\": \"InternetChargeType\","
"  \"Bandwidth\": 0,"
"  \"SysBandwidth\": 0,"
"  \"CreateTime\": \"CreateTime\","
"  \"CreateTimeStamp\": 0,"
"  \"MasterZoneId\": \"MasterZoneId\","
"  \"SlaveZoneId\": \"SlaveZoneId\","
"  \"MaxConnLimit\": 0,"
"  \"SecurityStatus\": \"SecurityStatus\""
"}";
static int test_describe_load_balancer_attribute() {
  SlbDescribeLoadBalancerAttributeRequestType req;
  SlbDescribeLoadBalancerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_ht_tp_listener_attribute_response = "{"
"  \"ListenerPort\": 0,"
"  \"BackendServerPort\": 0,"
"  \"Bandwidth\": 0,"
"  \"Status\": \"Status\","
"  \"XForwardedFor\": \"XForwardedFor\","
"  \"Scheduler\": \"Scheduler\","
"  \"StickySession\": \"StickySession\","
"  \"StickySessionType\": \"StickySessionType\","
"  \"CookieTimeout\": 0,"
"  \"Cookie\": \"Cookie\","
"  \"HealthCheck\": \"HealthCheck\","
"  \"HealthCheckDomain\": \"HealthCheckDomain\","
"  \"HealthCheckURI\": \"HealthCheckURI\","
"  \"HealthyThreshold\": 0,"
"  \"UnhealthyThreshold\": 0,"
"  \"HealthCheckTimeout\": 0,"
"  \"HealthCheckInterval\": 0,"
"  \"HealthCheckConnectPort\": 0,"
"  \"HealthCheckHttpCode\": \"HealthCheckHttpCode\","
"  \"MaxConnLimit\": 0"
"}";
static int test_describe_load_balancer_ht_tp_listener_attribute() {
  SlbDescribeLoadBalancerHTTPListenerAttributeRequestType req;
  SlbDescribeLoadBalancerHTTPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_ht_tp_listener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerHTTPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_ht_tp_slistener_attribute_response = "{"
"  \"ListenerPort\": 0,"
"  \"BackendServerPort\": 0,"
"  \"Bandwidth\": 0,"
"  \"Status\": \"Status\","
"  \"XForwardedFor\": \"XForwardedFor\","
"  \"Scheduler\": \"Scheduler\","
"  \"StickySession\": \"StickySession\","
"  \"StickySessionType\": \"StickySessionType\","
"  \"CookieTimeout\": 0,"
"  \"Cookie\": \"Cookie\","
"  \"HealthCheck\": \"HealthCheck\","
"  \"HealthCheckDomain\": \"HealthCheckDomain\","
"  \"HealthCheckURI\": \"HealthCheckURI\","
"  \"HealthyThreshold\": 0,"
"  \"UnhealthyThreshold\": 0,"
"  \"HealthCheckTimeout\": 0,"
"  \"HealthCheckInterval\": 0,"
"  \"HealthCheckConnectPort\": 0,"
"  \"HealthCheckHttpCode\": \"HealthCheckHttpCode\","
"  \"ServerCertificateId\": \"ServerCertificateId\","
"  \"MaxConnLimit\": 0"
"}";
static int test_describe_load_balancer_ht_tp_slistener_attribute() {
  SlbDescribeLoadBalancerHTTPSListenerAttributeRequestType req;
  SlbDescribeLoadBalancerHTTPSListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_ht_tp_slistener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerHTTPSListenerAttribute(req, &resp, NULL);
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
"        \"LoadBalancerStatus\": \"LoadBalancerStatus\","
"        \"Address\": \"Address\","
"        \"AddressType\": \"AddressType\","
"        \"RegionId\": \"RegionId\","
"        \"RegionIdAlias\": \"RegionIdAlias\","
"        \"VSwitchId\": \"VSwitchId\","
"        \"VpcId\": \"VpcId\","
"        \"NetworkType\": \"NetworkType\","
"        \"MasterZoneId\": \"MasterZoneId\","
"        \"SlaveZoneId\": \"SlaveZoneId\","
"        \"MaxConnLimit\": 0,"
"        \"SecurityStatus\": \"SecurityStatus\","
"        \"InternetChargeType\": \"InternetChargeType\","
"        \"SysBandwidth\": 0"
"      }"
"    ]"
"  }"
"}";
static int test_describe_load_balancers() {
  SlbDescribeLoadBalancersRequestType req;
  SlbDescribeLoadBalancersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancers_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.server_id = "ServerId";
  req.load_balancer_id = "LoadBalancerId";
  req.address_type = "AddressType";
  req.internet_charge_type = "InternetChargeType";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VSwitchId";
  req.network_type = "NetworkType";
  req.address = "Address";
  req.security_status = "SecurityStatus";
  req.master_zone_id = "MasterZoneId";
  req.slave_zone_id = "SlaveZoneId";
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
"  \"Bandwidth\": 0,"
"  \"Scheduler\": \"Scheduler\","
"  \"SynProxy\": \"SynProxy\","
"  \"PersistenceTimeout\": 0,"
"  \"HealthCheck\": \"HealthCheck\","
"  \"HealthyThreshold\": 0,"
"  \"UnhealthyThreshold\": 0,"
"  \"HealthCheckConnectTimeout\": 0,"
"  \"HealthCheckConnectPort\": 0,"
"  \"HealthCheckInterval\": 0,"
"  \"HealthCheckHttpCode\": \"HealthCheckHttpCode\","
"  \"HealthCheckDomain\": \"HealthCheckDomain\","
"  \"HealthCheckURI\": \"HealthCheckURI\","
"  \"HealthCheckType\": \"HealthCheckType\","
"  \"MaxConnLimit\": 0"
"}";
static int test_describe_load_balancer_tc_plistener_attribute() {
  SlbDescribeLoadBalancerTCPListenerAttributeRequestType req;
  SlbDescribeLoadBalancerTCPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_tc_plistener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerTCPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_load_balancer_ud_plistener_attribute_response = "{"
"  \"ListenerPort\": 0,"
"  \"BackendServerPort\": 0,"
"  \"Status\": \"Status\","
"  \"Bandwidth\": 0,"
"  \"Scheduler\": \"Scheduler\","
"  \"PersistenceTimeout\": 0,"
"  \"HealthCheck\": \"HealthCheck\","
"  \"HealthyThreshold\": 0,"
"  \"UnhealthyThreshold\": 0,"
"  \"HealthCheckConnectTimeout\": 0,"
"  \"HealthCheckConnectPort\": 0,"
"  \"HealthCheckInterval\": 0,"
"  \"MaxConnLimit\": 0"
"}";
static int test_describe_load_balancer_ud_plistener_attribute() {
  SlbDescribeLoadBalancerUDPListenerAttributeRequestType req;
  SlbDescribeLoadBalancerUDPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_load_balancer_ud_plistener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeLoadBalancerUDPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_locations_response = "{}";
static int test_describe_locations() {
  SlbDescribeLocationsRequestType req;
  SlbDescribeLocationsResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_locations_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.namespace_ = "Namespace_";
  req.namespace_uid = "NamespaceUid";
  int ret = slb->DescribeLocations(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_regions_response = "{"
"  \"Regions\": {"
"    \"Region\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions() {
  SlbDescribeRegionsRequestType req;
  SlbDescribeRegionsResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_regions4_location_response = "{"
"  \"Regions\": {"
"    \"Region\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions4_location() {
  SlbDescribeRegions4LocationRequestType req;
  SlbDescribeRegions4LocationResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions4_location_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeRegions4Location(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_server_certificate_response = "{"
"  \"ServerCertificateId\": \"ServerCertificateId\","
"  \"Fingerprint\": \"Fingerprint\","
"  \"RegionId\": \"RegionId\","
"  \"RegionIdAlias\": \"RegionIdAlias\","
"  \"ServerCertificateName\": \"ServerCertificateName\""
"}";
static int test_describe_server_certificate() {
  SlbDescribeServerCertificateRequestType req;
  SlbDescribeServerCertificateResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_server_certificate_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.server_certificate_id = "ServerCertificateId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeServerCertificate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_server_certificates_response = "{"
"  \"ServerCertificates\": {"
"    \"ServerCertificate\": ["
"      {"
"        \"ServerCertificateId\": \"ServerCertificateId\","
"        \"Fingerprint\": \"Fingerprint\","
"        \"ServerCertificateName\": \"ServerCertificateName\","
"        \"RegionId\": \"RegionId\","
"        \"RegionIdAlias\": \"RegionIdAlias\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_server_certificates() {
  SlbDescribeServerCertificatesRequestType req;
  SlbDescribeServerCertificatesResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_server_certificates_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.server_certificate_id = "ServerCertificateId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeServerCertificates(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_describe_zones_response = "{"
"  \"Zones\": {"
"    \"Zone\": ["
"      {"
"        \"SlaveZones\": {"
"          \"SlaveZone\": ["
"            {"
"              \"ZoneId\": \"ZoneId\","
"              \"LocalName\": \"LocalName\""
"            }"
"          ]"
"        },"
"        \"ZoneId\": \"ZoneId\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_zones() {
  SlbDescribeZonesRequestType req;
  SlbDescribeZonesResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_zones_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = slb->DescribeZones(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_modify_load_balancer_internet_spec_response = "{}";
static int test_modify_load_balancer_internet_spec() {
  SlbModifyLoadBalancerInternetSpecRequestType req;
  SlbModifyLoadBalancerInternetSpecResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_load_balancer_internet_spec_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.internet_charge_type = "InternetChargeType";
  req.bandwidth = "Bandwidth";
  req.owner_account = "OwnerAccount";
  req.master_zone_id = "MasterZoneId";
  req.slave_zone_id = "SlaveZoneId";
  req.max_conn_limit = "MaxConnLimit";
  req.security_status = "SecurityStatus";
  int ret = slb->ModifyLoadBalancerInternetSpec(req, &resp, NULL);
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
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_backend_servers_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.backend_servers = "BackendServers";
  req.owner_account = "OwnerAccount";
  int ret = slb->RemoveBackendServers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_remove_listener_white_list_item_response = "{}";
static int test_remove_listener_white_list_item() {
  SlbRemoveListenerWhiteListItemRequestType req;
  SlbRemoveListenerWhiteListItemResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_listener_white_list_item_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.source_items = "SourceItems";
  req.owner_account = "OwnerAccount";
  int ret = slb->RemoveListenerWhiteListItem(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_backend_servers_response = "{"
"  \"BackendServers\": {"
"    \"BackendServer\": ["
"      {"
"        \"ServerId\": \"ServerId\","
"        \"Weight\": \"Weight\""
"      }"
"    ]"
"  },"
"  \"LoadBalancerId\": \"LoadBalancerId\""
"}";
static int test_set_backend_servers() {
  SlbSetBackendServersRequestType req;
  SlbSetBackendServersResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_backend_servers_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.backend_servers = "BackendServers";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetBackendServers(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_listener_access_control_status_response = "{}";
static int test_set_listener_access_control_status() {
  SlbSetListenerAccessControlStatusRequestType req;
  SlbSetListenerAccessControlStatusResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_listener_access_control_status_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.access_control_status = "AccessControlStatus";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetListenerAccessControlStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_ht_tp_listener_attribute_response = "{}";
static int test_set_load_balancer_ht_tp_listener_attribute() {
  SlbSetLoadBalancerHTTPListenerAttributeRequestType req;
  SlbSetLoadBalancerHTTPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_ht_tp_listener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.bandwidth = "Bandwidth";
  req.xforwarded_for = "XForwardedFor";
  req.scheduler = "Scheduler";
  req.sticky_session = "StickySession";
  req.sticky_session_type = "StickySessionType";
  req.cookie_timeout = "CookieTimeout";
  req.cookie = "Cookie";
  req.health_check = "HealthCheck";
  req.health_check_domain = "HealthCheckDomain";
  req.health_check_ur_i = "HealthCheckURI";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_timeout = "HealthCheckTimeout";
  req.health_check_interval = "HealthCheckInterval";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_http_code = "HealthCheckHttpCode";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerHTTPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_ht_tp_slistener_attribute_response = "{}";
static int test_set_load_balancer_ht_tp_slistener_attribute() {
  SlbSetLoadBalancerHTTPSListenerAttributeRequestType req;
  SlbSetLoadBalancerHTTPSListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_ht_tp_slistener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.bandwidth = "Bandwidth";
  req.xforwarded_for = "XForwardedFor";
  req.scheduler = "Scheduler";
  req.sticky_session = "StickySession";
  req.sticky_session_type = "StickySessionType";
  req.cookie_timeout = "CookieTimeout";
  req.cookie = "Cookie";
  req.health_check = "HealthCheck";
  req.health_check_domain = "HealthCheckDomain";
  req.health_check_ur_i = "HealthCheckURI";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_timeout = "HealthCheckTimeout";
  req.health_check_interval = "HealthCheckInterval";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_http_code = "HealthCheckHttpCode";
  req.server_certificate_id = "ServerCertificateId";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerHTTPSListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_name_response = "{}";
static int test_set_load_balancer_name() {
  SlbSetLoadBalancerNameRequestType req;
  SlbSetLoadBalancerNameResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_name_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.load_balancer_name = "LoadBalancerName";
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
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_status_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.load_balancer_status = "LoadBalancerStatus";
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
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_tc_plistener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.bandwidth = "Bandwidth";
  req.scheduler = "Scheduler";
  req.persistence_timeout = "PersistenceTimeout";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_connect_timeout = "HealthCheckConnectTimeout";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_interval = "HealthCheckInterval";
  req.health_check_domain = "HealthCheckDomain";
  req.health_check_ur_i = "HealthCheckURI";
  req.health_check_http_code = "HealthCheckHttpCode";
  req.health_check_type = "HealthCheckType";
  req.syn_proxy = "SynProxy";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerTCPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_load_balancer_ud_plistener_attribute_response = "{}";
static int test_set_load_balancer_ud_plistener_attribute() {
  SlbSetLoadBalancerUDPListenerAttributeRequestType req;
  SlbSetLoadBalancerUDPListenerAttributeResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_load_balancer_ud_plistener_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.bandwidth = "Bandwidth";
  req.scheduler = "Scheduler";
  req.persistence_timeout = "PersistenceTimeout";
  req.healthy_threshold = "HealthyThreshold";
  req.unhealthy_threshold = "UnhealthyThreshold";
  req.health_check_connect_timeout = "HealthCheckConnectTimeout";
  req.health_check_connect_port = "HealthCheckConnectPort";
  req.health_check_interval = "HealthCheckInterval";
  req.max_conn_limit = "MaxConnLimit";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetLoadBalancerUDPListenerAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_set_server_certificate_name_response = "{}";
static int test_set_server_certificate_name() {
  SlbSetServerCertificateNameRequestType req;
  SlbSetServerCertificateNameResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_set_server_certificate_name_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.server_certificate_id = "ServerCertificateId";
  req.server_certificate_name = "ServerCertificateName";
  req.owner_account = "OwnerAccount";
  int ret = slb->SetServerCertificateName(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_start_load_balancer_listener_response = "{}";
static int test_start_load_balancer_listener() {
  SlbStartLoadBalancerListenerRequestType req;
  SlbStartLoadBalancerListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_start_load_balancer_listener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->StartLoadBalancerListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_stop_load_balancer_listener_response = "{}";
static int test_stop_load_balancer_listener() {
  SlbStopLoadBalancerListenerRequestType req;
  SlbStopLoadBalancerListenerResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_load_balancer_listener_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.load_balancer_id = "LoadBalancerId";
  req.listener_port = "ListenerPort";
  req.owner_account = "OwnerAccount";
  int ret = slb->StopLoadBalancerListener(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
static const char* test_upload_server_certificate_response = "{"
"  \"ServerCertificateId\": \"ServerCertificateId\","
"  \"Fingerprint\": \"Fingerprint\","
"  \"ServerCertificateName\": \"ServerCertificateName\","
"  \"RegionId\": \"RegionId\","
"  \"RegionIdAlias\": \"RegionIdAlias\""
"}";
static int test_upload_server_certificate() {
  SlbUploadServerCertificateRequestType req;
  SlbUploadServerCertificateResponseType resp;
  Slb* slb = Slb::CreateSlbClient("cn-hangzhou", "my_appid", "my_secret");
  if(!slb) return 0;
  slb->SetProxyHost("127.0.0.1:12234");
  slb->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_upload_server_certificate_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.server_certificate = "ServerCertificate";
  req.private_key = "PrivateKey";
  req.server_certificate_name = "ServerCertificateName";
  req.owner_account = "OwnerAccount";
  int ret = slb->UploadServerCertificate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete slb;
}
int main() {
  test_add_backend_servers();
  test_add_listener_white_list_item();
  test_create_load_balancer();
  test_create_load_balancer_ht_tp_listener();
  test_create_load_balancer_ht_tp_slistener();
  test_create_load_balancer_tc_plistener();
  test_create_load_balancer_ud_plistener();
  test_delete_load_balancer();
  test_delete_load_balancer_listener();
  test_delete_server_certificate();
  test_describe_health_status();
  test_describe_listener_access_control_attribute();
  test_describe_load_balancer_attribute();
  test_describe_load_balancer_ht_tp_listener_attribute();
  test_describe_load_balancer_ht_tp_slistener_attribute();
  test_describe_load_balancers();
  test_describe_load_balancer_tc_plistener_attribute();
  test_describe_load_balancer_ud_plistener_attribute();
  test_describe_locations();
  test_describe_regions();
  test_describe_regions4_location();
  test_describe_server_certificate();
  test_describe_server_certificates();
  test_describe_zones();
  test_modify_load_balancer_internet_spec();
  test_remove_backend_servers();
  test_remove_listener_white_list_item();
  test_set_backend_servers();
  test_set_listener_access_control_status();
  test_set_load_balancer_ht_tp_listener_attribute();
  test_set_load_balancer_ht_tp_slistener_attribute();
  test_set_load_balancer_name();
  test_set_load_balancer_status();
  test_set_load_balancer_tc_plistener_attribute();
  test_set_load_balancer_ud_plistener_attribute();
  test_set_server_certificate_name();
  test_start_load_balancer_listener();
  test_stop_load_balancer_listener();
  test_upload_server_certificate();
}
