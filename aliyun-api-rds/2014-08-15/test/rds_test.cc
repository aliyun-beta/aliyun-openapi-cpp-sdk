#include "ali_rds.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_tags_to_resource_response = "{}";
static int test_add_tags_to_resource() {
  RdsAddTagsToResourceRequestType req;
  RdsAddTagsToResourceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_add_tags_to_resource_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.db_instance_id = "DBInstanceId";
  req.tag1key = "Tag.1.key";
  req.tag2key = "Tag.2.key";
  req.tag3key = "Tag.3.key";
  req.tag4key = "Tag.4.key";
  req.tag5key = "Tag.5.key";
  req.tag1value = "Tag.1.value";
  req.tag2value = "Tag.2.value";
  req.tag3value = "Tag.3.value";
  req.tag4value = "Tag.4.value";
  req.tag5value = "Tag.5.value";
  req.owner_account = "OwnerAccount";
  int ret = rds->AddTagsToResource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_allocate_instance_private_connection_response = "{}";
static int test_allocate_instance_private_connection() {
  RdsAllocateInstancePrivateConnectionRequestType req;
  RdsAllocateInstancePrivateConnectionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_allocate_instance_private_connection_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.connection_string_prefix = "ConnectionStringPrefix";
  req.port = "Port";
  req.owner_account = "OwnerAccount";
  int ret = rds->AllocateInstancePrivateConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_allocate_instance_public_connection_response = "{}";
static int test_allocate_instance_public_connection() {
  RdsAllocateInstancePublicConnectionRequestType req;
  RdsAllocateInstancePublicConnectionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_allocate_instance_public_connection_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.connection_string_prefix = "ConnectionStringPrefix";
  req.port = "Port";
  req.owner_account = "OwnerAccount";
  int ret = rds->AllocateInstancePublicConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_batch_grant_account_privilege_response = "{}";
static int test_batch_grant_account_privilege() {
  RdsBatchGrantAccountPrivilegeRequestType req;
  RdsBatchGrantAccountPrivilegeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_grant_account_privilege_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.db_name = "DBName";
  req.account_privilege = "AccountPrivilege";
  req.owner_account = "OwnerAccount";
  int ret = rds->BatchGrantAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_batch_revoke_account_privilege_response = "{}";
static int test_batch_revoke_account_privilege() {
  RdsBatchRevokeAccountPrivilegeRequestType req;
  RdsBatchRevokeAccountPrivilegeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_batch_revoke_account_privilege_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rds->BatchRevokeAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_cancel_import_response = "{}";
static int test_cancel_import() {
  RdsCancelImportRequestType req;
  RdsCancelImportResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_cancel_import_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.import_id = "ImportId";
  req.owner_account = "OwnerAccount";
  int ret = rds->CancelImport(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_check_account_name_available_response = "{}";
static int test_check_account_name_available() {
  RdsCheckAccountNameAvailableRequestType req;
  RdsCheckAccountNameAvailableResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_check_account_name_available_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.owner_account = "OwnerAccount";
  int ret = rds->CheckAccountNameAvailable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_check_db_name_available_response = "{}";
static int test_check_db_name_available() {
  RdsCheckDBNameAvailableRequestType req;
  RdsCheckDBNameAvailableResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_check_db_name_available_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rds->CheckDBNameAvailable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_account_response = "{}";
static int test_create_account() {
  RdsCreateAccountRequestType req;
  RdsCreateAccountResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_account_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.account_password = "AccountPassword";
  req.account_description = "AccountDescription";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_account_for_inner_response = "{}";
static int test_create_account_for_inner() {
  RdsCreateAccountForInnerRequestType req;
  RdsCreateAccountForInnerResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_account_for_inner_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.account_password = "AccountPassword";
  req.db_name = "DBName";
  req.account_privilege = "AccountPrivilege";
  req.account_description = "AccountDescription";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateAccountForInner(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_backup_response = "{}";
static int test_create_backup() {
  RdsCreateBackupRequestType req;
  RdsCreateBackupResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_backup_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.backup_method = "BackupMethod";
  req.backup_type = "BackupType";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateBackup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_database_response = "{}";
static int test_create_database() {
  RdsCreateDatabaseRequestType req;
  RdsCreateDatabaseResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_database_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.character_set_name = "CharacterSetName";
  req.db_description = "DBDescription";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_database_for_inner_response = "{}";
static int test_create_database_for_inner() {
  RdsCreateDatabaseForInnerRequestType req;
  RdsCreateDatabaseForInnerResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_database_for_inner_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.character_set_name = "CharacterSetName";
  req.db_description = "DBDescription";
  req.account_name = "AccountName";
  req.account_privilege = "AccountPrivilege";
  req.account_password = "AccountPassword";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateDatabaseForInner(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_db_instance_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_db_instance() {
  RdsCreateDBInstanceRequestType req;
  RdsCreateDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.engine = "Engine";
  req.engine_version = "EngineVersion";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.system_db_charset = "SystemDBCharset";
  req.db_instance_net_type = "DBInstanceNetType";
  req.db_instance_description = "DBInstanceDescription";
  req.security_ip_list = "SecurityIPList";
  req.pay_type = "PayType";
  req.zone_id = "ZoneId";
  req.instance_network_type = "InstanceNetworkType";
  req.connection_mode = "ConnectionMode";
  req.vp_cid = "VPCId";
  req.vswitch_id = "VSwitchId";
  req.private_ip_address = "PrivateIpAddress";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_db_instance_for_channel_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_db_instance_for_channel() {
  RdsCreateDBInstanceForChannelRequestType req;
  RdsCreateDBInstanceForChannelResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_db_instance_for_channel_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.system_db_charset = "SystemDBCharset";
  req.engine = "Engine";
  req.engine_version = "EngineVersion";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.db_instance_net_type = "DBInstanceNetType";
  req.db_instance_description = "DBInstanceDescription";
  req.security_ip_list = "SecurityIPList";
  req.account_name = "AccountName";
  req.account_password = "AccountPassword";
  req.pay_type = "PayType";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateDBInstanceForChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_db_instancefor_first_pay_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_db_instancefor_first_pay() {
  RdsCreateDBInstanceforFirstPayRequestType req;
  RdsCreateDBInstanceforFirstPayResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_db_instancefor_first_pay_response);
  listener->Start();
  req.uid = "uid";
  req.bid = "bid";
  req.uid_login_email = "uidLoginEmail";
  req.bid_login_email = "bidLoginEmail";
  req.engine = "Engine";
  req.engine_version = "EngineVersion";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.db_instance_net_type = "DBInstanceNetType";
  req.character_set_name = "CharacterSetName";
  req.db_instance_remarks = "DBInstanceRemarks";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateDBInstanceforFirstPay(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_postpaid_db_instance_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_postpaid_db_instance() {
  RdsCreatePostpaidDBInstanceRequestType req;
  RdsCreatePostpaidDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_postpaid_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.engine = "Engine";
  req.engine_version = "EngineVersion";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.db_instance_net_type = "DBInstanceNetType";
  req.db_instance_description = "DBInstanceDescription";
  req.security_ip_list = "SecurityIPList";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreatePostpaidDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_postpaid_db_instance_for_channel_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_postpaid_db_instance_for_channel() {
  RdsCreatePostpaidDBInstanceForChannelRequestType req;
  RdsCreatePostpaidDBInstanceForChannelResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_postpaid_db_instance_for_channel_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.engine = "Engine";
  req.engine_version = "EngineVersion";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.db_instance_net_type = "DBInstanceNetType";
  req.db_instance_description = "DBInstanceDescription";
  req.security_ip_list = "SecurityIPList";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreatePostpaidDBInstanceForChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_read_only_db_instance_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_read_only_db_instance() {
  RdsCreateReadOnlyDBInstanceRequestType req;
  RdsCreateReadOnlyDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_read_only_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.zone_id = "ZoneId";
  req.db_instance_id = "DBInstanceId";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.engine_version = "EngineVersion";
  req.pay_type = "PayType";
  req.db_instance_description = "DBInstanceDescription";
  req.instance_network_type = "InstanceNetworkType";
  req.vp_cid = "VPCId";
  req.vswitch_id = "VSwitchId";
  req.private_ip_address = "PrivateIpAddress";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateReadOnlyDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_temp_db_instance_response = "{"
"  \"TempDBInstanceId\": \"TempDBInstanceId\""
"}";
static int test_create_temp_db_instance() {
  RdsCreateTempDBInstanceRequestType req;
  RdsCreateTempDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_temp_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.backup_id = "BackupId";
  req.restore_time = "RestoreTime";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateTempDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_create_upload_path_for_sq_lserver_response = "{"
"  \"InternetFtpServer\": \"InternetFtpServer\","
"  \"InternetPort\": 0,"
"  \"IntranetFtpserver\": \"IntranetFtpserver\","
"  \"Intranetport\": 0,"
"  \"UserName\": \"UserName\","
"  \"Password\": \"Password\","
"  \"FileName\": \"FileName\""
"}";
static int test_create_upload_path_for_sq_lserver() {
  RdsCreateUploadPathForSQLServerRequestType req;
  RdsCreateUploadPathForSQLServerResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_upload_path_for_sq_lserver_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rds->CreateUploadPathForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_delete_account_response = "{}";
static int test_delete_account() {
  RdsDeleteAccountRequestType req;
  RdsDeleteAccountResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_account_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.owner_account = "OwnerAccount";
  int ret = rds->DeleteAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_delete_database_response = "{}";
static int test_delete_database() {
  RdsDeleteDatabaseRequestType req;
  RdsDeleteDatabaseResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_database_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rds->DeleteDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_delete_db_instance_response = "{}";
static int test_delete_db_instance() {
  RdsDeleteDBInstanceRequestType req;
  RdsDeleteDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DeleteDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_descibe_imports_from_database_response = "{"
"  \"Items\": {"
"    \"ImportResultFromDB\": ["
"      {"
"        \"ImportId\": 0,"
"        \"ImportDataType\": \"ImportDataType\","
"        \"ImportDataStatus\": \"ImportDataStatus\","
"        \"ImportDataStatusDescription\": \"ImportDataStatusDescription\","
"        \"IncrementalImportingTime\": \"IncrementalImportingTime\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_descibe_imports_from_database() {
  RdsDescibeImportsFromDatabaseRequestType req;
  RdsDescibeImportsFromDatabaseResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_descibe_imports_from_database_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.engine = "Engine";
  req.import_id = "ImportId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescibeImportsFromDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_abnormal_db_instances_response = "{"
"  \"Items\": {"
"    \"InstanceResult\": ["
"      {"
"        \"AbnormalItems\": {"
"          \"AbnormalItem\": ["
"            {"
"              \"AdviseValue\": {"
"                \"String\": ["
"                  \"String\""
"                ]"
"              },"
"              \"CheckTime\": \"CheckTime\","
"              \"CheckItem\": \"CheckItem\","
"              \"AbnormalReason\": \"AbnormalReason\","
"              \"AbnormalValue\": \"AbnormalValue\","
"              \"AbnormalDetail\": \"AbnormalDetail\","
"              \"AdviceKey\": \"AdviceKey\""
"            }"
"          ]"
"        },"
"        \"DBInstanceDescription\": \"DBInstanceDescription\","
"        \"DBInstanceId\": \"DBInstanceId\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_abnormal_db_instances() {
  RdsDescribeAbnormalDBInstancesRequestType req;
  RdsDescribeAbnormalDBInstancesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_abnormal_db_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeAbnormalDBInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_accounts_response = "{"
"  \"Accounts\": {"
"    \"DBInstanceAccount\": ["
"      {"
"        \"DatabasePrivileges\": {"
"          \"DatabasePrivilege\": ["
"            {"
"              \"DBName\": \"DBName\","
"              \"AccountPrivilege\": \"AccountPrivilege\""
"            }"
"          ]"
"        },"
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"AccountName\": \"AccountName\","
"        \"AccountStatus\": \"AccountStatus\","
"        \"AccountDescription\": \"AccountDescription\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_accounts() {
  RdsDescribeAccountsRequestType req;
  RdsDescribeAccountsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_accounts_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeAccounts(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_backup_policy_response = "{"
"  \"BackupRetentionPeriod\": 0,"
"  \"PreferredNextBackupTime\": \"PreferredNextBackupTime\","
"  \"PreferredBackupTime\": \"PreferredBackupTime\","
"  \"PreferredBackupPeriod\": \"PreferredBackupPeriod\""
"}";
static int test_describe_backup_policy() {
  RdsDescribeBackupPolicyRequestType req;
  RdsDescribeBackupPolicyResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_backup_policy_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeBackupPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_backups_response = "{"
"  \"Items\": {"
"    \"Backup\": ["
"      {"
"        \"BackupId\": \"BackupId\","
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"BackupStatus\": \"BackupStatus\","
"        \"BackupStartTime\": \"BackupStartTime\","
"        \"BackupEndTime\": \"BackupEndTime\","
"        \"BackupType\": \"BackupType\","
"        \"BackupMode\": \"BackupMode\","
"        \"BackupMethod\": \"BackupMethod\","
"        \"BackupDownloadURL\": \"BackupDownloadURL\","
"        \"BackupLocation\": \"BackupLocation\","
"        \"BackupExtractionStatus\": \"BackupExtractionStatus\","
"        \"BackupScale\": \"BackupScale\","
"        \"BackupDBNames\": \"BackupDBNames\","
"        \"BackupSize\": 0"
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": \"TotalRecordCount\","
"  \"PageNumber\": \"PageNumber\","
"  \"PageRecordCount\": \"PageRecordCount\""
"}";
static int test_describe_backups() {
  RdsDescribeBackupsRequestType req;
  RdsDescribeBackupsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_backups_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.backup_id = "BackupId";
  req.backup_location = "BackupLocation";
  req.backup_status = "BackupStatus";
  req.backup_mode = "BackupMode";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeBackups(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_backup_tasks_response = "{"
"  \"Items\": {"
"    \"BackupJob\": ["
"      {"
"        \"BackupProgressStatus\": \"BackupProgressStatus\","
"        \"JobMode\": \"JobMode\","
"        \"Process\": \"Process\","
"        \"TaskAction\": \"TaskAction\","
"        \"BackupjobId\": \"BackupjobId\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_backup_tasks() {
  RdsDescribeBackupTasksRequestType req;
  RdsDescribeBackupTasksResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_backup_tasks_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.flag = "Flag";
  req.owner_account = "OwnerAccount";
  req.db_instance_id = "DBInstanceId";
  req.backup_job_id = "BackupJobId";
  req.backup_mode = "BackupMode";
  req.backup_job_status = "BackupJobStatus";
  int ret = rds->DescribeBackupTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_binlog_files_response = "{"
"  \"Items\": {"
"    \"BinLogFile\": ["
"      {"
"        \"FileSize\": 0,"
"        \"LogBeginTime\": \"LogBeginTime\","
"        \"LogEndTime\": \"LogEndTime\","
"        \"DownloadLink\": \"DownloadLink\","
"        \"LinkExpiredTime\": \"LinkExpiredTime\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_binlog_files() {
  RdsDescribeBinlogFilesRequestType req;
  RdsDescribeBinlogFilesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_binlog_files_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeBinlogFiles(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_databases_response = "{"
"  \"Databases\": {"
"    \"Database\": ["
"      {"
"        \"Accounts\": {"
"          \"AccountPrivilegeInfo\": ["
"            {"
"              \"Account\": \"Account\","
"              \"AccountPrivilege\": \"AccountPrivilege\""
"            }"
"          ]"
"        },"
"        \"DBName\": \"DBName\","
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"Engine\": \"Engine\","
"        \"DBStatus\": \"DBStatus\","
"        \"CharacterSetName\": \"CharacterSetName\","
"        \"DBDescription\": \"DBDescription\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_databases() {
  RdsDescribeDatabasesRequestType req;
  RdsDescribeDatabasesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_databases_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.db_status = "DBStatus";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDatabases(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instance_attribute_response = "{"
"  \"Items\": {"
"    \"DBInstanceAttribute\": ["
"      {"
"        \"ReadOnlyDBInstanceIds\": {"
"          \"ReadOnlyDBInstanceId\": ["
"            {"
"              \"DBInstanceId\": \"DBInstanceId\""
"            }"
"          ]"
"        },"
"        \"InsId\": 0,"
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"PayType\": \"PayType\","
"        \"DBInstanceClassType\": \"DBInstanceClassType\","
"        \"DBInstanceType\": \"DBInstanceType\","
"        \"RegionId\": \"RegionId\","
"        \"ConnectionString\": \"ConnectionString\","
"        \"Port\": \"Port\","
"        \"Engine\": \"Engine\","
"        \"EngineVersion\": \"EngineVersion\","
"        \"DBInstanceClass\": \"DBInstanceClass\","
"        \"DBInstanceMemory\": 0,"
"        \"DBInstanceStorage\": 0,"
"        \"DBInstanceNetType\": \"DBInstanceNetType\","
"        \"DBInstanceStatus\": \"DBInstanceStatus\","
"        \"DBInstanceDescription\": \"DBInstanceDescription\","
"        \"LockMode\": \"LockMode\","
"        \"LockReason\": \"LockReason\","
"        \"ReadDelayTime\": \"ReadDelayTime\","
"        \"DBMaxQuantity\": 0,"
"        \"AccountMaxQuantity\": 0,"
"        \"CreationTime\": \"CreationTime\","
"        \"ExpireTime\": \"ExpireTime\","
"        \"MaintainTime\": \"MaintainTime\","
"        \"AvailabilityValue\": \"AvailabilityValue\","
"        \"MaxIOPS\": 0,"
"        \"MaxConnections\": 0,"
"        \"MasterInstanceId\": \"MasterInstanceId\","
"        \"IncrementSourceDBInstanceId\": \"IncrementSourceDBInstanceId\","
"        \"GuardDBInstanceId\": \"GuardDBInstanceId\","
"        \"TempDBInstanceId\": \"TempDBInstanceId\","
"        \"SecurityIPList\": \"SecurityIPList\","
"        \"ZoneId\": \"ZoneId\","
"        \"InstanceNetworkType\": \"InstanceNetworkType\","
"        \"VpcId\": \"VpcId\","
"        \"ConnectionMode\": \"ConnectionMode\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_db_instance_attribute() {
  RdsDescribeDBInstanceAttributeRequestType req;
  RdsDescribeDBInstanceAttributeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstanceAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instance_ip_array_list_response = "{"
"  \"Items\": {"
"    \"DBInstanceIPArray\": ["
"      {"
"        \"DBInstanceIPArrayName\": \"DBInstanceIPArrayName\","
"        \"DBInstanceIPArrayAttribute\": \"DBInstanceIPArrayAttribute\","
"        \"SecurityIPList\": \"SecurityIPList\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_db_instance_ip_array_list() {
  RdsDescribeDBInstanceIPArrayListRequestType req;
  RdsDescribeDBInstanceIPArrayListResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_ip_array_list_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstanceIPArrayList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instance_net_info_response = "{"
"  \"DBInstanceNetInfos\": {"
"    \"DBInstanceNetInfo\": ["
"      {"
"        \"SecurityIPGroups\": {"
"          \"securityIPGroups\": ["
"            {"
"              \"SecurityIPGroupName\": \"SecurityIPGroupName\","
"              \"SecurityIPs\": \"SecurityIPs\""
"            }"
"          ]"
"        },"
"        \"ConnectionString\": \"ConnectionString\","
"        \"IPAddress\": \"IPAddress\","
"        \"IPType\": \"IPType\","
"        \"Port\": \"Port\","
"        \"VPCId\": \"VPCId\","
"        \"VSwitchId\": \"VSwitchId\""
"      }"
"    ]"
"  },"
"  \"InstanceNetworkType\": \"InstanceNetworkType\""
"}";
static int test_describe_db_instance_net_info() {
  RdsDescribeDBInstanceNetInfoRequestType req;
  RdsDescribeDBInstanceNetInfoResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_net_info_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.flag = "Flag";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstanceNetInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instance_net_info_for_channel_response = "{"
"  \"DBInstanceNetInfos\": {"
"    \"DBInstanceNetInfo\": ["
"      {"
"        \"SecurityIPGroups\": {"
"          \"securityIPGroups\": ["
"            {"
"              \"SecurityIPGroupName\": \"SecurityIPGroupName\","
"              \"SecurityIPs\": \"SecurityIPs\""
"            }"
"          ]"
"        },"
"        \"ConnectionString\": \"ConnectionString\","
"        \"IPAddress\": \"IPAddress\","
"        \"IPType\": \"IPType\","
"        \"Port\": \"Port\","
"        \"VPCId\": \"VPCId\","
"        \"VSwitchId\": \"VSwitchId\""
"      }"
"    ]"
"  },"
"  \"InstanceNetworkType\": \"InstanceNetworkType\""
"}";
static int test_describe_db_instance_net_info_for_channel() {
  RdsDescribeDBInstanceNetInfoForChannelRequestType req;
  RdsDescribeDBInstanceNetInfoForChannelResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_net_info_for_channel_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.flag = "Flag";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstanceNetInfoForChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instance_performance_response = "{"
"  \"PerformanceKeys\": {"
"    \"PerformanceKey\": ["
"      {"
"        \"Values\": {"
"          \"PerformanceValue\": ["
"            {"
"              \"Value\": \"Value\","
"              \"Date\": \"Date\""
"            }"
"          ]"
"        },"
"        \"Key\": \"Key\","
"        \"Unit\": \"Unit\","
"        \"ValueFormat\": \"ValueFormat\""
"      }"
"    ]"
"  },"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"Engine\": \"Engine\","
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\""
"}";
static int test_describe_db_instance_performance() {
  RdsDescribeDBInstancePerformanceRequestType req;
  RdsDescribeDBInstancePerformanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_performance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.key = "Key";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstancePerformance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instances_response = "{"
"  \"Items\": {"
"    \"DBInstance\": ["
"      {"
"        \"ReadOnlyDBInstanceIds\": {"
"          \"ReadOnlyDBInstanceId\": ["
"            {"
"              \"DBInstanceId\": \"DBInstanceId\""
"            }"
"          ]"
"        },"
"        \"InsId\": 0,"
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"DBInstanceDescription\": \"DBInstanceDescription\","
"        \"PayType\": \"PayType\","
"        \"DBInstanceType\": \"DBInstanceType\","
"        \"RegionId\": \"RegionId\","
"        \"ExpireTime\": \"ExpireTime\","
"        \"DBInstanceStatus\": \"DBInstanceStatus\","
"        \"Engine\": \"Engine\","
"        \"DBInstanceNetType\": \"DBInstanceNetType\","
"        \"ConnectionMode\": \"ConnectionMode\","
"        \"LockMode\": \"LockMode\","
"        \"InstanceNetworkType\": \"InstanceNetworkType\","
"        \"LockReason\": \"LockReason\","
"        \"ZoneId\": \"ZoneId\","
"        \"MutriORsignle\": 0,"
"        \"CreateTime\": \"CreateTime\","
"        \"EngineVersion\": \"EngineVersion\","
"        \"GuardDBInstanceId\": \"GuardDBInstanceId\","
"        \"TempDBInstanceId\": \"TempDBInstanceId\","
"        \"MasterInstanceId\": \"MasterInstanceId\","
"        \"VpcId\": \"VpcId\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"TotalRecordCount\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_db_instances() {
  RdsDescribeDBInstancesRequestType req;
  RdsDescribeDBInstancesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.engine = "Engine";
  req.db_instance_status = "DBInstanceStatus";
  req.search_key = "SearchKey";
  req.db_instance_id = "DBInstanceId";
  req.db_instance_type = "DBInstanceType";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.instance_network_type = "InstanceNetworkType";
  req.connection_mode = "ConnectionMode";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instances_by_expire_time_response = "{"
"  \"Items\": {"
"    \"DBInstanceExpireTime\": ["
"      {"
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"DBInstanceDescription\": \"DBInstanceDescription\","
"        \"ExpireTime\": \"ExpireTime\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"TotalRecordCount\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_db_instances_by_expire_time() {
  RdsDescribeDBInstancesByExpireTimeRequestType req;
  RdsDescribeDBInstancesByExpireTimeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instances_by_expire_time_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.expire_period = "ExpirePeriod";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstancesByExpireTime(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_db_instances_by_performance_response = "{"
"  \"Items\": {"
"    \"DBInstancePerformance\": ["
"      {"
"        \"CPUUsage\": \"CPUUsage\","
"        \"IOPSUsage\": \"IOPSUsage\","
"        \"DiskUsage\": \"DiskUsage\","
"        \"SessionUsage\": \"SessionUsage\","
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"DBInstanceDescription\": \"DBInstanceDescription\""
"      }"
"    ]"
"  },"
"  \"PageNumber\": 0,"
"  \"TotalRecordCount\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_db_instances_by_performance() {
  RdsDescribeDBInstancesByPerformanceRequestType req;
  RdsDescribeDBInstancesByPerformanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instances_by_performance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.sort_method = "SortMethod";
  req.sort_key = "SortKey";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeDBInstancesByPerformance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_error_logs_response = "{"
"  \"Items\": {"
"    \"ErrorLog\": ["
"      {"
"        \"ErrorInfo\": \"ErrorInfo\","
"        \"CreateTime\": \"CreateTime\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_error_logs() {
  RdsDescribeErrorLogsRequestType req;
  RdsDescribeErrorLogsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_error_logs_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeErrorLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_files_for_sq_lserver_response = "{"
"  \"Items\": {"
"    \"SQLServerUploadFile\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"FileName\": \"FileName\","
"        \"FileSize\": 0,"
"        \"InternetFtpServer\": \"InternetFtpServer\","
"        \"InternetPort\": 0,"
"        \"IntranetFtpserver\": \"IntranetFtpserver\","
"        \"Intranetport\": 0,"
"        \"UserName\": \"UserName\","
"        \"Password\": \"Password\","
"        \"FileStatus\": \"FileStatus\","
"        \"Description\": \"Description\","
"        \"CreationTime\": \"CreationTime\""
"      }"
"    ]"
"  },"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_files_for_sq_lserver() {
  RdsDescribeFilesForSQLServerRequestType req;
  RdsDescribeFilesForSQLServerResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_files_for_sq_lserver_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeFilesForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_imports_for_sq_lserver_response = "{"
"  \"Items\": {"
"    \"SQLServerImport\": ["
"      {"
"        \"ImportId\": 0,"
"        \"FileName\": \"FileName\","
"        \"DBName\": \"DBName\","
"        \"ImportStatus\": \"ImportStatus\","
"        \"StartTime\": \"StartTime\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCounts\": 0,"
"  \"PageNumber\": 0,"
"  \"SQLItemsCounts\": 0"
"}";
static int test_describe_imports_for_sq_lserver() {
  RdsDescribeImportsForSQLServerRequestType req;
  RdsDescribeImportsForSQLServerResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_imports_for_sq_lserver_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.import_id = "ImportId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeImportsForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_modify_parameter_log_response = "{"
"  \"Items\": {"
"    \"ParameterChangeLog\": ["
"      {"
"        \"ModifyTime\": \"ModifyTime\","
"        \"OldParameterValue\": \"OldParameterValue\","
"        \"NewParameterValue\": \"NewParameterValue\","
"        \"ParameterName\": \"ParameterName\","
"        \"Status\": \"Status\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"EngineVersion\": \"EngineVersion\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_modify_parameter_log() {
  RdsDescribeModifyParameterLogRequestType req;
  RdsDescribeModifyParameterLogResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_modify_parameter_log_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeModifyParameterLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_operation_logs_response = "{"
"  \"Items\": {"
"    \"Operationlog\": ["
"      {"
"        \"DBInstanceDescription\": \"DBInstanceDescription\","
"        \"DBInstanceId\": \"DBInstanceId\","
"        \"OperationSource\": \"OperationSource\","
"        \"OperationItem\": \"OperationItem\","
"        \"executionTime\": \"executionTime\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_operation_logs() {
  RdsDescribeOperationLogsRequestType req;
  RdsDescribeOperationLogsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_operation_logs_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.search_key = "SearchKey";
  req.db_instance_use_type = "DBInstanceUseType";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOperationLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_optimize_advice_by_db_a_response = "{"
"  \"Items\": {"
"    \"AdviceByDBA\": ["
"      {"
"        \"OptimizationText\": \"OptimizationText\""
"      }"
"    ]"
"  },"
"  \"TotalRecordsCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_optimize_advice_by_db_a() {
  RdsDescribeOptimizeAdviceByDBARequestType req;
  RdsDescribeOptimizeAdviceByDBAResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_optimize_advice_by_db_a_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOptimizeAdviceByDBA(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_optimize_advice_on_big_table_response = "{"
"  \"Items\": {"
"    \"AdviceOnBigTable\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"TableName\": \"TableName\","
"        \"TableSize\": 0,"
"        \"DataSize\": 0,"
"        \"IndexSize\": 0"
"      }"
"    ]"
"  },"
"  \"TotalRecordsCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_optimize_advice_on_big_table() {
  RdsDescribeOptimizeAdviceOnBigTableRequestType req;
  RdsDescribeOptimizeAdviceOnBigTableResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_optimize_advice_on_big_table_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOptimizeAdviceOnBigTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_optimize_advice_on_excess_index_response = "{"
"  \"Items\": {"
"    \"AdviceOnExcessIndex\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"TableName\": \"TableName\","
"        \"IndexCount\": 0"
"      }"
"    ]"
"  },"
"  \"TotalRecordsCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_optimize_advice_on_excess_index() {
  RdsDescribeOptimizeAdviceOnExcessIndexRequestType req;
  RdsDescribeOptimizeAdviceOnExcessIndexResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_optimize_advice_on_excess_index_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOptimizeAdviceOnExcessIndex(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_optimize_advice_on_miss_index_response = "{"
"  \"Items\": {"
"    \"AdviceOnMissIndex\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"TableName\": \"TableName\","
"        \"QueryColumn\": \"QueryColumn\","
"        \"SQLText\": \"SQLText\""
"      }"
"    ]"
"  },"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"TotalRecordsCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_optimize_advice_on_miss_index() {
  RdsDescribeOptimizeAdviceOnMissIndexRequestType req;
  RdsDescribeOptimizeAdviceOnMissIndexResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_optimize_advice_on_miss_index_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOptimizeAdviceOnMissIndex(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_optimize_advice_on_miss_pk_response = "{"
"  \"Items\": {"
"    \"AdviceOnMissPK\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"TableName\": \"TableName\""
"      }"
"    ]"
"  },"
"  \"TotalRecordsCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_optimize_advice_on_miss_pk() {
  RdsDescribeOptimizeAdviceOnMissPKRequestType req;
  RdsDescribeOptimizeAdviceOnMissPKResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_optimize_advice_on_miss_pk_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOptimizeAdviceOnMissPK(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_optimize_advice_on_storage_response = "{"
"  \"Items\": {"
"    \"AdviceOnStorage\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"TableName\": \"TableName\","
"        \"CurrentEngine\": \"CurrentEngine\","
"        \"AdviseEngine\": \"AdviseEngine\""
"      }"
"    ]"
"  },"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"TotalRecordsCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_optimize_advice_on_storage() {
  RdsDescribeOptimizeAdviceOnStorageRequestType req;
  RdsDescribeOptimizeAdviceOnStorageResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_optimize_advice_on_storage_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeOptimizeAdviceOnStorage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_parameters_response = "{"
"  \"ConfigParameters\": {"
"    \"DBInstanceParameter\": ["
"      {"
"        \"ParameterName\": \"ParameterName\","
"        \"ParameterValue\": \"ParameterValue\","
"        \"ParameterDescription\": \"ParameterDescription\""
"      }"
"    ]"
"  },"
"  \"RunningParameters\": {"
"    \"DBInstanceParameter\": ["
"      {"
"        \"ParameterName\": \"ParameterName\","
"        \"ParameterValue\": \"ParameterValue\","
"        \"ParameterDescription\": \"ParameterDescription\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"EngineVersion\": \"EngineVersion\""
"}";
static int test_describe_parameters() {
  RdsDescribeParametersRequestType req;
  RdsDescribeParametersResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_parameters_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeParameters(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_parameter_templates_response = "{"
"  \"Parameters\": {"
"    \"TemplateRecord\": ["
"      {"
"        \"ParameterName\": \"ParameterName\","
"        \"ParameterValue\": \"ParameterValue\","
"        \"ForceModify\": \"ForceModify\","
"        \"ForceRestart\": \"ForceRestart\","
"        \"CheckingCode\": \"CheckingCode\","
"        \"ParameterDescription\": \"ParameterDescription\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"EngineVersion\": \"EngineVersion\","
"  \"ParameterCount\": \"ParameterCount\""
"}";
static int test_describe_parameter_templates() {
  RdsDescribeParameterTemplatesRequestType req;
  RdsDescribeParameterTemplatesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_parameter_templates_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.engine = "Engine";
  req.engine_version = "EngineVersion";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeParameterTemplates(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_pre_check_results_response = "{"
"  \"Items\": {"
"    \"PreCheckResult\": ["
"      {"
"        \"PreCheckName\": \"PreCheckName\","
"        \"PreCheckResult\": \"PreCheckResult\","
"        \"FailReasion\": \"FailReasion\","
"        \"RepairMethod\": \"RepairMethod\""
"      }"
"    ]"
"  },"
"  \"DBInstanceId\": \"DBInstanceId\""
"}";
static int test_describe_pre_check_results() {
  RdsDescribePreCheckResultsRequestType req;
  RdsDescribePreCheckResultsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_pre_check_results_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.pre_check_id = "PreCheckId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribePreCheckResults(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_realtime_diagnoses_response = "{"
"  \"Tasks\": {"
"    \"RealtimeDiagnoseTasks\": ["
"      {"
"        \"CreateTime\": \"CreateTime\","
"        \"TaskId\": \"TaskId\","
"        \"HealthScore\": \"HealthScore\","
"        \"Status\": \"Status\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_realtime_diagnoses() {
  RdsDescribeRealtimeDiagnosesRequestType req;
  RdsDescribeRealtimeDiagnosesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_realtime_diagnoses_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeRealtimeDiagnoses(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_regions_response = "{"
"  \"Regions\": {"
"    \"RDSRegion\": ["
"      {"
"        \"RegionId\": \"RegionId\","
"        \"ZoneId\": \"ZoneId\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_regions() {
  RdsDescribeRegionsRequestType req;
  RdsDescribeRegionsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_resource_usage_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"Engine\": \"Engine\","
"  \"DiskUsed\": 0,"
"  \"DataSize\": 0,"
"  \"LogSize\": 0,"
"  \"BackupSize\": 0,"
"  \"SQLSize\": 0,"
"  \"ColdBackupSize\": 0"
"}";
static int test_describe_resource_usage() {
  RdsDescribeResourceUsageRequestType req;
  RdsDescribeResourceUsageResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_resource_usage_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeResourceUsage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_slow_log_records_response = "{"
"  \"Items\": {"
"    \"SQLSlowRecord\": ["
"      {"
"        \"HostAddress\": \"HostAddress\","
"        \"DBName\": \"DBName\","
"        \"SQLText\": \"SQLText\","
"        \"QueryTimes\": 0,"
"        \"LockTimes\": 0,"
"        \"ParseRowCounts\": 0,"
"        \"ReturnRowCounts\": 0,"
"        \"ExecutionStartTime\": \"ExecutionStartTime\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_slow_log_records() {
  RdsDescribeSlowLogRecordsRequestType req;
  RdsDescribeSlowLogRecordsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_slow_log_records_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.sq_lid = "SQLId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.db_name = "DBName";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeSlowLogRecords(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_slow_logs_response = "{"
"  \"Items\": {"
"    \"SQLSlowLog\": ["
"      {"
"        \"SlowLogId\": 0,"
"        \"SQLId\": 0,"
"        \"DBName\": \"DBName\","
"        \"SQLText\": \"SQLText\","
"        \"MySQLTotalExecutionCounts\": 0,"
"        \"MySQLTotalExecutionTimes\": 0,"
"        \"TotalLockTimes\": 0,"
"        \"MaxLockTime\": 0,"
"        \"ParseTotalRowCounts\": 0,"
"        \"ParseMaxRowCount\": 0,"
"        \"ReturnTotalRowCounts\": 0,"
"        \"ReturnMaxRowCount\": 0,"
"        \"CreateTime\": \"CreateTime\","
"        \"SQLServerTotalExecutionCounts\": 0,"
"        \"SQLServerTotalExecutionTimes\": 0,"
"        \"TotalLogicalReadCounts\": 0,"
"        \"TotalPhysicalReadCounts\": 0,"
"        \"ReportTime\": \"ReportTime\","
"        \"MaxExecutionTime\": 0,"
"        \"AvgExecutionTime\": 0"
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"StartTime\": \"StartTime\","
"  \"EndTime\": \"EndTime\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_slow_logs() {
  RdsDescribeSlowLogsRequestType req;
  RdsDescribeSlowLogsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_slow_logs_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.db_name = "DBName";
  req.sort_key = "SortKey";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeSlowLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_sq_linjection_infos_response = "{"
"  \"Items\": {"
"    \"SQLInjectionInfo\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"SQLText\": \"SQLText\","
"        \"LatencyTime\": \"LatencyTime\","
"        \"HostAddress\": \"HostAddress\","
"        \"ExecuteTime\": \"ExecuteTime\","
"        \"AccountName\": \"AccountName\","
"        \"EffectRowCount\": \"EffectRowCount\""
"      }"
"    ]"
"  },"
"  \"Engine\": \"Engine\","
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_sq_linjection_infos() {
  RdsDescribeSQLInjectionInfosRequestType req;
  RdsDescribeSQLInjectionInfosResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_sq_linjection_infos_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeSQLInjectionInfos(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_sq_llog_records_response = "{"
"  \"Items\": {"
"    \"SQLRecord\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"AccountName\": \"AccountName\","
"        \"HostAddress\": \"HostAddress\","
"        \"SQLText\": \"SQLText\","
"        \"TotalExecutionTimes\": 0,"
"        \"ReturnRowCounts\": 0,"
"        \"ExecuteTime\": \"ExecuteTime\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_sq_llog_records() {
  RdsDescribeSQLLogRecordsRequestType req;
  RdsDescribeSQLLogRecordsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_sq_llog_records_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.sq_lid = "SQLId";
  req.query_keywords = "QueryKeywords";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeSQLLogRecords(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_sq_llog_report_list_response = "{"
"  \"Items\": {"
"    \"Item\": ["
"      {"
"        \"LatencyTopNItems\": {"
"          \"LatencyTopNItem\": ["
"            {"
"              \"SQLText\": \"SQLText\","
"              \"AvgLatency\": 0,"
"              \"SQLExecuteTimes\": 0"
"            }"
"          ]"
"        },"
"        \"QPSTopNItems\": {"
"          \"QPSTopNItem\": ["
"            {"
"              \"SQLText\": \"SQLText\","
"              \"SQLExecuteTimes\": 0"
"            }"
"          ]"
"        },"
"        \"ReportTime\": \"ReportTime\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_sq_llog_report_list() {
  RdsDescribeSQLLogReportListRequestType req;
  RdsDescribeSQLLogReportListResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_sq_llog_report_list_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeSQLLogReportList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_sq_llog_reports_response = "{"
"  \"Items\": {"
"    \"SQLReport\": ["
"      {"
"        \"SQLText\": \"SQLText\","
"        \"TotalExecutionCounts\": \"TotalExecutionCounts\","
"        \"ReturnTotalRowCounts\": \"ReturnTotalRowCounts\","
"        \"TotalExecutionTimes\": \"TotalExecutionTimes\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": \"TotalRecordCount\","
"  \"PageNumber\": \"PageNumber\","
"  \"PageRecordCount\": \"PageRecordCount\""
"}";
static int test_describe_sq_llog_reports() {
  RdsDescribeSQLLogReportsRequestType req;
  RdsDescribeSQLLogReportsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_sq_llog_reports_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.report_type = "ReportType";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeSQLLogReports(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_tasks_response = "{"
"  \"Items\": {"
"    \"TaskProgressInfo\": ["
"      {"
"        \"DBName\": \"DBName\","
"        \"BeginTime\": \"BeginTime\","
"        \"ProgressInfo\": \"ProgressInfo\","
"        \"FinishTime\": \"FinishTime\","
"        \"TaskAction\": \"TaskAction\","
"        \"TaskId\": \"TaskId\","
"        \"Progress\": \"Progress\","
"        \"ExpectedFinishTime\": \"ExpectedFinishTime\","
"        \"Status\": \"Status\","
"        \"TaskErrorCode\": \"TaskErrorCode\","
"        \"TaskErrorMessage\": \"TaskErrorMessage\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_tasks() {
  RdsDescribeTasksRequestType req;
  RdsDescribeTasksResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_tasks_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.start_time = "StartTime";
  req.end_time = "EndTime";
  req.page_size = "PageSize";
  req.page_number = "PageNumber";
  req.status = "Status";
  req.task_action = "TaskAction";
  req.owner_account = "OwnerAccount";
  int ret = rds->DescribeTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_describe_vpc_zone_nos_response = "{"
"  \"Items\": {"
"    \"VpcZoneId\": ["
"      {"
"        \"ZoneId\": \"ZoneId\","
"        \"Region\": \"Region\","
"        \"SubDomain\": \"SubDomain\""
"      }"
"    ]"
"  }"
"}";
static int test_describe_vpc_zone_nos() {
  RdsDescribeVpcZoneNosRequestType req;
  RdsDescribeVpcZoneNosResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_vpc_zone_nos_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  req.region = "Region";
  req.zone_id = "ZoneId";
  int ret = rds->DescribeVpcZoneNos(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_extract_backup_from_oa_s_response = "{"
"  \"DataExtractionLastTime\": \"DataExtractionLastTime\""
"}";
static int test_extract_backup_from_oa_s() {
  RdsExtractBackupFromOASRequestType req;
  RdsExtractBackupFromOASResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_extract_backup_from_oa_s_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.backup_id = "BackupId";
  req.owner_account = "OwnerAccount";
  int ret = rds->ExtractBackupFromOAS(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_grant_account_privilege_response = "{}";
static int test_grant_account_privilege() {
  RdsGrantAccountPrivilegeRequestType req;
  RdsGrantAccountPrivilegeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_grant_account_privilege_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.db_name = "DBName";
  req.account_privilege = "AccountPrivilege";
  req.owner_account = "OwnerAccount";
  int ret = rds->GrantAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_import_database_between_instances_response = "{"
"  \"ImportId\": \"ImportId\""
"}";
static int test_import_database_between_instances() {
  RdsImportDatabaseBetweenInstancesRequestType req;
  RdsImportDatabaseBetweenInstancesResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_import_database_between_instances_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.source_db_instance_id = "SourceDBInstanceId";
  req.db_info = "DBInfo";
  req.owner_account = "OwnerAccount";
  int ret = rds->ImportDatabaseBetweenInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_import_data_for_sq_lserver_response = "{"
"  \"ImportID\": 0"
"}";
static int test_import_data_for_sq_lserver() {
  RdsImportDataForSQLServerRequestType req;
  RdsImportDataForSQLServerResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_import_data_for_sq_lserver_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.file_name = "FileName";
  req.owner_account = "OwnerAccount";
  int ret = rds->ImportDataForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_import_data_from_database_response = "{"
"  \"ImportId\": 0"
"}";
static int test_import_data_from_database() {
  RdsImportDataFromDatabaseRequestType req;
  RdsImportDataFromDatabaseResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_import_data_from_database_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.source_database_ip = "SourceDatabaseIp";
  req.source_database_port = "SourceDatabasePort";
  req.source_database_user_name = "SourceDatabaseUserName";
  req.source_database_password = "SourceDatabasePassword";
  req.import_data_type = "ImportDataType";
  req.is_lock_table = "IsLockTable";
  req.source_database_db_names = "SourceDatabaseDBNames";
  req.owner_account = "OwnerAccount";
  int ret = rds->ImportDataFromDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_lock_db_instance_response = "{}";
static int test_lock_db_instance() {
  RdsLockDBInstanceRequestType req;
  RdsLockDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_lock_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.lock_reason = "LockReason";
  req.owner_account = "OwnerAccount";
  int ret = rds->LockDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_migrate_to_other_zone_response = "{}";
static int test_migrate_to_other_zone() {
  RdsMigrateToOtherZoneRequestType req;
  RdsMigrateToOtherZoneResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_migrate_to_other_zone_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.zone_id = "ZoneId";
  req.owner_account = "OwnerAccount";
  int ret = rds->MigrateToOtherZone(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_account_description_response = "{}";
static int test_modify_account_description() {
  RdsModifyAccountDescriptionRequestType req;
  RdsModifyAccountDescriptionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_account_description_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.account_description = "AccountDescription";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyAccountDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_backup_policy_response = "{}";
static int test_modify_backup_policy() {
  RdsModifyBackupPolicyRequestType req;
  RdsModifyBackupPolicyResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_backup_policy_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.preferred_backup_time = "PreferredBackupTime";
  req.preferred_backup_period = "PreferredBackupPeriod";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyBackupPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_description_response = "{}";
static int test_modify_db_description() {
  RdsModifyDBDescriptionRequestType req;
  RdsModifyDBDescriptionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_description_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.db_description = "DBDescription";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_instance_connection_mode_response = "{}";
static int test_modify_db_instance_connection_mode() {
  RdsModifyDBInstanceConnectionModeRequestType req;
  RdsModifyDBInstanceConnectionModeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_connection_mode_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.connection_mode = "ConnectionMode";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBInstanceConnectionMode(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_instance_connection_string_response = "{}";
static int test_modify_db_instance_connection_string() {
  RdsModifyDBInstanceConnectionStringRequestType req;
  RdsModifyDBInstanceConnectionStringResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_connection_string_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.current_connection_string = "CurrentConnectionString";
  req.connection_string_prefix = "ConnectionStringPrefix";
  req.port = "Port";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBInstanceConnectionString(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_instance_description_response = "{}";
static int test_modify_db_instance_description() {
  RdsModifyDBInstanceDescriptionRequestType req;
  RdsModifyDBInstanceDescriptionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_description_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.db_instance_description = "DBInstanceDescription";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBInstanceDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_instance_maintain_time_response = "{}";
static int test_modify_db_instance_maintain_time() {
  RdsModifyDBInstanceMaintainTimeRequestType req;
  RdsModifyDBInstanceMaintainTimeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_maintain_time_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.maintain_time = "MaintainTime";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBInstanceMaintainTime(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_instance_network_type_response = "{}";
static int test_modify_db_instance_network_type() {
  RdsModifyDBInstanceNetworkTypeRequestType req;
  RdsModifyDBInstanceNetworkTypeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_network_type_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.instance_network_type = "InstanceNetworkType";
  req.vp_cid = "VPCId";
  req.vswitch_id = "VSwitchId";
  req.private_ip_address = "PrivateIpAddress";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBInstanceNetworkType(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_db_instance_spec_response = "{}";
static int test_modify_db_instance_spec() {
  RdsModifyDBInstanceSpecRequestType req;
  RdsModifyDBInstanceSpecResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_spec_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.pay_type = "PayType";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyDBInstanceSpec(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_parameter_response = "{}";
static int test_modify_parameter() {
  RdsModifyParameterRequestType req;
  RdsModifyParameterResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_parameter_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.parameters = "Parameters";
  req.forcerestart = "Forcerestart";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyParameter(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_postpaid_db_instance_spec_response = "{}";
static int test_modify_postpaid_db_instance_spec() {
  RdsModifyPostpaidDBInstanceSpecRequestType req;
  RdsModifyPostpaidDBInstanceSpecResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_postpaid_db_instance_spec_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.db_instance_class = "DBInstanceClass";
  req.db_instance_storage = "DBInstanceStorage";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifyPostpaidDBInstanceSpec(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_modify_security_ips_response = "{}";
static int test_modify_security_ips() {
  RdsModifySecurityIpsRequestType req;
  RdsModifySecurityIpsResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_security_ips_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.security_ips = "SecurityIps";
  req.owner_account = "OwnerAccount";
  int ret = rds->ModifySecurityIps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_pre_check_before_import_data_response = "{"
"  \"PreCheckId\": \"PreCheckId\""
"}";
static int test_pre_check_before_import_data() {
  RdsPreCheckBeforeImportDataRequestType req;
  RdsPreCheckBeforeImportDataResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_pre_check_before_import_data_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.source_database_ip = "SourceDatabaseIp";
  req.source_database_port = "SourceDatabasePort";
  req.source_database_user_name = "SourceDatabaseUserName";
  req.source_database_password = "SourceDatabasePassword";
  req.import_data_type = "ImportDataType";
  req.source_database_db_names = "SourceDatabaseDBNames";
  req.owner_account = "OwnerAccount";
  int ret = rds->PreCheckBeforeImportData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_purge_db_instance_log_response = "{}";
static int test_purge_db_instance_log() {
  RdsPurgeDBInstanceLogRequestType req;
  RdsPurgeDBInstanceLogResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_purge_db_instance_log_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->PurgeDBInstanceLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_release_instance_public_connection_response = "{}";
static int test_release_instance_public_connection() {
  RdsReleaseInstancePublicConnectionRequestType req;
  RdsReleaseInstancePublicConnectionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_release_instance_public_connection_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.current_connection_string = "CurrentConnectionString";
  req.owner_account = "OwnerAccount";
  int ret = rds->ReleaseInstancePublicConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_remove_tags_from_resource_response = "{}";
static int test_remove_tags_from_resource() {
  RdsRemoveTagsFromResourceRequestType req;
  RdsRemoveTagsFromResourceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_remove_tags_from_resource_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.db_instance_id = "DBInstanceId";
  req.tag1key = "Tag.1.key";
  req.tag2key = "Tag.2.key";
  req.tag3key = "Tag.3.key";
  req.tag4key = "Tag.4.key";
  req.tag5key = "Tag.5.key";
  req.tag1value = "Tag.1.value";
  req.tag2value = "Tag.2.value";
  req.tag3value = "Tag.3.value";
  req.tag4value = "Tag.4.value";
  req.tag5value = "Tag.5.value";
  req.owner_account = "OwnerAccount";
  int ret = rds->RemoveTagsFromResource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_reset_account_for_pg_response = "{}";
static int test_reset_account_for_pg() {
  RdsResetAccountForPGRequestType req;
  RdsResetAccountForPGResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_reset_account_for_pg_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.account_password = "AccountPassword";
  req.owner_account = "OwnerAccount";
  int ret = rds->ResetAccountForPG(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_reset_account_password_response = "{}";
static int test_reset_account_password() {
  RdsResetAccountPasswordRequestType req;
  RdsResetAccountPasswordResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_reset_account_password_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.account_password = "AccountPassword";
  req.owner_account = "OwnerAccount";
  int ret = rds->ResetAccountPassword(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_restart_db_instance_response = "{}";
static int test_restart_db_instance() {
  RdsRestartDBInstanceRequestType req;
  RdsRestartDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_restart_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->RestartDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_restore_db_instance_response = "{}";
static int test_restore_db_instance() {
  RdsRestoreDBInstanceRequestType req;
  RdsRestoreDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_restore_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.backup_id = "BackupId";
  req.owner_account = "OwnerAccount";
  int ret = rds->RestoreDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_revoke_account_privilege_response = "{}";
static int test_revoke_account_privilege() {
  RdsRevokeAccountPrivilegeRequestType req;
  RdsRevokeAccountPrivilegeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_revoke_account_privilege_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rds->RevokeAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_start_db_instance_diagnose_response = "{"
"  \"DBInstanceName\": \"DBInstanceName\","
"  \"DBInstanceId\": \"DBInstanceId\""
"}";
static int test_start_db_instance_diagnose() {
  RdsStartDBInstanceDiagnoseRequestType req;
  RdsStartDBInstanceDiagnoseResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_start_db_instance_diagnose_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.proxy_id = "proxyId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->StartDBInstanceDiagnose(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_stop_syncing_response = "{}";
static int test_stop_syncing() {
  RdsStopSyncingRequestType req;
  RdsStopSyncingResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_syncing_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.import_id = "ImportId";
  req.owner_account = "OwnerAccount";
  int ret = rds->StopSyncing(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_switch_db_instance_net_type_response = "{}";
static int test_switch_db_instance_net_type() {
  RdsSwitchDBInstanceNetTypeRequestType req;
  RdsSwitchDBInstanceNetTypeResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_switch_db_instance_net_type_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.connection_string_prefix = "ConnectionStringPrefix";
  req.port = "Port";
  req.owner_account = "OwnerAccount";
  int ret = rds->SwitchDBInstanceNetType(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_unlock_db_instance_response = "{}";
static int test_unlock_db_instance() {
  RdsUnlockDBInstanceRequestType req;
  RdsUnlockDBInstanceResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_unlock_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rds->UnlockDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
static const char* test_upgrade_db_instance_engine_version_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_upgrade_db_instance_engine_version() {
  RdsUpgradeDBInstanceEngineVersionRequestType req;
  RdsUpgradeDBInstanceEngineVersionResponseType resp;
  Rds* rds = Rds::CreateRdsClient("cn-hangzhou", "my_appid", "my_secret");
  if(!{0}) return 0;
  rds->SetProxyHost("127.0.0.1:12234");
  rds->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_upgrade_db_instance_engine_version_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.engine_version = "EngineVersion";
  req.owner_account = "OwnerAccount";
  int ret = rds->UpgradeDBInstanceEngineVersion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rds;
}
int main() {
  test_add_tags_to_resource();
  test_allocate_instance_private_connection();
  test_allocate_instance_public_connection();
  test_batch_grant_account_privilege();
  test_batch_revoke_account_privilege();
  test_cancel_import();
  test_check_account_name_available();
  test_check_db_name_available();
  test_create_account();
  test_create_account_for_inner();
  test_create_backup();
  test_create_database();
  test_create_database_for_inner();
  test_create_db_instance();
  test_create_db_instance_for_channel();
  test_create_db_instancefor_first_pay();
  test_create_postpaid_db_instance();
  test_create_postpaid_db_instance_for_channel();
  test_create_read_only_db_instance();
  test_create_temp_db_instance();
  test_create_upload_path_for_sq_lserver();
  test_delete_account();
  test_delete_database();
  test_delete_db_instance();
  test_descibe_imports_from_database();
  test_describe_abnormal_db_instances();
  test_describe_accounts();
  test_describe_backup_policy();
  test_describe_backups();
  test_describe_backup_tasks();
  test_describe_binlog_files();
  test_describe_databases();
  test_describe_db_instance_attribute();
  test_describe_db_instance_ip_array_list();
  test_describe_db_instance_net_info();
  test_describe_db_instance_net_info_for_channel();
  test_describe_db_instance_performance();
  test_describe_db_instances();
  test_describe_db_instances_by_expire_time();
  test_describe_db_instances_by_performance();
  test_describe_error_logs();
  test_describe_files_for_sq_lserver();
  test_describe_imports_for_sq_lserver();
  test_describe_modify_parameter_log();
  test_describe_operation_logs();
  test_describe_optimize_advice_by_db_a();
  test_describe_optimize_advice_on_big_table();
  test_describe_optimize_advice_on_excess_index();
  test_describe_optimize_advice_on_miss_index();
  test_describe_optimize_advice_on_miss_pk();
  test_describe_optimize_advice_on_storage();
  test_describe_parameters();
  test_describe_parameter_templates();
  test_describe_pre_check_results();
  test_describe_realtime_diagnoses();
  test_describe_regions();
  test_describe_resource_usage();
  test_describe_slow_log_records();
  test_describe_slow_logs();
  test_describe_sq_linjection_infos();
  test_describe_sq_llog_records();
  test_describe_sq_llog_report_list();
  test_describe_sq_llog_reports();
  test_describe_tasks();
  test_describe_vpc_zone_nos();
  test_extract_backup_from_oa_s();
  test_grant_account_privilege();
  test_import_database_between_instances();
  test_import_data_for_sq_lserver();
  test_import_data_from_database();
  test_lock_db_instance();
  test_migrate_to_other_zone();
  test_modify_account_description();
  test_modify_backup_policy();
  test_modify_db_description();
  test_modify_db_instance_connection_mode();
  test_modify_db_instance_connection_string();
  test_modify_db_instance_description();
  test_modify_db_instance_maintain_time();
  test_modify_db_instance_network_type();
  test_modify_db_instance_spec();
  test_modify_parameter();
  test_modify_postpaid_db_instance_spec();
  test_modify_security_ips();
  test_pre_check_before_import_data();
  test_purge_db_instance_log();
  test_release_instance_public_connection();
  test_remove_tags_from_resource();
  test_reset_account_for_pg();
  test_reset_account_password();
  test_restart_db_instance();
  test_restore_db_instance();
  test_revoke_account_privilege();
  test_start_db_instance_diagnose();
  test_stop_syncing();
  test_switch_db_instance_net_type();
  test_unlock_db_instance();
  test_upgrade_db_instance_engine_version();
}
