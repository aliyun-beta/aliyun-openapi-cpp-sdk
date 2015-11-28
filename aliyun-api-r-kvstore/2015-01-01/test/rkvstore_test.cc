#include "ali_rkvstore.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_activate_instance_response = "{}";
static int test_activate_instance() {
  RkvstoreActivateInstanceRequestType req;
  RkvstoreActivateInstanceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_activate_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = rkvstore->ActivateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_create_instance_response = "{"
"  \"InstanceId\": \"InstanceId\","
"  \"InstanceName\": \"InstanceName\","
"  \"ConnectionDomain\": \"ConnectionDomain\","
"  \"Port\": 0,"
"  \"UserName\": \"UserName\","
"  \"InstanceStatus\": \"InstanceStatus\","
"  \"RegionId\": \"RegionId\","
"  \"Capacity\": 0,"
"  \"QPS\": 0,"
"  \"Bandwidth\": 0,"
"  \"Connections\": 0,"
"  \"ZoneId\": \"ZoneId\","
"  \"Config\": \"Config\","
"  \"ChargeType\": \"ChargeType\","
"  \"EndTime\": \"EndTime\""
"}";
static int test_create_instance() {
  RkvstoreCreateInstanceRequestType req;
  RkvstoreCreateInstanceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_name = "InstanceName";
  req.password = "Password";
  req.capacity = "Capacity";
  req.zone_id = "ZoneId";
  req.config = "Config";
  req.charge_type = "ChargeType";
  req.period = "Period";
  req.token = "Token";
  int ret = rkvstore->CreateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_create_instances_response = "{"
"  \"OrderId\": \"OrderId\""
"}";
static int test_create_instances() {
  RkvstoreCreateInstancesRequestType req;
  RkvstoreCreateInstancesResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instances = "Instances";
  req.token = "Token";
  req.auto_pay = "AutoPay";
  int ret = rkvstore->CreateInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_data_operate_response = "{"
"  \"CommandResult\": \"CommandResult\""
"}";
static int test_data_operate() {
  RkvstoreDataOperateRequestType req;
  RkvstoreDataOperateResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_data_operate_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.command = "Command";
  int ret = rkvstore->DataOperate(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_deactivate_instance_response = "{}";
static int test_deactivate_instance() {
  RkvstoreDeactivateInstanceRequestType req;
  RkvstoreDeactivateInstanceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_deactivate_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = rkvstore->DeactivateInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_delete_instance_response = "{}";
static int test_delete_instance() {
  RkvstoreDeleteInstanceRequestType req;
  RkvstoreDeleteInstanceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = rkvstore->DeleteInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_commodity_response = "{"
"  \"Commodity\": \"Commodity\""
"}";
static int test_describe_commodity() {
  RkvstoreDescribeCommodityRequestType req;
  RkvstoreDescribeCommodityResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_commodity_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.commodity_code = "CommodityCode";
  req.instance_id = "InstanceId";
  req.order_type = "OrderType";
  int ret = rkvstore->DescribeCommodity(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_connection_domain_response = "{"
"  \"InstanceId\": \"InstanceId\""
"}";
static int test_describe_connection_domain() {
  RkvstoreDescribeConnectionDomainRequestType req;
  RkvstoreDescribeConnectionDomainResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_connection_domain_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.connection_domain = "ConnectionDomain";
  int ret = rkvstore->DescribeConnectionDomain(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_history_monitor_values_response = "{"
"  \"MonitorHistory\": \"MonitorHistory\""
"}";
static int test_describe_history_monitor_values() {
  RkvstoreDescribeHistoryMonitorValuesRequestType req;
  RkvstoreDescribeHistoryMonitorValuesResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_history_monitor_values_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.interval_for_history = "IntervalForHistory";
  req.monitor_keys = "MonitorKeys";
  int ret = rkvstore->DescribeHistoryMonitorValues(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_instance_config_response = "{"
"  \"Config\": \"Config\""
"}";
static int test_describe_instance_config() {
  RkvstoreDescribeInstanceConfigRequestType req;
  RkvstoreDescribeInstanceConfigResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_config_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = rkvstore->DescribeInstanceConfig(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_instance_count_response = "{"
"  \"InstancesCount\": 0"
"}";
static int test_describe_instance_count() {
  RkvstoreDescribeInstanceCountRequestType req;
  RkvstoreDescribeInstanceCountResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instance_count_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = rkvstore->DescribeInstanceCount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_instances_response = "{"
"  \"Instances\": {"
"    \"KVStoreInstance\": ["
"      {"
"        \"InstanceId\": \"InstanceId\","
"        \"InstanceName\": \"InstanceName\","
"        \"ConnectionDomain\": \"ConnectionDomain\","
"        \"Port\": 0,"
"        \"UserName\": \"UserName\","
"        \"InstanceStatus\": \"InstanceStatus\","
"        \"RegionId\": \"RegionId\","
"        \"Capacity\": 0,"
"        \"QPS\": 0,"
"        \"Bandwidth\": 0,"
"        \"Connections\": 0,"
"        \"ZoneId\": \"ZoneId\","
"        \"Config\": \"Config\","
"        \"ChargeType\": \"ChargeType\","
"        \"CreateTime\": \"CreateTime\","
"        \"EndTime\": \"EndTime\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0,"
"  \"TotalCount\": 0"
"}";
static int test_describe_instances() {
  RkvstoreDescribeInstancesRequestType req;
  RkvstoreDescribeInstancesResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_ids = "InstanceIds";
  req.instance_status = "InstanceStatus";
  req.charge_type = "ChargeType";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = rkvstore->DescribeInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_monitor_items_response = "{"
"  \"MonitorItems\": {"
"    \"KVStoreMonitorItem\": ["
"      {"
"        \"MonitorKey\": \"MonitorKey\","
"        \"Unit\": \"Unit\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_monitor_items() {
  RkvstoreDescribeMonitorItemsRequestType req;
  RkvstoreDescribeMonitorItemsResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_monitor_items_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = rkvstore->DescribeMonitorItems(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_monitor_values_response = "{"
"  \"InstanceIds\": {"
"    \"KVStoreInstanceMonitor\": ["
"      {"
"        \"MonitorKeys\": {"
"          \"KVStoreMonitorKey\": ["
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
  RkvstoreDescribeMonitorValuesRequestType req;
  RkvstoreDescribeMonitorValuesResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_monitor_values_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_ids = "InstanceIds";
  req.monitor_keys = "MonitorKeys";
  int ret = rkvstore->DescribeMonitorValues(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_price_response = "{"
"  \"Rules\": {"
"    \"Rule\": ["
"      {"
"        \"RuleDescId\": 0,"
"        \"Name\": \"Name\","
"        \"Title\": \"Title\""
"      }"
"    ]"
"  },"
"  \"Order\": {"
"    \"RuleIds\": {"
"      \"RuleId\": ["
"        \"RuleId\""
"      ]"
"    },"
"    \"OriginalAmount\": 0,"
"    \"TradeAmount\": 0,"
"    \"DiscountAmount\": 0"
"  }"
"}";
static int test_describe_price() {
  RkvstoreDescribePriceRequestType req;
  RkvstoreDescribePriceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_price_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.capacity = "Capacity";
  req.order_type = "OrderType";
  req.zone_id = "ZoneId";
  req.charge_type = "ChargeType";
  req.period = "Period";
  req.quantity = "Quantity";
  req.instance_id = "InstanceId";
  int ret = rkvstore->DescribePrice(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_regions_response = "{"
"  \"RegionIds\": {"
"    \"KVStoreRegion\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"ZoneIds\": \"ZoneIds\","
"        \"LocalName\": \"LocalName\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions() {
  RkvstoreDescribeRegionsRequestType req;
  RkvstoreDescribeRegionsResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = rkvstore->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_describe_user_info_response = "{"
"  \"AlreadyHasResourceNum\": {"
"    \"EcsBought\": 0,"
"    \"KVSBought\": 0"
"  },"
"  \"IsAuthentication\": 0,"
"  \"IsFinance\": 0,"
"  \"BalanceAmount\": 0"
"}";
static int test_describe_user_info() {
  RkvstoreDescribeUserInfoRequestType req;
  RkvstoreDescribeUserInfoResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_user_info_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  int ret = rkvstore->DescribeUserInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_flush_instance_response = "{}";
static int test_flush_instance() {
  RkvstoreFlushInstanceRequestType req;
  RkvstoreFlushInstanceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_flush_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  int ret = rkvstore->FlushInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_modify_instance_attribute_response = "{}";
static int test_modify_instance_attribute() {
  RkvstoreModifyInstanceAttributeRequestType req;
  RkvstoreModifyInstanceAttributeResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
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
  int ret = rkvstore->ModifyInstanceAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_modify_instance_capacity_response = "{"
"  \"OrderId\": \"OrderId\""
"}";
static int test_modify_instance_capacity() {
  RkvstoreModifyInstanceCapacityRequestType req;
  RkvstoreModifyInstanceCapacityResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_capacity_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.capacity = "Capacity";
  int ret = rkvstore->ModifyInstanceCapacity(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_modify_instance_config_response = "{}";
static int test_modify_instance_config() {
  RkvstoreModifyInstanceConfigRequestType req;
  RkvstoreModifyInstanceConfigResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_instance_config_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.config = "Config";
  int ret = rkvstore->ModifyInstanceConfig(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_renew_instance_response = "{"
"  \"OrderId\": \"OrderId\","
"  \"EndTime\": \"EndTime\""
"}";
static int test_renew_instance() {
  RkvstoreRenewInstanceRequestType req;
  RkvstoreRenewInstanceResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_renew_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.capacity = "Capacity";
  req.period = "Period";
  req.auto_pay = "AutoPay";
  int ret = rkvstore->RenewInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_transform_to_pre_paid_response = "{"
"  \"OrderId\": \"OrderId\","
"  \"EndTime\": \"EndTime\""
"}";
static int test_transform_to_pre_paid() {
  RkvstoreTransformToPrePaidRequestType req;
  RkvstoreTransformToPrePaidResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_transform_to_pre_paid_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.period = "Period";
  req.auto_pay = "AutoPay";
  int ret = rkvstore->TransformToPrePaid(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
static const char* test_verify_password_response = "{}";
static int test_verify_password() {
  RkvstoreVerifyPasswordRequestType req;
  RkvstoreVerifyPasswordResponseType resp;
  Rkvstore* rkvstore = Rkvstore::CreateRkvstoreClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rkvstore->SetProxyHost("127.0.0.1:12234");
  rkvstore->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_verify_password_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.owner_account = "OwnerAccount";
  req.instance_id = "InstanceId";
  req.password = "Password";
  int ret = rkvstore->VerifyPassword(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rkvstore;
}
int main() {
  test_activate_instance();
  test_create_instance();
  test_create_instances();
  test_data_operate();
  test_deactivate_instance();
  test_delete_instance();
  test_describe_commodity();
  test_describe_connection_domain();
  test_describe_history_monitor_values();
  test_describe_instance_config();
  test_describe_instance_count();
  test_describe_instances();
  test_describe_monitor_items();
  test_describe_monitor_values();
  test_describe_price();
  test_describe_regions();
  test_describe_user_info();
  test_flush_instance();
  test_modify_instance_attribute();
  test_modify_instance_capacity();
  test_modify_instance_config();
  test_renew_instance();
  test_transform_to_pre_paid();
  test_verify_password();
}
