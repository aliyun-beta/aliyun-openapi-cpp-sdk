#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_slb.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeListenerPortAndProtocalType* item);
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeListenerPortAndProtocolType* item);
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
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeListenerPortAndProtocalType* item) {
  if(value.isMember("ListenerPort")) {
    item->listener_port = value["ListenerPort"].asInt();
  }
  if(value.isMember("ListenerProtocal")) {
    item->listener_protocal = value["ListenerProtocal"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeLoadBalancerAttributeListenerPortAndProtocolType* item) {
  if(value.isMember("ListenerPort")) {
    item->listener_port = value["ListenerPort"].asInt();
  }
  if(value.isMember("ListenerProtocol")) {
    item->listener_protocol = value["ListenerProtocol"].asString();
  }
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
  if(value.isMember("RegionIdAlias")) {
    item->region_id_alias = value["RegionIdAlias"].asString();
  }
  if(value.isMember("Address")) {
    item->address = value["Address"].asString();
  }
  if(value.isMember("AddressType")) {
    item->address_type = value["AddressType"].asString();
  }
  if(value.isMember("VpcId")) {
    item->vpc_id = value["VpcId"].asString();
  }
  if(value.isMember("VSwitchId")) {
    item->vswitch_id = value["VSwitchId"].asString();
  }
  if(value.isMember("NetworkType")) {
    item->network_type = value["NetworkType"].asString();
  }
  if(value.isMember("InternetChargeType")) {
    item->internet_charge_type = value["InternetChargeType"].asString();
  }
  if(value.isMember("Bandwidth")) {
    item->bandwidth = value["Bandwidth"].asInt();
  }
  if(value.isMember("SysBandwidth")) {
    item->sys_bandwidth = value["SysBandwidth"].asInt();
  }
  if(value.isMember("CreateTime")) {
    item->create_time = value["CreateTime"].asString();
  }
  if(value.isMember("CreateTimeStamp")) {
    item->create_time_stamp = value["CreateTimeStamp"].asInt();
  }
  if(value.isMember("MasterZoneId")) {
    item->master_zone_id = value["MasterZoneId"].asString();
  }
  if(value.isMember("SlaveZoneId")) {
    item->slave_zone_id = value["SlaveZoneId"].asString();
  }
  if(value.isMember("MaxConnLimit")) {
    item->max_conn_limit = value["MaxConnLimit"].asInt();
  }
  if(value.isMember("SecurityStatus")) {
    item->security_status = value["SecurityStatus"].asString();
  }
  if(value.isMember("ListenerPortsAndProtocal") && value["ListenerPortsAndProtocal"].isMember("ListenerPortAndProtocal")) {
    Json2Array<DescribeLoadBalancerAttributeListenerPortAndProtocalType>(value["ListenerPortsAndProtocal"]["ListenerPortAndProtocal"], &item->listener_ports_and_protocal);
  }
  if(value.isMember("ListenerPortsAndProtocol") && value["ListenerPortsAndProtocol"].isMember("ListenerPortAndProtocol")) {
    Json2Array<DescribeLoadBalancerAttributeListenerPortAndProtocolType>(value["ListenerPortsAndProtocol"]["ListenerPortAndProtocol"], &item->listener_ports_and_protocol);
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
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.load_balancer_id.empty()) {
    req_rpc->AddRequestQuery("LoadBalancerId", req.load_balancer_id);
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
