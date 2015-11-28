#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ocs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OcsCreateInstanceResponseType* item);

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
void Json2Type(const Json::Value& value, OcsCreateInstanceResponseType* item) {
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
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
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
  if(value.isMember("NetworkType")) {
    item->network_type = value["NetworkType"].asString();
  }
  if(value.isMember("PrivateIpAddress")) {
    item->private_ip_address = value["PrivateIpAddress"].asString();
  }
}
}

int Ocs::CreateInstance(const OcsCreateInstanceRequestType& req,
                      OcsCreateInstanceResponseType* response,
                       OcsErrorInfo* error_info) {
  std::string str_response;
  int status_code;
  int ret = 0;
  bool parse_success = false;
  std::string secheme = this->use_tls_ ? "https" : "http";
  AliRpcRequest* req_rpc = new AliRpcRequest(version_,
                         appid_,
                         secret_,
                         secheme + "://" + host_);
  if((!this->use_tls_) && this->proxy_host_ && this->proxy_host_[0]) {
    req_rpc->SetHttpProxy( this->proxy_host_);
  }
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","CreateInstance");
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
  if(!req.password.empty()) {
    req_rpc->AddRequestQuery("Password", req.password);
  }
  if(!req.capacity.empty()) {
    req_rpc->AddRequestQuery("Capacity", req.capacity);
  }
  if(!req.instance_name.empty()) {
    req_rpc->AddRequestQuery("InstanceName", req.instance_name);
  }
  if(!req.zone_id.empty()) {
    req_rpc->AddRequestQuery("ZoneId", req.zone_id);
  }
  if(!req.network_type.empty()) {
    req_rpc->AddRequestQuery("NetworkType", req.network_type);
  }
  if(!req.vpc_id.empty()) {
    req_rpc->AddRequestQuery("VpcId", req.vpc_id);
  }
  if(!req.vswitch_id.empty()) {
    req_rpc->AddRequestQuery("VSwitchId", req.vswitch_id);
  }
  if(!req.private_ip_address.empty()) {
    req_rpc->AddRequestQuery("PrivateIpAddress", req.private_ip_address);
  }
  if(!req.token.empty()) {
    req_rpc->AddRequestQuery("Token", req.token);
  }
  if(this->region_id_ && this->region_id_[0]) {
    req_rpc->AddRequestQuery("RegionId", this->region_id_);
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
