#include "ali_ess.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_attach_instances_response = "{"
"  \"ScalingActivityId\": \"ScalingActivityId\""
"}";
static int test_attach_instances() {
  EssAttachInstancesRequestType req;
  EssAttachInstancesResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_attach_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.instance_id1 = "InstanceId.1";
  req.instance_id2 = "InstanceId.2";
  req.instance_id3 = "InstanceId.3";
  req.instance_id4 = "InstanceId.4";
  req.instance_id5 = "InstanceId.5";
  req.instance_id6 = "InstanceId.6";
  req.instance_id7 = "InstanceId.7";
  req.instance_id8 = "InstanceId.8";
  req.instance_id9 = "InstanceId.9";
  req.instance_id10 = "InstanceId.10";
  req.instance_id11 = "InstanceId.11";
  req.instance_id12 = "InstanceId.12";
  req.instance_id13 = "InstanceId.13";
  req.instance_id14 = "InstanceId.14";
  req.instance_id15 = "InstanceId.15";
  req.instance_id16 = "InstanceId.16";
  req.instance_id17 = "InstanceId.17";
  req.instance_id18 = "InstanceId.18";
  req.instance_id19 = "InstanceId.19";
  req.instance_id20 = "InstanceId.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->AttachInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_create_scaling_configuration_response = "{"
"  \"ScalingConfigurationId\": \"ScalingConfigurationId\""
"}";
static int test_create_scaling_configuration() {
  EssCreateScalingConfigurationRequestType req;
  EssCreateScalingConfigurationResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_scaling_configuration_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.image_id = "ImageId";
  req.instance_type = "InstanceType";
  req.security_group_id = "SecurityGroupId";
  req.internet_charge_type = "InternetChargeType";
  req.internet_max_bandwidth_in = "InternetMaxBandwidthIn";
  req.internet_max_bandwidth_out = "InternetMaxBandwidthOut";
  req.system_disk_category = "SystemDisk.Category";
  req.scaling_configuration_name = "ScalingConfigurationName";
  req.data_disk1_size = "DataDisk.1.Size";
  req.data_disk2_size = "DataDisk.2.Size";
  req.data_disk3_size = "DataDisk.3.Size";
  req.data_disk4_size = "DataDisk.4.Size";
  req.data_disk1_category = "DataDisk.1.Category";
  req.data_disk2_category = "DataDisk.2.Category";
  req.data_disk3_category = "DataDisk.3.Category";
  req.data_disk4_category = "DataDisk.4.Category";
  req.data_disk1_snapshot_id = "DataDisk.1.SnapshotId";
  req.data_disk2_snapshot_id = "DataDisk.2.SnapshotId";
  req.data_disk3_snapshot_id = "DataDisk.3.SnapshotId";
  req.data_disk4_snapshot_id = "DataDisk.4.SnapshotId";
  req.data_disk1_device = "DataDisk.1.Device";
  req.data_disk2_device = "DataDisk.2.Device";
  req.data_disk3_device = "DataDisk.3.Device";
  req.data_disk4_device = "DataDisk.4.Device";
  req.data_disk1_delete_with_instance = "DataDisk.1.DeleteWithInstance";
  req.data_disk2_delete_with_instance = "DataDisk.2.DeleteWithInstance";
  req.data_disk3_delete_with_instance = "DataDisk.3.DeleteWithInstance";
  req.data_disk4_delete_with_instance = "DataDisk.4.DeleteWithInstance";
  req.owner_account = "OwnerAccount";
  int ret = ess->CreateScalingConfiguration(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_create_scaling_group_response = "{"
"  \"ScalingGroupId\": \"ScalingGroupId\""
"}";
static int test_create_scaling_group() {
  EssCreateScalingGroupRequestType req;
  EssCreateScalingGroupResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_scaling_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_name = "ScalingGroupName";
  req.min_size = "MinSize";
  req.max_size = "MaxSize";
  req.default_cooldown = "DefaultCooldown";
  req.load_balancer_id = "LoadBalancerId";
  req.db_instance_id1 = "DBInstanceId.1";
  req.db_instance_id2 = "DBInstanceId.2";
  req.db_instance_id3 = "DBInstanceId.3";
  req.removal_policy1 = "RemovalPolicy.1";
  req.removal_policy2 = "RemovalPolicy.2";
  req.owner_account = "OwnerAccount";
  int ret = ess->CreateScalingGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_create_scaling_rule_response = "{"
"  \"ScalingRuleId\": \"ScalingRuleId\","
"  \"ScalingRuleAri\": \"ScalingRuleAri\""
"}";
static int test_create_scaling_rule() {
  EssCreateScalingRuleRequestType req;
  EssCreateScalingRuleResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_scaling_rule_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.scaling_rule_name = "ScalingRuleName";
  req.cooldown = "Cooldown";
  req.adjustment_type = "AdjustmentType";
  req.adjustment_value = "AdjustmentValue";
  req.owner_account = "OwnerAccount";
  int ret = ess->CreateScalingRule(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_create_scheduled_task_response = "{"
"  \"ScheduledTaskId\": \"ScheduledTaskId\""
"}";
static int test_create_scheduled_task() {
  EssCreateScheduledTaskRequestType req;
  EssCreateScheduledTaskResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_scheduled_task_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scheduled_task_name = "ScheduledTaskName";
  req.description = "Description";
  req.scheduled_action = "ScheduledAction";
  req.recurrence_end_time = "RecurrenceEndTime";
  req.launch_time = "LaunchTime";
  req.recurrence_type = "RecurrenceType";
  req.recurrence_value = "RecurrenceValue";
  req.task_enabled = "TaskEnabled";
  req.launch_expiration_time = "LaunchExpirationTime";
  req.owner_account = "OwnerAccount";
  int ret = ess->CreateScheduledTask(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_delete_scaling_configuration_response = "{}";
static int test_delete_scaling_configuration() {
  EssDeleteScalingConfigurationRequestType req;
  EssDeleteScalingConfigurationResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_scaling_configuration_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_configuration_id = "ScalingConfigurationId";
  req.owner_account = "OwnerAccount";
  int ret = ess->DeleteScalingConfiguration(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_delete_scaling_group_response = "{}";
static int test_delete_scaling_group() {
  EssDeleteScalingGroupRequestType req;
  EssDeleteScalingGroupResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_scaling_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.force_delete = "ForceDelete";
  req.owner_account = "OwnerAccount";
  int ret = ess->DeleteScalingGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_delete_scaling_rule_response = "{}";
static int test_delete_scaling_rule() {
  EssDeleteScalingRuleRequestType req;
  EssDeleteScalingRuleResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_scaling_rule_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_rule_id = "ScalingRuleId";
  req.owner_account = "OwnerAccount";
  int ret = ess->DeleteScalingRule(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_delete_scheduled_task_response = "{}";
static int test_delete_scheduled_task() {
  EssDeleteScheduledTaskRequestType req;
  EssDeleteScheduledTaskResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_scheduled_task_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scheduled_task_id = "ScheduledTaskId";
  req.owner_account = "OwnerAccount";
  int ret = ess->DeleteScheduledTask(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_describe_scaling_activities_response = "{"
"  \"ScalingActivities\": {"
"    \"ScalingActivity\": ["
"      {"
"        \"ScalingActivityId\": \"ScalingActivityId\","
"        \"ScalingGroupId\": \"ScalingGroupId\","
"        \"Description\": \"Description\","
"        \"Cause\": \"Cause\","
"        \"StartTime\": \"StartTime\","
"        \"EndTime\": \"EndTime\","
"        \"Progress\": 0,"
"        \"StatusCode\": \"StatusCode\","
"        \"StatusMessage\": \"StatusMessage\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_scaling_activities() {
  EssDescribeScalingActivitiesRequestType req;
  EssDescribeScalingActivitiesResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_scaling_activities_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.scaling_group_id = "ScalingGroupId";
  req.status_code = "StatusCode";
  req.scaling_activity_id1 = "ScalingActivityId.1";
  req.scaling_activity_id2 = "ScalingActivityId.2";
  req.scaling_activity_id3 = "ScalingActivityId.3";
  req.scaling_activity_id4 = "ScalingActivityId.4";
  req.scaling_activity_id5 = "ScalingActivityId.5";
  req.scaling_activity_id6 = "ScalingActivityId.6";
  req.scaling_activity_id7 = "ScalingActivityId.7";
  req.scaling_activity_id8 = "ScalingActivityId.8";
  req.scaling_activity_id9 = "ScalingActivityId.9";
  req.scaling_activity_id10 = "ScalingActivityId.10";
  req.scaling_activity_id11 = "ScalingActivityId.11";
  req.scaling_activity_id12 = "ScalingActivityId.12";
  req.scaling_activity_id13 = "ScalingActivityId.13";
  req.scaling_activity_id14 = "ScalingActivityId.14";
  req.scaling_activity_id15 = "ScalingActivityId.15";
  req.scaling_activity_id16 = "ScalingActivityId.16";
  req.scaling_activity_id17 = "ScalingActivityId.17";
  req.scaling_activity_id18 = "ScalingActivityId.18";
  req.scaling_activity_id19 = "ScalingActivityId.19";
  req.scaling_activity_id20 = "ScalingActivityId.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->DescribeScalingActivities(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_describe_scaling_configurations_response = "{"
"  \"ScalingConfigurations\": {"
"    \"ScalingConfiguration\": ["
"      {"
"        \"DataDisks\": {"
"          \"DataDisk\": ["
"            {"
"              \"Size\": 0,"
"              \"Category\": \"Category\","
"              \"SnapshotId\": \"SnapshotId\","
"              \"Device\": \"Device\""
"            }"
"          ]"
"        },"
"        \"ScalingConfigurationId\": \"ScalingConfigurationId\","
"        \"ScalingConfigurationName\": \"ScalingConfigurationName\","
"        \"ScalingGroupId\": \"ScalingGroupId\","
"        \"ImageId\": \"ImageId\","
"        \"InstanceType\": \"InstanceType\","
"        \"SecurityGroupId\": \"SecurityGroupId\","
"        \"InternetChargeType\": \"InternetChargeType\","
"        \"InternetMaxBandwidthIn\": 0,"
"        \"InternetMaxBandwidthOut\": 0,"
"        \"SystemDiskCategory\": \"SystemDiskCategory\","
"        \"LifecycleState\": \"LifecycleState\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_scaling_configurations() {
  EssDescribeScalingConfigurationsRequestType req;
  EssDescribeScalingConfigurationsResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_scaling_configurations_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.scaling_group_id = "ScalingGroupId";
  req.scaling_configuration_id1 = "ScalingConfigurationId.1";
  req.scaling_configuration_id2 = "ScalingConfigurationId.2";
  req.scaling_configuration_id3 = "ScalingConfigurationId.3";
  req.scaling_configuration_id4 = "ScalingConfigurationId.4";
  req.scaling_configuration_id5 = "ScalingConfigurationId.5";
  req.scaling_configuration_id6 = "ScalingConfigurationId.6";
  req.scaling_configuration_id7 = "ScalingConfigurationId.7";
  req.scaling_configuration_id8 = "ScalingConfigurationId.8";
  req.scaling_configuration_id9 = "ScalingConfigurationId.9";
  req.scaling_configuration_id10 = "ScalingConfigurationId.10";
  req.scaling_configuration_name1 = "ScalingConfigurationName.1";
  req.scaling_configuration_name2 = "ScalingConfigurationName.2";
  req.scaling_configuration_name3 = "ScalingConfigurationName.3";
  req.scaling_configuration_name4 = "ScalingConfigurationName.4";
  req.scaling_configuration_name5 = "ScalingConfigurationName.5";
  req.scaling_configuration_name6 = "ScalingConfigurationName.6";
  req.scaling_configuration_name7 = "ScalingConfigurationName.7";
  req.scaling_configuration_name8 = "ScalingConfigurationName.8";
  req.scaling_configuration_name9 = "ScalingConfigurationName.9";
  req.scaling_configuration_name10 = "ScalingConfigurationName.10";
  req.owner_account = "OwnerAccount";
  int ret = ess->DescribeScalingConfigurations(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_describe_scaling_groups_response = "{"
"  \"ScalingGroups\": {"
"    \"ScalingGroup\": ["
"      {"
"        \"RemovalPolicies\": {"
"          \"RemovalPolicy\": ["
"            \"RemovalPolicy\""
"          ]"
"        },"
"        \"DBInstanceIds\": {"
"          \"DBInstanceId\": ["
"            \"DBInstanceId\""
"          ]"
"        },"
"        \"DefaultCooldown\": 0,"
"        \"MaxSize\": 0,"
"        \"PendingCapacity\": 0,"
"        \"LoadBalancerId\": \"LoadBalancerId\","
"        \"RemovingCapacity\": 0,"
"        \"ScalingGroupName\": \"ScalingGroupName\","
"        \"ActiveCapacity\": 0,"
"        \"ActiveScalingConfigurationId\": \"ActiveScalingConfigurationId\","
"        \"ScalingGroupId\": \"ScalingGroupId\","
"        \"RegionId\": \"RegionId\","
"        \"TotalCapacity\": 0,"
"        \"MinSize\": 0,"
"        \"LifecycleState\": \"LifecycleState\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_scaling_groups() {
  EssDescribeScalingGroupsRequestType req;
  EssDescribeScalingGroupsResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_scaling_groups_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.scaling_group_id1 = "ScalingGroupId.1";
  req.scaling_group_id2 = "ScalingGroupId.2";
  req.scaling_group_id3 = "ScalingGroupId.3";
  req.scaling_group_id4 = "ScalingGroupId.4";
  req.scaling_group_id5 = "ScalingGroupId.5";
  req.scaling_group_id6 = "ScalingGroupId.6";
  req.scaling_group_id7 = "ScalingGroupId.7";
  req.scaling_group_id8 = "ScalingGroupId.8";
  req.scaling_group_id9 = "ScalingGroupId.9";
  req.scaling_group_id10 = "ScalingGroupId.10";
  req.scaling_group_id12 = "ScalingGroupId.12";
  req.scaling_group_id13 = "ScalingGroupId.13";
  req.scaling_group_id14 = "ScalingGroupId.14";
  req.scaling_group_id15 = "ScalingGroupId.15";
  req.scaling_group_id16 = "ScalingGroupId.16";
  req.scaling_group_id17 = "ScalingGroupId.17";
  req.scaling_group_id18 = "ScalingGroupId.18";
  req.scaling_group_id19 = "ScalingGroupId.19";
  req.scaling_group_id20 = "ScalingGroupId.20";
  req.scaling_group_name1 = "ScalingGroupName.1";
  req.scaling_group_name2 = "ScalingGroupName.2";
  req.scaling_group_name3 = "ScalingGroupName.3";
  req.scaling_group_name4 = "ScalingGroupName.4";
  req.scaling_group_name5 = "ScalingGroupName.5";
  req.scaling_group_name6 = "ScalingGroupName.6";
  req.scaling_group_name7 = "ScalingGroupName.7";
  req.scaling_group_name8 = "ScalingGroupName.8";
  req.scaling_group_name9 = "ScalingGroupName.9";
  req.scaling_group_name10 = "ScalingGroupName.10";
  req.scaling_group_name11 = "ScalingGroupName.11";
  req.scaling_group_name12 = "ScalingGroupName.12";
  req.scaling_group_name13 = "ScalingGroupName.13";
  req.scaling_group_name14 = "ScalingGroupName.14";
  req.scaling_group_name15 = "ScalingGroupName.15";
  req.scaling_group_name16 = "ScalingGroupName.16";
  req.scaling_group_name17 = "ScalingGroupName.17";
  req.scaling_group_name18 = "ScalingGroupName.18";
  req.scaling_group_name19 = "ScalingGroupName.19";
  req.scaling_group_name20 = "ScalingGroupName.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->DescribeScalingGroups(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_describe_scaling_instances_response = "{"
"  \"ScalingInstances\": {"
"    \"ScalingInstance\": ["
"      {"
"        \"InstanceId\": \"InstanceId\","
"        \"ScalingConfigurationId\": \"ScalingConfigurationId\","
"        \"ScalingGroupId\": \"ScalingGroupId\","
"        \"HealthStatus\": \"HealthStatus\","
"        \"LifecycleState\": \"LifecycleState\","
"        \"CreationTime\": \"CreationTime\","
"        \"CreationType\": \"CreationType\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_scaling_instances() {
  EssDescribeScalingInstancesRequestType req;
  EssDescribeScalingInstancesResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_scaling_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.scaling_configuration_id = "ScalingConfigurationId";
  req.health_status = "HealthStatus";
  req.lifecycle_state = "LifecycleState";
  req.creation_type = "CreationType";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.instance_id1 = "InstanceId.1";
  req.instance_id2 = "InstanceId.2";
  req.instance_id3 = "InstanceId.3";
  req.instance_id4 = "InstanceId.4";
  req.instance_id5 = "InstanceId.5";
  req.instance_id6 = "InstanceId.6";
  req.instance_id7 = "InstanceId.7";
  req.instance_id8 = "InstanceId.8";
  req.instance_id9 = "InstanceId.9";
  req.instance_id10 = "InstanceId.10";
  req.instance_id11 = "InstanceId.11";
  req.instance_id12 = "InstanceId.12";
  req.instance_id13 = "InstanceId.13";
  req.instance_id14 = "InstanceId.14";
  req.instance_id15 = "InstanceId.15";
  req.instance_id16 = "InstanceId.16";
  req.instance_id17 = "InstanceId.17";
  req.instance_id18 = "InstanceId.18";
  req.instance_id19 = "InstanceId.19";
  req.instance_id20 = "InstanceId.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->DescribeScalingInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_describe_scaling_rules_response = "{"
"  \"ScalingRules\": {"
"    \"ScalingRule\": ["
"      {"
"        \"ScalingRuleId\": \"ScalingRuleId\","
"        \"ScalingGroupId\": \"ScalingGroupId\","
"        \"ScalingRuleName\": \"ScalingRuleName\","
"        \"Cooldown\": 0,"
"        \"AdjustmentType\": \"AdjustmentType\","
"        \"AdjustmentValue\": 0,"
"        \"MinSize\": 0,"
"        \"MaxSize\": 0,"
"        \"ScalingRuleAri\": \"ScalingRuleAri\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_scaling_rules() {
  EssDescribeScalingRulesRequestType req;
  EssDescribeScalingRulesResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_scaling_rules_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.scaling_group_id = "ScalingGroupId";
  req.scaling_rule_id1 = "ScalingRuleId.1";
  req.scaling_rule_id2 = "ScalingRuleId.2";
  req.scaling_rule_id3 = "ScalingRuleId.3";
  req.scaling_rule_id4 = "ScalingRuleId.4";
  req.scaling_rule_id5 = "ScalingRuleId.5";
  req.scaling_rule_id6 = "ScalingRuleId.6";
  req.scaling_rule_id7 = "ScalingRuleId.7";
  req.scaling_rule_id8 = "ScalingRuleId.8";
  req.scaling_rule_id9 = "ScalingRuleId.9";
  req.scaling_rule_id10 = "ScalingRuleId.10";
  req.scaling_rule_name1 = "ScalingRuleName.1";
  req.scaling_rule_name2 = "ScalingRuleName.2";
  req.scaling_rule_name3 = "ScalingRuleName.3";
  req.scaling_rule_name4 = "ScalingRuleName.4";
  req.scaling_rule_name5 = "ScalingRuleName.5";
  req.scaling_rule_name6 = "ScalingRuleName.6";
  req.scaling_rule_name7 = "ScalingRuleName.7";
  req.scaling_rule_name8 = "ScalingRuleName.8";
  req.scaling_rule_name9 = "ScalingRuleName.9";
  req.scaling_rule_name10 = "ScalingRuleName.10";
  req.scaling_rule_ari1 = "ScalingRuleAri.1";
  req.scaling_rule_ari2 = "ScalingRuleAri.2";
  req.scaling_rule_ari3 = "ScalingRuleAri.3";
  req.scaling_rule_ari4 = "ScalingRuleAri.4";
  req.scaling_rule_ari5 = "ScalingRuleAri.5";
  req.scaling_rule_ari6 = "ScalingRuleAri.6";
  req.scaling_rule_ari7 = "ScalingRuleAri.7";
  req.scaling_rule_ari8 = "ScalingRuleAri.8";
  req.scaling_rule_ari9 = "ScalingRuleAri.9";
  req.scaling_rule_ari10 = "ScalingRuleAri.10";
  req.owner_account = "OwnerAccount";
  int ret = ess->DescribeScalingRules(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_describe_scheduled_tasks_response = "{"
"  \"ScheduledTasks\": {"
"    \"ScheduledTask\": ["
"      {"
"        \"ScheduledTaskId\": \"ScheduledTaskId\","
"        \"ScheduledTaskName\": \"ScheduledTaskName\","
"        \"Description\": \"Description\","
"        \"ScheduledAction\": \"ScheduledAction\","
"        \"RecurrenceEndTime\": \"RecurrenceEndTime\","
"        \"LaunchTime\": \"LaunchTime\","
"        \"RecurrenceType\": \"RecurrenceType\","
"        \"RecurrenceValue\": \"RecurrenceValue\","
"        \"LaunchExpirationTime\": 0,"
"        \"TaskEnabled\": 0"
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_describe_scheduled_tasks() {
  EssDescribeScheduledTasksRequestType req;
  EssDescribeScheduledTasksResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_scheduled_tasks_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  req.scheduled_action1 = "ScheduledAction.1";
  req.scheduled_action2 = "ScheduledAction.2";
  req.scheduled_action3 = "ScheduledAction.3";
  req.scheduled_action4 = "ScheduledAction.4";
  req.scheduled_action5 = "ScheduledAction.5";
  req.scheduled_action6 = "ScheduledAction.6";
  req.scheduled_action7 = "ScheduledAction.7";
  req.scheduled_action8 = "ScheduledAction.8";
  req.scheduled_action9 = "ScheduledAction.9";
  req.scheduled_action10 = "ScheduledAction.10";
  req.scheduled_action11 = "ScheduledAction.11";
  req.scheduled_action12 = "ScheduledAction.12";
  req.scheduled_action13 = "ScheduledAction.13";
  req.scheduled_action14 = "ScheduledAction.14";
  req.scheduled_action15 = "ScheduledAction.15";
  req.scheduled_action16 = "ScheduledAction.16";
  req.scheduled_action17 = "ScheduledAction.17";
  req.scheduled_action18 = "ScheduledAction.18";
  req.scheduled_action19 = "ScheduledAction.19";
  req.scheduled_action20 = "ScheduledAction.20";
  req.scheduled_task_id1 = "ScheduledTaskId.1";
  req.scheduled_task_id2 = "ScheduledTaskId.2";
  req.scheduled_task_id3 = "ScheduledTaskId.3";
  req.scheduled_task_id4 = "ScheduledTaskId.4";
  req.scheduled_task_id5 = "ScheduledTaskId.5";
  req.scheduled_task_id6 = "ScheduledTaskId.6";
  req.scheduled_task_id7 = "ScheduledTaskId.7";
  req.scheduled_task_id8 = "ScheduledTaskId.8";
  req.scheduled_task_id9 = "ScheduledTaskId.9";
  req.scheduled_task_id10 = "ScheduledTaskId.10";
  req.scheduled_task_id11 = "ScheduledTaskId.11";
  req.scheduled_task_id12 = "ScheduledTaskId.12";
  req.scheduled_task_id13 = "ScheduledTaskId.13";
  req.scheduled_task_id14 = "ScheduledTaskId.14";
  req.scheduled_task_id15 = "ScheduledTaskId.15";
  req.scheduled_task_id16 = "ScheduledTaskId.16";
  req.scheduled_task_id17 = "ScheduledTaskId.17";
  req.scheduled_task_id18 = "ScheduledTaskId.18";
  req.scheduled_task_id19 = "ScheduledTaskId.19";
  req.scheduled_task_id20 = "ScheduledTaskId.20";
  req.scheduled_task_name1 = "ScheduledTaskName.1";
  req.scheduled_task_name2 = "ScheduledTaskName.2";
  req.scheduled_task_name3 = "ScheduledTaskName.3";
  req.scheduled_task_name4 = "ScheduledTaskName.4";
  req.scheduled_task_name5 = "ScheduledTaskName.5";
  req.scheduled_task_name6 = "ScheduledTaskName.6";
  req.scheduled_task_name7 = "ScheduledTaskName.7";
  req.scheduled_task_name8 = "ScheduledTaskName.8";
  req.scheduled_task_name9 = "ScheduledTaskName.9";
  req.scheduled_task_name10 = "ScheduledTaskName.10";
  req.scheduled_task_name11 = "ScheduledTaskName.11";
  req.scheduled_task_name12 = "ScheduledTaskName.12";
  req.scheduled_task_name13 = "ScheduledTaskName.13";
  req.scheduled_task_name14 = "ScheduledTaskName.14";
  req.scheduled_task_name15 = "ScheduledTaskName.15";
  req.scheduled_task_name16 = "ScheduledTaskName.16";
  req.scheduled_task_name17 = "ScheduledTaskName.17";
  req.scheduled_task_name18 = "ScheduledTaskName.18";
  req.scheduled_task_name19 = "ScheduledTaskName.19";
  req.scheduled_task_name20 = "ScheduledTaskName.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->DescribeScheduledTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_detach_instances_response = "{"
"  \"ScalingActivityId\": \"ScalingActivityId\""
"}";
static int test_detach_instances() {
  EssDetachInstancesRequestType req;
  EssDetachInstancesResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_detach_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.instance_id1 = "InstanceId.1";
  req.instance_id2 = "InstanceId.2";
  req.instance_id3 = "InstanceId.3";
  req.instance_id4 = "InstanceId.4";
  req.instance_id5 = "InstanceId.5";
  req.instance_id6 = "InstanceId.6";
  req.instance_id7 = "InstanceId.7";
  req.instance_id8 = "InstanceId.8";
  req.instance_id9 = "InstanceId.9";
  req.instance_id10 = "InstanceId.10";
  req.instance_id11 = "InstanceId.11";
  req.instance_id12 = "InstanceId.12";
  req.instance_id13 = "InstanceId.13";
  req.instance_id14 = "InstanceId.14";
  req.instance_id15 = "InstanceId.15";
  req.instance_id16 = "InstanceId.16";
  req.instance_id17 = "InstanceId.17";
  req.instance_id18 = "InstanceId.18";
  req.instance_id19 = "InstanceId.19";
  req.instance_id20 = "InstanceId.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->DetachInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_disable_scaling_group_response = "{}";
static int test_disable_scaling_group() {
  EssDisableScalingGroupRequestType req;
  EssDisableScalingGroupResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_disable_scaling_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.owner_account = "OwnerAccount";
  int ret = ess->DisableScalingGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_enable_scaling_group_response = "{}";
static int test_enable_scaling_group() {
  EssEnableScalingGroupRequestType req;
  EssEnableScalingGroupResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_enable_scaling_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.active_scaling_configuration_id = "ActiveScalingConfigurationId";
  req.instance_id1 = "InstanceId.1";
  req.instance_id2 = "InstanceId.2";
  req.instance_id3 = "InstanceId.3";
  req.instance_id4 = "InstanceId.4";
  req.instance_id5 = "InstanceId.5";
  req.instance_id6 = "InstanceId.6";
  req.instance_id7 = "InstanceId.7";
  req.instance_id8 = "InstanceId.8";
  req.instance_id9 = "InstanceId.9";
  req.instance_id10 = "InstanceId.10";
  req.instance_id11 = "InstanceId.11";
  req.instance_id12 = "InstanceId.12";
  req.instance_id13 = "InstanceId.13";
  req.instance_id14 = "InstanceId.14";
  req.instance_id15 = "InstanceId.15";
  req.instance_id16 = "InstanceId.16";
  req.instance_id17 = "InstanceId.17";
  req.instance_id18 = "InstanceId.18";
  req.instance_id19 = "InstanceId.19";
  req.instance_id20 = "InstanceId.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->EnableScalingGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_execute_scaling_rule_response = "{"
"  \"ScalingActivityId\": \"ScalingActivityId\""
"}";
static int test_execute_scaling_rule() {
  EssExecuteScalingRuleRequestType req;
  EssExecuteScalingRuleResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_execute_scaling_rule_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_rule_ari = "ScalingRuleAri";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = ess->ExecuteScalingRule(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_modify_scaling_group_response = "{}";
static int test_modify_scaling_group() {
  EssModifyScalingGroupRequestType req;
  EssModifyScalingGroupResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_scaling_group_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.scaling_group_name = "ScalingGroupName";
  req.min_size = "MinSize";
  req.max_size = "MaxSize";
  req.default_cooldown = "DefaultCooldown";
  req.removal_policy1 = "RemovalPolicy.1";
  req.removal_policy2 = "RemovalPolicy.2";
  req.active_scaling_configuration_id = "ActiveScalingConfigurationId";
  req.owner_account = "OwnerAccount";
  int ret = ess->ModifyScalingGroup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_modify_scaling_rule_response = "{}";
static int test_modify_scaling_rule() {
  EssModifyScalingRuleRequestType req;
  EssModifyScalingRuleResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_scaling_rule_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_rule_id = "ScalingRuleId";
  req.scaling_rule_name = "ScalingRuleName";
  req.cooldown = "Cooldown";
  req.adjustment_type = "AdjustmentType";
  req.adjustment_value = "AdjustmentValue";
  req.owner_account = "OwnerAccount";
  int ret = ess->ModifyScalingRule(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_modify_scheduled_task_response = "{}";
static int test_modify_scheduled_task() {
  EssModifyScheduledTaskRequestType req;
  EssModifyScheduledTaskResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_scheduled_task_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scheduled_task_id = "ScheduledTaskId";
  req.scheduled_task_name = "ScheduledTaskName";
  req.description = "Description";
  req.scheduled_action = "ScheduledAction";
  req.recurrence_end_time = "RecurrenceEndTime";
  req.launch_time = "LaunchTime";
  req.recurrence_type = "RecurrenceType";
  req.recurrence_value = "RecurrenceValue";
  req.task_enabled = "TaskEnabled";
  req.launch_expiration_time = "LaunchExpirationTime";
  req.owner_account = "OwnerAccount";
  int ret = ess->ModifyScheduledTask(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
static const char* test_remove_instances_response = "{"
"  \"ScalingActivityId\": \"ScalingActivityId\""
"}";
static int test_remove_instances() {
  EssRemoveInstancesRequestType req;
  EssRemoveInstancesResponseType resp;
  Ess* ess = Ess::CreateEssClient("cn-hangzhou", "my_appid", "my_secret");
  if(!ess) return 0;
  ess->SetProxyHost("127.0.0.1:12234");
  ess->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.scaling_group_id = "ScalingGroupId";
  req.instance_id1 = "InstanceId.1";
  req.instance_id2 = "InstanceId.2";
  req.instance_id3 = "InstanceId.3";
  req.instance_id4 = "InstanceId.4";
  req.instance_id5 = "InstanceId.5";
  req.instance_id6 = "InstanceId.6";
  req.instance_id7 = "InstanceId.7";
  req.instance_id8 = "InstanceId.8";
  req.instance_id9 = "InstanceId.9";
  req.instance_id10 = "InstanceId.10";
  req.instance_id11 = "InstanceId.11";
  req.instance_id12 = "InstanceId.12";
  req.instance_id13 = "InstanceId.13";
  req.instance_id14 = "InstanceId.14";
  req.instance_id15 = "InstanceId.15";
  req.instance_id16 = "InstanceId.16";
  req.instance_id17 = "InstanceId.17";
  req.instance_id18 = "InstanceId.18";
  req.instance_id19 = "InstanceId.19";
  req.instance_id20 = "InstanceId.20";
  req.owner_account = "OwnerAccount";
  int ret = ess->RemoveInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete ess;
}
int main() {
  test_attach_instances();
  test_create_scaling_configuration();
  test_create_scaling_group();
  test_create_scaling_rule();
  test_create_scheduled_task();
  test_delete_scaling_configuration();
  test_delete_scaling_group();
  test_delete_scaling_rule();
  test_delete_scheduled_task();
  test_describe_scaling_activities();
  test_describe_scaling_configurations();
  test_describe_scaling_groups();
  test_describe_scaling_instances();
  test_describe_scaling_rules();
  test_describe_scheduled_tasks();
  test_detach_instances();
  test_disable_scaling_group();
  test_enable_scaling_group();
  test_execute_scaling_rule();
  test_modify_scaling_group();
  test_modify_scaling_rule();
  test_modify_scheduled_task();
  test_remove_instances();
}
