#include "ali_ocs.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_activate_instance_response = "{}";
static int test_activate_instance() {
  OcsActivateInstanceRequestType req;
  OcsActivateInstanceResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_activate_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = ocs->ActivateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_add_authentic_ip_response = "{}";
static int test_add_authentic_ip() {
  OcsAddAuthenticIPRequestType req;
  OcsAddAuthenticIPResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_authentic_ip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.authentic_ip = "AuthenticIP";
  int ret = ocs->AddAuthenticIP(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_create_instance_response = "{"
"  \"InstanceId\": \"InstanceId\","
"  \"InstanceName\": \"InstanceName\","
"  \"ConnectionDomain\": \"ConnectionDomain\","
"  \"Port\": 0,"
"  \"UserName\": \"UserName\","
"  \"InstanceStatus\": \"InstanceStatus\","
"  \"RegionId\": \"RegionId\","
"  \"ZoneId\": \"ZoneId\","
"  \"Capacity\": 0,"
"  \"QPS\": 0,"
"  \"Bandwidth\": 0,"
"  \"Connections\": 0,"
"  \"NetworkType\": \"NetworkType\","
"  \"PrivateIpAddress\": \"PrivateIpAddress\""
"}";
static int test_create_instance() {
  OcsCreateInstanceRequestType req;
  OcsCreateInstanceResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.password = "Password";
  req.capacity = "Capacity";
  req.instance_name = "InstanceName";
  req.zone_id = "ZoneId";
  req.network_type = "NetworkType";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VSwitchId";
  req.private_ip_address = "PrivateIpAddress";
  req.token = "Token";
  int ret = ocs->CreateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_data_operate_response = "{"
"  \"CommandResult\": \"CommandResult\""
"}";
static int test_data_operate() {
  OcsDataOperateRequestType req;
  OcsDataOperateResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_data_operate_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.command = "Command";
  int ret = ocs->DataOperate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_deactivate_instance_response = "{}";
static int test_deactivate_instance() {
  OcsDeactivateInstanceRequestType req;
  OcsDeactivateInstanceResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_deactivate_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = ocs->DeactivateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_delete_instance_response = "{}";
static int test_delete_instance() {
  OcsDeleteInstanceRequestType req;
  OcsDeleteInstanceResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = ocs->DeleteInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_authentic_ip_response = "{"
"  \"AuthenticIPs\": \"AuthenticIPs\""
"}";
static int test_describe_authentic_ip() {
  OcsDescribeAuthenticIPRequestType req;
  OcsDescribeAuthenticIPResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_authentic_ip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = ocs->DescribeAuthenticIP(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_history_monitor_values_response = "{"
"  \"MonitorHistory\": \"MonitorHistory\""
"}";
static int test_describe_history_monitor_values() {
  OcsDescribeHistoryMonitorValuesRequestType req;
  OcsDescribeHistoryMonitorValuesResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_history_monitor_values_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.monitor_keys = "MonitorKeys";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.interval_for_history = "IntervalForHistory";
  int ret = ocs->DescribeHistoryMonitorValues(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_instances_response = "{"
"  \"Instances\": {"
"    \"OcsInstance\": ["
"      {"
"        \"InstanceId\": \"InstanceId\","
"        \"InstanceName\": \"InstanceName\","
"        \"ConnectionDomain\": \"ConnectionDomain\","
"        \"Port\": 0,"
"        \"UserName\": \"UserName\","
"        \"InstanceStatus\": \"InstanceStatus\","
"        \"Capacity\": 0,"
"        \"QPS\": 0,"
"        \"Bandwidth\": 0,"
"        \"Connections\": 0,"
"        \"RegionId\": \"RegionId\","
"        \"ZoneId\": \"ZoneId\","
"        \"NetworkType\": \"NetworkType\","
"        \"VpcId\": \"VpcId\","
"        \"VSwitchId\": \"VSwitchId\","
"        \"PrivateIpAddress\": \"PrivateIpAddress\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_instances() {
  OcsDescribeInstancesRequestType req;
  OcsDescribeInstancesResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_ids = "InstanceIds";
  req.instance_status = "InstanceStatus";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.network_type = "NetworkType";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VSwitchId";
  req.private_ip_addresses = "PrivateIpAddresses";
  int ret = ocs->DescribeInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_monitor_items_response = "{"
"  \"MonitorItems\": {"
"    \"OcsMonitorItem\": ["
"      {"
"        \"MonitorKey\": \"MonitorKey\","
"        \"Unit\": \"Unit\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_monitor_items() {
  OcsDescribeMonitorItemsRequestType req;
  OcsDescribeMonitorItemsResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_monitor_items_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = ocs->DescribeMonitorItems(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_monitor_values_response = "{"
"  \"InstanceIds\": {"
"    \"OcsInstanceMonitor\": ["
"      {"
"        \"MonitorKeys\": {"
"          \"OcsMonitorKey\": ["
"            {"
"              \"MonitorKey\": \"MonitorKey\","
"              \"Value\": \"Value\","
"              \"Unit\": \"Unit\""
"            }"
"          ]"
"        },"
"        \"InstanceId\": \"InstanceId\""
"      }"
"    ]"
"  },"
"  \"Date\": \"Date\""
"}";
static int test_describe_monitor_values() {
  OcsDescribeMonitorValuesRequestType req;
  OcsDescribeMonitorValuesResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_monitor_values_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_ids = "InstanceIds";
  req.monitor_keys = "MonitorKeys";
  int ret = ocs->DescribeMonitorValues(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_regions_response = "{"
"  \"RegionIds\": {"
"    \"OcsRegion\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"ZoneIds\": \"ZoneIds\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions() {
  OcsDescribeRegionsRequestType req;
  OcsDescribeRegionsResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = ocs->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_security_ips_response = "{"
"  \"SecurityIps\": \"SecurityIps\""
"}";
static int test_describe_security_ips() {
  OcsDescribeSecurityIpsRequestType req;
  OcsDescribeSecurityIpsResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_security_ips_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = ocs->DescribeSecurityIps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_describe_zones_response = "{"
"  \"Zones\": {"
"    \"OcsZone\": ["
"      {"
"        \"ZoneId\": \"ZoneId\","
"        \"Name\": \"Name\","
"        \"Description\": \"Description\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_zones() {
  OcsDescribeZonesRequestType req;
  OcsDescribeZonesResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_zones_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.zone_id = "ZoneId";
  int ret = ocs->DescribeZones(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_flush_instance_response = "{}";
static int test_flush_instance() {
  OcsFlushInstanceRequestType req;
  OcsFlushInstanceResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_flush_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = ocs->FlushInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_modify_instance_attribute_response = "{}";
static int test_modify_instance_attribute() {
  OcsModifyInstanceAttributeRequestType req;
  OcsModifyInstanceAttributeResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.instance_name = "InstanceName";
  req.new_password = "NewPassword";
  int ret = ocs->ModifyInstanceAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_modify_instance_capacity_response = "{}";
static int test_modify_instance_capacity() {
  OcsModifyInstanceCapacityRequestType req;
  OcsModifyInstanceCapacityResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_capacity_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.capacity = "Capacity";
  int ret = ocs->ModifyInstanceCapacity(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_modify_security_ips_response = "{}";
static int test_modify_security_ips() {
  OcsModifySecurityIpsRequestType req;
  OcsModifySecurityIpsResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_security_ips_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.security_ips = "SecurityIps";
  int ret = ocs->ModifySecurityIps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_remove_authentic_ip_response = "{}";
static int test_remove_authentic_ip() {
  OcsRemoveAuthenticIPRequestType req;
  OcsRemoveAuthenticIPResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_authentic_ip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.authentic_ip = "AuthenticIP";
  int ret = ocs->RemoveAuthenticIP(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_replace_authentic_ip_response = "{}";
static int test_replace_authentic_ip() {
  OcsReplaceAuthenticIPRequestType req;
  OcsReplaceAuthenticIPResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_replace_authentic_ip_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.old_authentic_ip = "OldAuthenticIP";
  req.new_authentic_ip = "NewAuthenticIP";
  int ret = ocs->ReplaceAuthenticIP(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
static const char* test_verify_password_response = "{"
"  \"Result\": 0"
"}";
static int test_verify_password() {
  OcsVerifyPasswordRequestType req;
  OcsVerifyPasswordResponseType resp;
  Ocs* ocs = Ocs::CreateOcsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ocs) return 0;
  ocs->SetProxyHost("127.0.0.1:12234");
  ocs->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_verify_password_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.password = "Password";
  int ret = ocs->VerifyPassword(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ocs;
}
int main() {
  test_activate_instance();
  test_add_authentic_ip();
  test_create_instance();
  test_data_operate();
  test_deactivate_instance();
  test_delete_instance();
  test_describe_authentic_ip();
  test_describe_history_monitor_values();
  test_describe_instances();
  test_describe_monitor_items();
  test_describe_monitor_values();
  test_describe_regions();
  test_describe_security_ips();
  test_describe_zones();
  test_flush_instance();
  test_modify_instance_attribute();
  test_modify_instance_capacity();
  test_modify_security_ips();
  test_remove_authentic_ip();
  test_replace_authentic_ip();
  test_verify_password();
}
