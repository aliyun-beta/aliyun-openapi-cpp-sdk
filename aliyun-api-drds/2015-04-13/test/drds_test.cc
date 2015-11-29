#include "ali_drds.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_alter_table_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_alter_table() {
  DrdsAlterTableRequestType req;
  DrdsAlterTableResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_alter_table_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.ddl_sql = "DdlSql";
  int ret = drds->AlterTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_cancel_dd_ltask_response = "{}";
static int test_cancel_dd_ltask() {
  DrdsCancelDDLTaskRequestType req;
  DrdsCancelDDLTaskResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_cancel_dd_ltask_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.task_id = "TaskId";
  int ret = drds->CancelDDLTask(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_create_drds_db_response = "{"
"  \"Success\": true"
"}";
static int test_create_drds_db() {
  DrdsCreateDrdsDBRequestType req;
  DrdsCreateDrdsDBResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_drds_db_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.encode = "Encode";
  req.password = "Password";
  req.rds_instances = "RdsInstances";
  int ret = drds->CreateDrdsDB(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_create_drds_instance_response = "{"
"  \"Data\": {"
"    \"DrdsInstanceIdList\": {"
"      \"DrdsInstanceId\": ["
"        \"DrdsInstanceId\""
"      ]"
"    },"
"    \"OrderId\": 0"
"  },"
"  \"Success\": true"
"}";
static int test_create_drds_instance() {
  DrdsCreateDrdsInstanceRequestType req;
  DrdsCreateDrdsInstanceResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_drds_instance_response);
  listener->Start();
  req.description = "Description";
  req.zone_id = "ZoneId";
  req.type = "Type";
  req.quantity = "Quantity";
  req.specification = "Specification";
  req.pay_type = "PayType";
  req.vpc_id = "VpcId";
  req.vswitch_id = "VswitchId";
  int ret = drds->CreateDrdsInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_create_index_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_create_index() {
  DrdsCreateIndexRequestType req;
  DrdsCreateIndexResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_index_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.ddl_sql = "DdlSql";
  int ret = drds->CreateIndex(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_create_table_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_create_table() {
  DrdsCreateTableRequestType req;
  DrdsCreateTableResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_table_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.ddl_sql = "DdlSql";
  req.shard_type = "ShardType";
  req.shard_key = "ShardKey";
  req.allow_full_table_scan = "AllowFullTableScan";
  int ret = drds->CreateTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_delete_drds_db_response = "{"
"  \"Success\": true"
"}";
static int test_delete_drds_db() {
  DrdsDeleteDrdsDBRequestType req;
  DrdsDeleteDrdsDBResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_drds_db_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  int ret = drds->DeleteDrdsDB(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_create_drds_instance_status_response = "{"
"  \"Data\": {"
"    \"Status\": \"Status\""
"  },"
"  \"Success\": true"
"}";
static int test_describe_create_drds_instance_status() {
  DrdsDescribeCreateDrdsInstanceStatusRequestType req;
  DrdsDescribeCreateDrdsInstanceStatusResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_create_drds_instance_status_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  int ret = drds->DescribeCreateDrdsInstanceStatus(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_dd_ltask_response = "{"
"  \"Data\": {"
"    \"RequestId\": \"RequestId\","
"    \"TargetId\": \"TargetId\","
"    \"TaskDetail\": \"TaskDetail\","
"    \"TaskStatus\": 0,"
"    \"TaskPhase\": \"TaskPhase\","
"    \"TaskType\": 0,"
"    \"TaskName\": \"TaskName\","
"    \"GmtCreate\": 0,"
"    \"AllowCancel\": \"AllowCancel\","
"    \"ErrMsg\": \"ErrMsg\""
"  }"
"}";
static int test_describe_dd_ltask() {
  DrdsDescribeDDLTaskRequestType req;
  DrdsDescribeDDLTaskResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_dd_ltask_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.task_id = "TaskId";
  int ret = drds->DescribeDDLTask(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_drds_db_response = "{"
"  \"Data\": {"
"    \"DbName\": \"DbName\","
"    \"Status\": 0,"
"    \"CreateTime\": \"CreateTime\","
"    \"Msg\": \"Msg\","
"    \"Mode\": \"Mode\""
"  },"
"  \"Success\": true"
"}";
static int test_describe_drds_db() {
  DrdsDescribeDrdsDBRequestType req;
  DrdsDescribeDrdsDBResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_drds_db_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  int ret = drds->DescribeDrdsDB(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_drds_db_ip_white_list_response = "{"
"  \"Data\": {"
"    \"IpWhiteList\": {"
"      \"Ip\": ["
"        \"Ip\""
"      ]"
"    }"
"  },"
"  \"Success\": true"
"}";
static int test_describe_drds_db_ip_white_list() {
  DrdsDescribeDrdsDBIpWhiteListRequestType req;
  DrdsDescribeDrdsDBIpWhiteListResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_drds_db_ip_white_list_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  int ret = drds->DescribeDrdsDBIpWhiteList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_drds_dbs_response = "{"
"  \"Data\": {"
"    \"Db\": ["
"      {"
"        \"DbName\": \"DbName\","
"        \"Status\": 0,"
"        \"CreateTime\": \"CreateTime\","
"        \"Msg\": \"Msg\","
"        \"Mode\": \"Mode\""
"      }"
"    ]"
"  },"
"  \"Success\": true"
"}";
static int test_describe_drds_dbs() {
  DrdsDescribeDrdsDBsRequestType req;
  DrdsDescribeDrdsDBsResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_drds_dbs_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  int ret = drds->DescribeDrdsDBs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_drds_instance_response = "{"
"  \"Data\": {"
"    \"Vips\": {"
"      \"Vip\": ["
"        {"
"          \"IP\": \"IP\","
"          \"Port\": \"Port\","
"          \"Type\": \"Type\""
"        }"
"      ]"
"    },"
"    \"DrdsInstanceId\": \"DrdsInstanceId\","
"    \"Type\": \"Type\","
"    \"RegionId\": \"RegionId\","
"    \"ZoneId\": \"ZoneId\","
"    \"Description\": \"Description\","
"    \"NetworkType\": \"NetworkType\","
"    \"Status\": \"Status\","
"    \"CreateTime\": 0,"
"    \"Version\": 0"
"  },"
"  \"Success\": true"
"}";
static int test_describe_drds_instance() {
  DrdsDescribeDrdsInstanceRequestType req;
  DrdsDescribeDrdsInstanceResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_drds_instance_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  int ret = drds->DescribeDrdsInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_describe_drds_instances_response = "{"
"  \"Data\": {"
"    \"Instance\": ["
"      {"
"        \"Vips\": {"
"          \"Vip\": ["
"            {"
"              \"IP\": \"IP\","
"              \"Port\": \"Port\","
"              \"Type\": \"Type\""
"            }"
"          ]"
"        },"
"        \"DrdsInstanceId\": \"DrdsInstanceId\","
"        \"Type\": \"Type\","
"        \"RegionId\": \"RegionId\","
"        \"ZoneId\": \"ZoneId\","
"        \"Description\": \"Description\","
"        \"NetworkType\": \"NetworkType\","
"        \"Status\": \"Status\","
"        \"CreateTime\": 0,"
"        \"Version\": 0"
"      }"
"    ]"
"  },"
"  \"Success\": true"
"}";
static int test_describe_drds_instances() {
  DrdsDescribeDrdsInstancesRequestType req;
  DrdsDescribeDrdsInstancesResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_drds_instances_response);
  listener->Start();
  req.type = "Type";
  int ret = drds->DescribeDrdsInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_drop_indexes_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_drop_indexes() {
  DrdsDropIndexesRequestType req;
  DrdsDropIndexesResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_drop_indexes_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.table = "Table";
  req.indexes = "Indexes";
  int ret = drds->DropIndexes(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_drop_tables_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_drop_tables() {
  DrdsDropTablesRequestType req;
  DrdsDropTablesResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_drop_tables_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.tables = "Tables";
  int ret = drds->DropTables(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_list_un_complete_tasks_response = "{"
"  \"Data\": {"
"    \"task\": ["
"      {"
"        \"RequestId\": \"RequestId\","
"        \"TargetId\": \"TargetId\","
"        \"TaskDetail\": \"TaskDetail\","
"        \"taskStatus\": 0,"
"        \"TaskPhase\": \"TaskPhase\","
"        \"TaskType\": 0,"
"        \"TaskName\": \"TaskName\","
"        \"gmtCreate\": 0,"
"        \"AllowCancel\": \"AllowCancel\","
"        \"ErrMsg\": \"ErrMsg\""
"      }"
"    ]"
"  }"
"}";
static int test_list_un_complete_tasks() {
  DrdsListUnCompleteTasksRequestType req;
  DrdsListUnCompleteTasksResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_un_complete_tasks_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  int ret = drds->ListUnCompleteTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_modify_drds_db_passwd_response = "{"
"  \"Success\": true"
"}";
static int test_modify_drds_db_passwd() {
  DrdsModifyDrdsDBPasswdRequestType req;
  DrdsModifyDrdsDBPasswdResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_drds_db_passwd_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.new_passwd = "NewPasswd";
  int ret = drds->ModifyDrdsDBPasswd(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_modify_drds_instance_description_response = "{"
"  \"Success\": true"
"}";
static int test_modify_drds_instance_description() {
  DrdsModifyDrdsInstanceDescriptionRequestType req;
  DrdsModifyDrdsInstanceDescriptionResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_drds_instance_description_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.description = "Description";
  int ret = drds->ModifyDrdsInstanceDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_modify_drds_ip_white_list_response = "{"
"  \"Success\": true"
"}";
static int test_modify_drds_ip_white_list() {
  DrdsModifyDrdsIpWhiteListRequestType req;
  DrdsModifyDrdsIpWhiteListResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_drds_ip_white_list_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  req.db_name = "DbName";
  req.ip_white_list = "IpWhiteList";
  req.mode = "Mode";
  int ret = drds->ModifyDrdsIpWhiteList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
static const char* test_remove_drds_instance_response = "{"
"  \"Success\": true"
"}";
static int test_remove_drds_instance() {
  DrdsRemoveDrdsInstanceRequestType req;
  DrdsRemoveDrdsInstanceResponseType resp;
  Drds* drds = Drds::CreateDrdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!drds) return 0;
  drds->SetProxyHost("127.0.0.1:12234");
  drds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_drds_instance_response);
  listener->Start();
  req.drds_instance_id = "DrdsInstanceId";
  int ret = drds->RemoveDrdsInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete drds;
}
int main() {
  test_alter_table();
  test_cancel_dd_ltask();
  test_create_drds_db();
  test_create_drds_instance();
  test_create_index();
  test_create_table();
  test_delete_drds_db();
  test_describe_create_drds_instance_status();
  test_describe_dd_ltask();
  test_describe_drds_db();
  test_describe_drds_db_ip_white_list();
  test_describe_drds_dbs();
  test_describe_drds_instance();
  test_describe_drds_instances();
  test_drop_indexes();
  test_drop_tables();
  test_list_un_complete_tasks();
  test_modify_drds_db_passwd();
  test_modify_drds_instance_description();
  test_modify_drds_ip_white_list();
  test_remove_drds_instance();
}
