#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rds.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeDBInstanceAttributeReadOnlyDBInstanceIdType* item);
void Json2Type(const Json::Value& value, DescribeDBInstanceAttributeDBInstanceAttributeType* item);
void Json2Type(const Json::Value& value, DescribeDBInstanceAttributeResponseType* item);

template<typename T>
class Json2Array {
public:
  Json2Array(const Json::Value& value, std::vector<T>* vec) {
    if(!value.isArray()) {
      return;
    }
    for(int i = 0; i < value.size(); i++) {
      T val;
      Json2Type(value[i], &val);
      vec->push_back(val);
    }
  }
};

void Json2Type(const Json::Value& value, std::string* item) {
  *item = value.asString();
}
void Json2Type(const Json::Value& value, DescribeDBInstanceAttributeReadOnlyDBInstanceIdType* item) {
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstanceAttributeDBInstanceAttributeType* item) {
  if(value.isMember("InsId")) {
    item->ins_id = value["InsId"].asInt();
  }
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("PayType")) {
    item->pay_type = value["PayType"].asString();
  }
  if(value.isMember("DBInstanceClassType")) {
    item->db_instance_class_type = value["DBInstanceClassType"].asString();
  }
  if(value.isMember("DBInstanceType")) {
    item->db_instance_type = value["DBInstanceType"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("ConnectionString")) {
    item->connection_string = value["ConnectionString"].asString();
  }
  if(value.isMember("Port")) {
    item->port = value["Port"].asString();
  }
  if(value.isMember("Engine")) {
    item->engine = value["Engine"].asString();
  }
  if(value.isMember("EngineVersion")) {
    item->engine_version = value["EngineVersion"].asString();
  }
  if(value.isMember("DBInstanceClass")) {
    item->db_instance_class = value["DBInstanceClass"].asString();
  }
  if(value.isMember("DBInstanceMemory")) {
    item->db_instance_memory = value["DBInstanceMemory"].asInt();
  }
  if(value.isMember("DBInstanceStorage")) {
    item->db_instance_storage = value["DBInstanceStorage"].asInt();
  }
  if(value.isMember("DBInstanceNetType")) {
    item->db_instance_net_type = value["DBInstanceNetType"].asString();
  }
  if(value.isMember("DBInstanceStatus")) {
    item->db_instance_status = value["DBInstanceStatus"].asString();
  }
  if(value.isMember("DBInstanceDescription")) {
    item->db_instance_description = value["DBInstanceDescription"].asString();
  }
  if(value.isMember("LockMode")) {
    item->lock_mode = value["LockMode"].asString();
  }
  if(value.isMember("LockReason")) {
    item->lock_reason = value["LockReason"].asString();
  }
  if(value.isMember("ReadDelayTime")) {
    item->read_delay_time = value["ReadDelayTime"].asString();
  }
  if(value.isMember("DBMaxQuantity")) {
    item->db_max_quantity = value["DBMaxQuantity"].asInt();
  }
  if(value.isMember("AccountMaxQuantity")) {
    item->account_max_quantity = value["AccountMaxQuantity"].asInt();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("ExpireTime")) {
    item->expire_time = value["ExpireTime"].asString();
  }
  if(value.isMember("MaintainTime")) {
    item->maintain_time = value["MaintainTime"].asString();
  }
  if(value.isMember("AvailabilityValue")) {
    item->availability_value = value["AvailabilityValue"].asString();
  }
  if(value.isMember("MaxIOPS")) {
    item->max_io_ps = value["MaxIOPS"].asInt();
  }
  if(value.isMember("MaxConnections")) {
    item->max_connections = value["MaxConnections"].asInt();
  }
  if(value.isMember("MasterInstanceId")) {
    item->master_instance_id = value["MasterInstanceId"].asString();
  }
  if(value.isMember("IncrementSourceDBInstanceId")) {
    item->increment_source_db_instance_id = value["IncrementSourceDBInstanceId"].asString();
  }
  if(value.isMember("GuardDBInstanceId")) {
    item->guard_db_instance_id = value["GuardDBInstanceId"].asString();
  }
  if(value.isMember("TempDBInstanceId")) {
    item->temp_db_instance_id = value["TempDBInstanceId"].asString();
  }
  if(value.isMember("SecurityIPList")) {
    item->security_ip_list = value["SecurityIPList"].asString();
  }
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
  }
  if(value.isMember("InstanceNetworkType")) {
    item->instance_network_type = value["InstanceNetworkType"].asString();
  }
  if(value.isMember("VpcId")) {
    item->vpc_id = value["VpcId"].asString();
  }
  if(value.isMember("ConnectionMode")) {
    item->connection_mode = value["ConnectionMode"].asString();
  }
  if(value.isMember("ReadOnlyDBInstanceIds") && value["ReadOnlyDBInstanceIds"].isMember("ReadOnlyDBInstanceId")) {
    Json2Array<DescribeDBInstanceAttributeReadOnlyDBInstanceIdType>(value["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"], &item->read_only_db_instance_ids);
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstanceAttributeResponseType* item) {
  if(value.isMember("Items") && value["Items"].isMember("DBInstanceAttribute")) {
    Json2Array<DescribeDBInstanceAttributeDBInstanceAttributeType>(value["Items"]["DBInstanceAttribute"], &item->items);
  }
}
}

int Rds::DescribeDBInstanceAttribute(const DescribeDBInstanceAttributeRequestType& req,
                      DescribeDBInstanceAttributeResponseType* response,
                       AliRdsErrorInfo* error_info) {
  std::string str_response;
  int status_code;
  int ret = 0;
  bool parse_success = false;
  AliRpcRequest* req_rpc = new AliRpcRequest(version_,
                         appid_,
                         secret_,
                         "https://" + host_);
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","DescribeDBInstanceAttribute");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.client_token.empty()) {
    req_rpc->AddRequestQuery("ClientToken", req.client_token);
  }
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(req_rpc->CommitRequest() != 0) {
     if(error_info) {
       error_info->code = "connect to host failed";
     }
     ret = -1;
     goto out;
  }
  status_code = req_rpc->WaitResponseHeaderComplete();
  req_rpc->ReadResponseBody(str_response);
  if(status_code > 0 && !str_response.empty()){
    parse_success = reader.parse(str_response, val);
  }
  if(!parse_success) {
    if(error_info) {
      error_info->code = "parse response failed";
    }
    ret = -1;
    goto out;
  }
  if(status_code!= 200 && error_info && parse_success) {
    error_info->request_id = val.isMember("RequestId") ? val["RequestId"].asString(): "";
    error_info->code = val.isMember("Code") ? val["Code"].asString(): "";
    error_info->host_id = val.isMember("HostId") ? val["HostId"].asString(): "";
    error_info->message = val.isMember("Message") ? val["Message"].asString(): "";
  }
  if(status_code== 200 && response) {
    Json2Type(val, response);
  }
  ret = status_code;
out:
  delete req_rpc;
  return ret;
}
