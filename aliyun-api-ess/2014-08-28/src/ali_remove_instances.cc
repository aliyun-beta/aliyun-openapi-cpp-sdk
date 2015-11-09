#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RemoveInstancesResponseType* item);

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
void Json2Type(const Json::Value& value, RemoveInstancesResponseType* item) {
  if(value.isMember("ScalingActivityId")) {
    item->scaling_activity_id = value["ScalingActivityId"].asString();
  }
}
}

int Ess::RemoveInstances(const RemoveInstancesRequestType& req,
                      RemoveInstancesResponseType* response,
                       AliEssErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","RemoveInstances");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.scaling_group_id.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId", req.scaling_group_id);
  }
  if(!req.instance_id1.empty()) {
    req_rpc->AddRequestQuery("InstanceId.1", req.instance_id1);
  }
  if(!req.instance_id2.empty()) {
    req_rpc->AddRequestQuery("InstanceId.2", req.instance_id2);
  }
  if(!req.instance_id3.empty()) {
    req_rpc->AddRequestQuery("InstanceId.3", req.instance_id3);
  }
  if(!req.instance_id4.empty()) {
    req_rpc->AddRequestQuery("InstanceId.4", req.instance_id4);
  }
  if(!req.instance_id5.empty()) {
    req_rpc->AddRequestQuery("InstanceId.5", req.instance_id5);
  }
  if(!req.instance_id6.empty()) {
    req_rpc->AddRequestQuery("InstanceId.6", req.instance_id6);
  }
  if(!req.instance_id7.empty()) {
    req_rpc->AddRequestQuery("InstanceId.7", req.instance_id7);
  }
  if(!req.instance_id8.empty()) {
    req_rpc->AddRequestQuery("InstanceId.8", req.instance_id8);
  }
  if(!req.instance_id9.empty()) {
    req_rpc->AddRequestQuery("InstanceId.9", req.instance_id9);
  }
  if(!req.instance_id10.empty()) {
    req_rpc->AddRequestQuery("InstanceId.10", req.instance_id10);
  }
  if(!req.instance_id11.empty()) {
    req_rpc->AddRequestQuery("InstanceId.11", req.instance_id11);
  }
  if(!req.instance_id12.empty()) {
    req_rpc->AddRequestQuery("InstanceId.12", req.instance_id12);
  }
  if(!req.instance_id13.empty()) {
    req_rpc->AddRequestQuery("InstanceId.13", req.instance_id13);
  }
  if(!req.instance_id14.empty()) {
    req_rpc->AddRequestQuery("InstanceId.14", req.instance_id14);
  }
  if(!req.instance_id15.empty()) {
    req_rpc->AddRequestQuery("InstanceId.15", req.instance_id15);
  }
  if(!req.instance_id16.empty()) {
    req_rpc->AddRequestQuery("InstanceId.16", req.instance_id16);
  }
  if(!req.instance_id17.empty()) {
    req_rpc->AddRequestQuery("InstanceId.17", req.instance_id17);
  }
  if(!req.instance_id18.empty()) {
    req_rpc->AddRequestQuery("InstanceId.18", req.instance_id18);
  }
  if(!req.instance_id19.empty()) {
    req_rpc->AddRequestQuery("InstanceId.19", req.instance_id19);
  }
  if(!req.instance_id20.empty()) {
    req_rpc->AddRequestQuery("InstanceId.20", req.instance_id20);
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
  if(status_code!= 200 && error_info) {
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
