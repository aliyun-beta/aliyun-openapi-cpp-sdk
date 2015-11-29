#include "ali_rdsregion.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_add_tags_to_resource_response = "{}";
static int test_add_tags_to_resource() {
  RdsRegionAddTagsToResourceRequestType req;
  RdsRegionAddTagsToResourceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->AddTagsToResource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_allocate_instance_private_connection_response = "{}";
static int test_allocate_instance_private_connection() {
  RdsRegionAllocateInstancePrivateConnectionRequestType req;
  RdsRegionAllocateInstancePrivateConnectionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->AllocateInstancePrivateConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_allocate_instance_public_connection_response = "{}";
static int test_allocate_instance_public_connection() {
  RdsRegionAllocateInstancePublicConnectionRequestType req;
  RdsRegionAllocateInstancePublicConnectionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->AllocateInstancePublicConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_batch_grant_account_privilege_response = "{}";
static int test_batch_grant_account_privilege() {
  RdsRegionBatchGrantAccountPrivilegeRequestType req;
  RdsRegionBatchGrantAccountPrivilegeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->BatchGrantAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_batch_revoke_account_privilege_response = "{}";
static int test_batch_revoke_account_privilege() {
  RdsRegionBatchRevokeAccountPrivilegeRequestType req;
  RdsRegionBatchRevokeAccountPrivilegeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->BatchRevokeAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_cancel_import_response = "{}";
static int test_cancel_import() {
  RdsRegionCancelImportRequestType req;
  RdsRegionCancelImportResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_cancel_import_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.import_id = "ImportId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->CancelImport(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_check_account_name_available_response = "{}";
static int test_check_account_name_available() {
  RdsRegionCheckAccountNameAvailableRequestType req;
  RdsRegionCheckAccountNameAvailableResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CheckAccountNameAvailable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_check_db_name_available_response = "{}";
static int test_check_db_name_available() {
  RdsRegionCheckDBNameAvailableRequestType req;
  RdsRegionCheckDBNameAvailableResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CheckDBNameAvailable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_account_response = "{}";
static int test_create_account() {
  RdsRegionCreateAccountRequestType req;
  RdsRegionCreateAccountResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_account_for_inner_response = "{}";
static int test_create_account_for_inner() {
  RdsRegionCreateAccountForInnerRequestType req;
  RdsRegionCreateAccountForInnerResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateAccountForInner(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_backup_response = "{}";
static int test_create_backup() {
  RdsRegionCreateBackupRequestType req;
  RdsRegionCreateBackupResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateBackup(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_database_response = "{}";
static int test_create_database() {
  RdsRegionCreateDatabaseRequestType req;
  RdsRegionCreateDatabaseResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_database_for_inner_response = "{}";
static int test_create_database_for_inner() {
  RdsRegionCreateDatabaseForInnerRequestType req;
  RdsRegionCreateDatabaseForInnerResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateDatabaseForInner(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_db_instance_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_db_instance() {
  RdsRegionCreateDBInstanceRequestType req;
  RdsRegionCreateDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_db_instance_for_channel_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_db_instance_for_channel() {
  RdsRegionCreateDBInstanceForChannelRequestType req;
  RdsRegionCreateDBInstanceForChannelResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateDBInstanceForChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_db_instancefor_first_pay_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_db_instancefor_first_pay() {
  RdsRegionCreateDBInstanceforFirstPayRequestType req;
  RdsRegionCreateDBInstanceforFirstPayResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateDBInstanceforFirstPay(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_postpaid_db_instance_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_postpaid_db_instance() {
  RdsRegionCreatePostpaidDBInstanceRequestType req;
  RdsRegionCreatePostpaidDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreatePostpaidDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_postpaid_db_instance_for_channel_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_postpaid_db_instance_for_channel() {
  RdsRegionCreatePostpaidDBInstanceForChannelRequestType req;
  RdsRegionCreatePostpaidDBInstanceForChannelResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreatePostpaidDBInstanceForChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_read_only_db_instance_response = "{"
"  \"DBInstanceId\": \"DBInstanceId\","
"  \"OrderId\": \"OrderId\","
"  \"ConnectionString\": \"ConnectionString\","
"  \"Port\": \"Port\""
"}";
static int test_create_read_only_db_instance() {
  RdsRegionCreateReadOnlyDBInstanceRequestType req;
  RdsRegionCreateReadOnlyDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateReadOnlyDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_create_temp_db_instance_response = "{"
"  \"TempDBInstanceId\": \"TempDBInstanceId\""
"}";
static int test_create_temp_db_instance() {
  RdsRegionCreateTempDBInstanceRequestType req;
  RdsRegionCreateTempDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->CreateTempDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionCreateUploadPathForSQLServerRequestType req;
  RdsRegionCreateUploadPathForSQLServerResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_upload_path_for_sq_lserver_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->CreateUploadPathForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_delete_account_response = "{}";
static int test_delete_account() {
  RdsRegionDeleteAccountRequestType req;
  RdsRegionDeleteAccountResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_account_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DeleteAccount(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_delete_database_response = "{}";
static int test_delete_database() {
  RdsRegionDeleteDatabaseRequestType req;
  RdsRegionDeleteDatabaseResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_database_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.db_name = "DBName";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DeleteDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_delete_db_instance_response = "{}";
static int test_delete_db_instance() {
  RdsRegionDeleteDBInstanceRequestType req;
  RdsRegionDeleteDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DeleteDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescibeImportsFromDatabaseRequestType req;
  RdsRegionDescibeImportsFromDatabaseResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescibeImportsFromDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeAbnormalDBInstancesRequestType req;
  RdsRegionDescribeAbnormalDBInstancesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeAbnormalDBInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeAccountsRequestType req;
  RdsRegionDescribeAccountsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_accounts_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.account_name = "AccountName";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeAccounts(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_describe_backup_policy_response = "{"
"  \"BackupRetentionPeriod\": 0,"
"  \"PreferredNextBackupTime\": \"PreferredNextBackupTime\","
"  \"PreferredBackupTime\": \"PreferredBackupTime\","
"  \"PreferredBackupPeriod\": \"PreferredBackupPeriod\""
"}";
static int test_describe_backup_policy() {
  RdsRegionDescribeBackupPolicyRequestType req;
  RdsRegionDescribeBackupPolicyResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_backup_policy_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeBackupPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeBackupsRequestType req;
  RdsRegionDescribeBackupsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeBackups(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeBackupTasksRequestType req;
  RdsRegionDescribeBackupTasksResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeBackupTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeBinlogFilesRequestType req;
  RdsRegionDescribeBinlogFilesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeBinlogFiles(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDatabasesRequestType req;
  RdsRegionDescribeDatabasesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDatabases(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstanceAttributeRequestType req;
  RdsRegionDescribeDBInstanceAttributeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_attribute_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeDBInstanceAttribute(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstanceIPArrayListRequestType req;
  RdsRegionDescribeDBInstanceIPArrayListResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_db_instance_ip_array_list_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeDBInstanceIPArrayList(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstanceNetInfoRequestType req;
  RdsRegionDescribeDBInstanceNetInfoResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDBInstanceNetInfo(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstanceNetInfoForChannelRequestType req;
  RdsRegionDescribeDBInstanceNetInfoForChannelResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDBInstanceNetInfoForChannel(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstancePerformanceRequestType req;
  RdsRegionDescribeDBInstancePerformanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDBInstancePerformance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
"        \"MutriORsignle\": true,"
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
  RdsRegionDescribeDBInstancesRequestType req;
  RdsRegionDescribeDBInstancesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDBInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstancesByExpireTimeRequestType req;
  RdsRegionDescribeDBInstancesByExpireTimeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDBInstancesByExpireTime(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeDBInstancesByPerformanceRequestType req;
  RdsRegionDescribeDBInstancesByPerformanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeDBInstancesByPerformance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeErrorLogsRequestType req;
  RdsRegionDescribeErrorLogsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeErrorLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeFilesForSQLServerRequestType req;
  RdsRegionDescribeFilesForSQLServerResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeFilesForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeImportsForSQLServerRequestType req;
  RdsRegionDescribeImportsForSQLServerResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeImportsForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeModifyParameterLogRequestType req;
  RdsRegionDescribeModifyParameterLogResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeModifyParameterLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOperationLogsRequestType req;
  RdsRegionDescribeOperationLogsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOperationLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOptimizeAdviceByDBARequestType req;
  RdsRegionDescribeOptimizeAdviceByDBAResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOptimizeAdviceByDBA(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOptimizeAdviceOnBigTableRequestType req;
  RdsRegionDescribeOptimizeAdviceOnBigTableResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOptimizeAdviceOnBigTable(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOptimizeAdviceOnExcessIndexRequestType req;
  RdsRegionDescribeOptimizeAdviceOnExcessIndexResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOptimizeAdviceOnExcessIndex(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOptimizeAdviceOnMissIndexRequestType req;
  RdsRegionDescribeOptimizeAdviceOnMissIndexResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOptimizeAdviceOnMissIndex(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOptimizeAdviceOnMissPKRequestType req;
  RdsRegionDescribeOptimizeAdviceOnMissPKResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOptimizeAdviceOnMissPK(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeOptimizeAdviceOnStorageRequestType req;
  RdsRegionDescribeOptimizeAdviceOnStorageResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeOptimizeAdviceOnStorage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeParametersRequestType req;
  RdsRegionDescribeParametersResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_parameters_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeParameters(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeParameterTemplatesRequestType req;
  RdsRegionDescribeParameterTemplatesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeParameterTemplates(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribePreCheckResultsRequestType req;
  RdsRegionDescribePreCheckResultsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribePreCheckResults(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeRealtimeDiagnosesRequestType req;
  RdsRegionDescribeRealtimeDiagnosesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeRealtimeDiagnoses(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeRegionsRequestType req;
  RdsRegionDescribeRegionsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_regions_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeRegions(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeResourceUsageRequestType req;
  RdsRegionDescribeResourceUsageResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_resource_usage_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->DescribeResourceUsage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeSlowLogRecordsRequestType req;
  RdsRegionDescribeSlowLogRecordsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeSlowLogRecords(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeSlowLogsRequestType req;
  RdsRegionDescribeSlowLogsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeSlowLogs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeSQLInjectionInfosRequestType req;
  RdsRegionDescribeSQLInjectionInfosResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeSQLInjectionInfos(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeSQLLogRecordsRequestType req;
  RdsRegionDescribeSQLLogRecordsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeSQLLogRecords(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeSQLLogReportsRequestType req;
  RdsRegionDescribeSQLLogReportsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeSQLLogReports(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
"        \"Status\": \"Status\""
"      }"
"    ]"
"  },"
"  \"TotalRecordCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageRecordCount\": 0"
"}";
static int test_describe_tasks() {
  RdsRegionDescribeTasksRequestType req;
  RdsRegionDescribeTasksResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
  RdsRegionDescribeVpcZoneNosRequestType req;
  RdsRegionDescribeVpcZoneNosResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->DescribeVpcZoneNos(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_extract_backup_from_oa_s_response = "{"
"  \"DataExtractionLastTime\": \"DataExtractionLastTime\""
"}";
static int test_extract_backup_from_oa_s() {
  RdsRegionExtractBackupFromOASRequestType req;
  RdsRegionExtractBackupFromOASResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ExtractBackupFromOAS(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_grant_account_privilege_response = "{}";
static int test_grant_account_privilege() {
  RdsRegionGrantAccountPrivilegeRequestType req;
  RdsRegionGrantAccountPrivilegeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->GrantAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_import_database_between_instances_response = "{"
"  \"ImportId\": \"ImportId\""
"}";
static int test_import_database_between_instances() {
  RdsRegionImportDatabaseBetweenInstancesRequestType req;
  RdsRegionImportDatabaseBetweenInstancesResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ImportDatabaseBetweenInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_import_data_for_sq_lserver_response = "{"
"  \"ImportID\": 0"
"}";
static int test_import_data_for_sq_lserver() {
  RdsRegionImportDataForSQLServerRequestType req;
  RdsRegionImportDataForSQLServerResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_import_data_for_sq_lserver_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.file_name = "FileName";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->ImportDataForSQLServer(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_import_data_from_database_response = "{"
"  \"ImportId\": 0"
"}";
static int test_import_data_from_database() {
  RdsRegionImportDataFromDatabaseRequestType req;
  RdsRegionImportDataFromDatabaseResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ImportDataFromDatabase(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_lock_db_instance_response = "{}";
static int test_lock_db_instance() {
  RdsRegionLockDBInstanceRequestType req;
  RdsRegionLockDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_lock_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.lock_reason = "LockReason";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->LockDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_migrate_to_other_zone_response = "{}";
static int test_migrate_to_other_zone() {
  RdsRegionMigrateToOtherZoneRequestType req;
  RdsRegionMigrateToOtherZoneResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_migrate_to_other_zone_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.zone_id = "ZoneId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->MigrateToOtherZone(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_account_description_response = "{}";
static int test_modify_account_description() {
  RdsRegionModifyAccountDescriptionRequestType req;
  RdsRegionModifyAccountDescriptionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyAccountDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_backup_policy_response = "{}";
static int test_modify_backup_policy() {
  RdsRegionModifyBackupPolicyRequestType req;
  RdsRegionModifyBackupPolicyResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyBackupPolicy(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_description_response = "{}";
static int test_modify_db_description() {
  RdsRegionModifyDBDescriptionRequestType req;
  RdsRegionModifyDBDescriptionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyDBDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_instance_connection_mode_response = "{}";
static int test_modify_db_instance_connection_mode() {
  RdsRegionModifyDBInstanceConnectionModeRequestType req;
  RdsRegionModifyDBInstanceConnectionModeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_db_instance_connection_mode_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.connection_mode = "ConnectionMode";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->ModifyDBInstanceConnectionMode(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_instance_connection_string_response = "{}";
static int test_modify_db_instance_connection_string() {
  RdsRegionModifyDBInstanceConnectionStringRequestType req;
  RdsRegionModifyDBInstanceConnectionStringResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyDBInstanceConnectionString(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_instance_description_response = "{}";
static int test_modify_db_instance_description() {
  RdsRegionModifyDBInstanceDescriptionRequestType req;
  RdsRegionModifyDBInstanceDescriptionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyDBInstanceDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_instance_maintain_time_response = "{}";
static int test_modify_db_instance_maintain_time() {
  RdsRegionModifyDBInstanceMaintainTimeRequestType req;
  RdsRegionModifyDBInstanceMaintainTimeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyDBInstanceMaintainTime(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_instance_network_type_response = "{}";
static int test_modify_db_instance_network_type() {
  RdsRegionModifyDBInstanceNetworkTypeRequestType req;
  RdsRegionModifyDBInstanceNetworkTypeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyDBInstanceNetworkType(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_db_instance_spec_response = "{}";
static int test_modify_db_instance_spec() {
  RdsRegionModifyDBInstanceSpecRequestType req;
  RdsRegionModifyDBInstanceSpecResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyDBInstanceSpec(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_parameter_response = "{}";
static int test_modify_parameter() {
  RdsRegionModifyParameterRequestType req;
  RdsRegionModifyParameterResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyParameter(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_postpaid_db_instance_spec_response = "{}";
static int test_modify_postpaid_db_instance_spec() {
  RdsRegionModifyPostpaidDBInstanceSpecRequestType req;
  RdsRegionModifyPostpaidDBInstanceSpecResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifyPostpaidDBInstanceSpec(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_modify_security_ips_response = "{}";
static int test_modify_security_ips() {
  RdsRegionModifySecurityIpsRequestType req;
  RdsRegionModifySecurityIpsResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ModifySecurityIps(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_pre_check_before_import_data_response = "{"
"  \"PreCheckId\": \"PreCheckId\""
"}";
static int test_pre_check_before_import_data() {
  RdsRegionPreCheckBeforeImportDataRequestType req;
  RdsRegionPreCheckBeforeImportDataResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->PreCheckBeforeImportData(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_purge_db_instance_log_response = "{}";
static int test_purge_db_instance_log() {
  RdsRegionPurgeDBInstanceLogRequestType req;
  RdsRegionPurgeDBInstanceLogResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_purge_db_instance_log_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->PurgeDBInstanceLog(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_release_instance_public_connection_response = "{}";
static int test_release_instance_public_connection() {
  RdsRegionReleaseInstancePublicConnectionRequestType req;
  RdsRegionReleaseInstancePublicConnectionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_release_instance_public_connection_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.current_connection_string = "CurrentConnectionString";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->ReleaseInstancePublicConnection(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_remove_tags_from_resource_response = "{}";
static int test_remove_tags_from_resource() {
  RdsRegionRemoveTagsFromResourceRequestType req;
  RdsRegionRemoveTagsFromResourceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->RemoveTagsFromResource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_reset_account_for_pg_response = "{}";
static int test_reset_account_for_pg() {
  RdsRegionResetAccountForPGRequestType req;
  RdsRegionResetAccountForPGResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ResetAccountForPG(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_reset_account_password_response = "{}";
static int test_reset_account_password() {
  RdsRegionResetAccountPasswordRequestType req;
  RdsRegionResetAccountPasswordResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->ResetAccountPassword(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_restart_db_instance_response = "{}";
static int test_restart_db_instance() {
  RdsRegionRestartDBInstanceRequestType req;
  RdsRegionRestartDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_restart_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.client_token = "ClientToken";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->RestartDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_restore_db_instance_response = "{}";
static int test_restore_db_instance() {
  RdsRegionRestoreDBInstanceRequestType req;
  RdsRegionRestoreDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->RestoreDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_revoke_account_privilege_response = "{}";
static int test_revoke_account_privilege() {
  RdsRegionRevokeAccountPrivilegeRequestType req;
  RdsRegionRevokeAccountPrivilegeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->RevokeAccountPrivilege(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_start_db_instance_diagnose_response = "{"
"  \"DBInstanceName\": \"DBInstanceName\","
"  \"DBInstanceId\": \"DBInstanceId\""
"}";
static int test_start_db_instance_diagnose() {
  RdsRegionStartDBInstanceDiagnoseRequestType req;
  RdsRegionStartDBInstanceDiagnoseResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->StartDBInstanceDiagnose(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_stop_syncing_response = "{}";
static int test_stop_syncing() {
  RdsRegionStopSyncingRequestType req;
  RdsRegionStopSyncingResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->StopSyncing(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_switch_db_instance_net_type_response = "{}";
static int test_switch_db_instance_net_type() {
  RdsRegionSwitchDBInstanceNetTypeRequestType req;
  RdsRegionSwitchDBInstanceNetTypeResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->SwitchDBInstanceNetType(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_unlock_db_instance_response = "{}";
static int test_unlock_db_instance() {
  RdsRegionUnlockDBInstanceRequestType req;
  RdsRegionUnlockDBInstanceResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_unlock_db_instance_response);
  listener->Start();
  req.owner_id = "OwnerId";
  req.resource_owner_account = "ResourceOwnerAccount";
  req.resource_owner_id = "ResourceOwnerId";
  req.db_instance_id = "DBInstanceId";
  req.owner_account = "OwnerAccount";
  int ret = rdsregion->UnlockDBInstance(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
}
static const char* test_upgrade_db_instance_engine_version_response = "{"
"  \"TaskId\": \"TaskId\""
"}";
static int test_upgrade_db_instance_engine_version() {
  RdsRegionUpgradeDBInstanceEngineVersionRequestType req;
  RdsRegionUpgradeDBInstanceEngineVersionResponseType resp;
  RdsRegion* rdsregion = RdsRegion::CreateRdsRegionClient("cn-hangzhou", "my_appid", "my_secret");
  if(!rdsregion) return 0;
  rdsregion->SetProxyHost("127.0.0.1:12234");
  rdsregion->SetUseTls(false);
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
  int ret = rdsregion->UpgradeDBInstanceEngineVersion(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete rdsregion;
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
