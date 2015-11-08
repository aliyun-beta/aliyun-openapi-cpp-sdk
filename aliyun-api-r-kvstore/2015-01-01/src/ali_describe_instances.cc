#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rkvstore.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeInstancesKVStoreInstanceType* item);
void Json2Type(const Json::Value& value, DescribeInstancesResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeInstancesKVStoreInstanceType* item) {
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("InstanceName")) {
    item->instance_name = value["InstanceName"].asString();
  }
  if(value.isMember("ConnectionDomain")) {
    item->connection_domain = value["ConnectionDomain"].asString();
  }
  if(value.isMember("Port")) {
    item->port = value["Port"].asInt();
  }
  if(value.isMember("UserName")) {
    item->user_name = value["UserName"].asString();
  }
  if(value.isMember("InstanceStatus")) {
    item->instance_status = value["InstanceStatus"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("Capacity")) {
    item->capacity = value["Capacity"].asInt();
  }
  if(value.isMember("QPS")) {
    item->qp_s = value["QPS"].asInt();
  }
  if(value.isMember("Bandwidth")) {
    item->bandwidth = value["Bandwidth"].asInt();
  }
  if(value.isMember("Connections")) {
    item->connections = value["Connections"].asInt();
  }
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
  }
  if(value.isMember("Config")) {
    item->config = value["Config"].asString();
  }
  if(value.isMember("ChargeType")) {
    item->charge_type = value["ChargeType"].asString();
  }
  if(value.isMember("CreateTime")) {
    item->create_time = value["CreateTime"].asString();
  }
  if(value.isMember("EndTime")) {
    item->end_time = value["EndTime"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeInstancesResponseType* item) {
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("Instances") && value["Instances"].isMember("KVStoreInstance")) {
    Json2Array<DescribeInstancesKVStoreInstanceType>(value["Instances"]["KVStoreInstance"], &item->instances);
  }
}
}

int Rkvstore::DescribeInstances(const DescribeInstancesRequestType& req,
                      DescribeInstancesResponseType* response,
                       AliRkvstoreErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeInstances");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(!req.instance_ids.empty()) {
    req_rpc->AddRequestQuery("InstanceIds", req.instance_ids);
  }
  if(!req.instance_status.empty()) {
    req_rpc->AddRequestQuery("InstanceStatus", req.instance_status);
  }
  if(!req.charge_type.empty()) {
    req_rpc->AddRequestQuery("ChargeType", req.charge_type);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
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
