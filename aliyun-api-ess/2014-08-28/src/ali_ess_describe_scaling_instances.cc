#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EssDescribeScalingInstancesScalingInstanceType* item);
void Json2Type(const Json::Value& value, EssDescribeScalingInstancesResponseType* item);

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
void Json2Type(const Json::Value& value, EssDescribeScalingInstancesScalingInstanceType* item) {
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("ScalingConfigurationId")) {
    item->scaling_configuration_id = value["ScalingConfigurationId"].asString();
  }
  if(value.isMember("ScalingGroupId")) {
    item->scaling_group_id = value["ScalingGroupId"].asString();
  }
  if(value.isMember("HealthStatus")) {
    item->health_status = value["HealthStatus"].asString();
  }
  if(value.isMember("LifecycleState")) {
    item->lifecycle_state = value["LifecycleState"].asString();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("CreationType")) {
    item->creation_type = value["CreationType"].asString();
  }
}
void Json2Type(const Json::Value& value, EssDescribeScalingInstancesResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ScalingInstances") && value["ScalingInstances"].isMember("ScalingInstance")) {
    Json2Array<EssDescribeScalingInstancesScalingInstanceType>(value["ScalingInstances"]["ScalingInstance"], &item->scaling_instances);
  }
}
}

int Ess::DescribeScalingInstances(const EssDescribeScalingInstancesRequestType& req,
                      EssDescribeScalingInstancesResponseType* response,
                       EssErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeScalingInstances");
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
  if(!req.scaling_configuration_id.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId", req.scaling_configuration_id);
  }
  if(!req.health_status.empty()) {
    req_rpc->AddRequestQuery("HealthStatus", req.health_status);
  }
  if(!req.lifecycle_state.empty()) {
    req_rpc->AddRequestQuery("LifecycleState", req.lifecycle_state);
  }
  if(!req.creation_type.empty()) {
    req_rpc->AddRequestQuery("CreationType", req.creation_type);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
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
