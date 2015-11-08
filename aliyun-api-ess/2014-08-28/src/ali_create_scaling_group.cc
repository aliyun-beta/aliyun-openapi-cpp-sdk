#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CreateScalingGroupResponseType* item);

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
void Json2Type(const Json::Value& value, CreateScalingGroupResponseType* item) {
  if(value.isMember("ScalingGroupId")) {
    item->scaling_group_id = value["ScalingGroupId"].asString();
  }
}
}

int Ess::CreateScalingGroup(const CreateScalingGroupRequestType& req,
                      CreateScalingGroupResponseType* response,
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
  req_rpc->AddRequestQuery("Action","CreateScalingGroup");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.scaling_group_name.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName", req.scaling_group_name);
  }
  if(!req.min_size.empty()) {
    req_rpc->AddRequestQuery("MinSize", req.min_size);
  }
  if(!req.max_size.empty()) {
    req_rpc->AddRequestQuery("MaxSize", req.max_size);
  }
  if(!req.default_cooldown.empty()) {
    req_rpc->AddRequestQuery("DefaultCooldown", req.default_cooldown);
  }
  if(!req.load_balancer_id.empty()) {
    req_rpc->AddRequestQuery("LoadBalancerId", req.load_balancer_id);
  }
  if(!req.db_instance_id1.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId.1", req.db_instance_id1);
  }
  if(!req.db_instance_id2.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId.2", req.db_instance_id2);
  }
  if(!req.db_instance_id3.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId.3", req.db_instance_id3);
  }
  if(!req.removal_policy1.empty()) {
    req_rpc->AddRequestQuery("RemovalPolicy.1", req.removal_policy1);
  }
  if(!req.removal_policy2.empty()) {
    req_rpc->AddRequestQuery("RemovalPolicy.2", req.removal_policy2);
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
