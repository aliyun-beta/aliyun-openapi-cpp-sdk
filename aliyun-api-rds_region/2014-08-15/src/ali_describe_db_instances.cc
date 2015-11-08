#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rds_region.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeDBInstancesReadOnlyDBInstanceIdType* item);
void Json2Type(const Json::Value& value, DescribeDBInstancesDBInstanceType* item);
void Json2Type(const Json::Value& value, DescribeDBInstancesResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeDBInstancesReadOnlyDBInstanceIdType* item) {
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstancesDBInstanceType* item) {
  if(value.isMember("InsId")) {
    item->ins_id = value["InsId"].asInt();
  }
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("DBInstanceDescription")) {
    item->db_instance_description = value["DBInstanceDescription"].asString();
  }
  if(value.isMember("PayType")) {
    item->pay_type = value["PayType"].asString();
  }
  if(value.isMember("DBInstanceType")) {
    item->db_instance_type = value["DBInstanceType"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("ExpireTime")) {
    item->expire_time = value["ExpireTime"].asString();
  }
  if(value.isMember("DBInstanceStatus")) {
    item->db_instance_status = value["DBInstanceStatus"].asString();
  }
  if(value.isMember("Engine")) {
    item->engine = value["Engine"].asString();
  }
  if(value.isMember("DBInstanceNetType")) {
    item->db_instance_net_type = value["DBInstanceNetType"].asString();
  }
  if(value.isMember("ConnectionMode")) {
    item->connection_mode = value["ConnectionMode"].asString();
  }
  if(value.isMember("LockMode")) {
    item->lock_mode = value["LockMode"].asString();
  }
  if(value.isMember("InstanceNetworkType")) {
    item->instance_network_type = value["InstanceNetworkType"].asString();
  }
  if(value.isMember("LockReason")) {
    item->lock_reason = value["LockReason"].asString();
  }
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
  }
  if(value.isMember("MutriORsignle")) {
    item->mutri_orsignle = value["MutriORsignle"].asBool();
  }
  if(value.isMember("CreateTime")) {
    item->create_time = value["CreateTime"].asString();
  }
  if(value.isMember("EngineVersion")) {
    item->engine_version = value["EngineVersion"].asString();
  }
  if(value.isMember("GuardDBInstanceId")) {
    item->guard_db_instance_id = value["GuardDBInstanceId"].asString();
  }
  if(value.isMember("TempDBInstanceId")) {
    item->temp_db_instance_id = value["TempDBInstanceId"].asString();
  }
  if(value.isMember("MasterInstanceId")) {
    item->master_instance_id = value["MasterInstanceId"].asString();
  }
  if(value.isMember("VpcId")) {
    item->vpc_id = value["VpcId"].asString();
  }
  if(value.isMember("ReadOnlyDBInstanceIds") && value["ReadOnlyDBInstanceIds"].isMember("ReadOnlyDBInstanceId")) {
    Json2Array<DescribeDBInstancesReadOnlyDBInstanceIdType>(value["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"], &item->read_only_db_instance_ids);
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstancesResponseType* item) {
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asInt();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asInt();
  }
  if(value.isMember("Items") && value["Items"].isMember("DBInstance")) {
    Json2Array<DescribeDBInstancesDBInstanceType>(value["Items"]["DBInstance"], &item->items);
  }
}
}

int RdsRegion::DescribeDBInstances(const DescribeDBInstancesRequestType& req,
                      DescribeDBInstancesResponseType* response,
                       AliRdsRegionErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeDBInstances");
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
  if(!req.proxy_id.empty()) {
    req_rpc->AddRequestQuery("proxyId", req.proxy_id);
  }
  if(!req.engine.empty()) {
    req_rpc->AddRequestQuery("Engine", req.engine);
  }
  if(!req.db_instance_status.empty()) {
    req_rpc->AddRequestQuery("DBInstanceStatus", req.db_instance_status);
  }
  if(!req.search_key.empty()) {
    req_rpc->AddRequestQuery("SearchKey", req.search_key);
  }
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.db_instance_type.empty()) {
    req_rpc->AddRequestQuery("DBInstanceType", req.db_instance_type);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.instance_network_type.empty()) {
    req_rpc->AddRequestQuery("InstanceNetworkType", req.instance_network_type);
  }
  if(!req.connection_mode.empty()) {
    req_rpc->AddRequestQuery("ConnectionMode", req.connection_mode);
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
  if(status_code!= 200 && error_info && !parse_success) {
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
