#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_slb.h"
#include "Json/Value.h"
#include "Json/Reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeBackendServerType* item);
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeBackendServerType* item) {
  if(value.isMember("ServerId")) {
    item->server_id = value["ServerId"].asString();
  }
  if(value.isMember("Weight")) {
    item->weight = value["Weight"].asInt();
  }
}
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeResponseType* item) {
  if(value.isMember("LoadBalancerId")) {
    item->load_balancer_id = value["LoadBalancerId"].asString();
  }
  if(value.isMember("LoadBalancerName")) {
    item->load_balancer_name = value["LoadBalancerName"].asString();
  }
  if(value.isMember("LoadBalancerStatus")) {
    item->load_balancer_status = value["LoadBalancerStatus"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("Address")) {
    item->address = value["Address"].asString();
  }
  if(value.isMember("IsPublicAddress")) {
    item->is_public_address = value["IsPublicAddress"].asString();
  }
  if(value.isMember("BackendServers") && value["BackendServers"].isMember("BackendServer")) {
    Json2Array<DescribeLoadBalancerAttributeBackendServerType>(value["BackendServers"]["BackendServer"], &item->backend_servers);
  }
  if(value.isMember("ListenerPorts")  && value["ListenerPorts"].isMember("ListenerPort")) {
    Json2Array<std::string>(value["ListenerPorts"]["ListenerPort"], &item->listener_ports);
  }
}
}

int Slb::DescribeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequestType& req,
                      DescribeLoadBalancerAttributeResponseType* response,
                       AliSlbErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeLoadBalancerAttribute");
  if(!req.load_balancer_id.empty()) {
    req_rpc->AddRequestQuery("LoadBalancerId", req.load_balancer_id);
  }
  if(!req.host_id.empty()) {
    req_rpc->AddRequestQuery("HostId", req.host_id);
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
