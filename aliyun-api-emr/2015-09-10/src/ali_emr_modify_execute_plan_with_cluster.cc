#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_emr.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EmrModifyExecutePlanWithClusterResponseType* item);

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
void Json2Type(const Json::Value& value, EmrModifyExecutePlanWithClusterResponseType* item) {
}
}

int Emr::ModifyExecutePlanWithCluster(const EmrModifyExecutePlanWithClusterRequestType& req,
                      EmrModifyExecutePlanWithClusterResponseType* response,
                       EmrErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","ModifyExecutePlanWithCluster");
  if(!req.cluster_name.empty()) {
    req_rpc->AddRequestQuery("ClusterName", req.cluster_name);
  }
  if(!req.zone_id.empty()) {
    req_rpc->AddRequestQuery("ZoneId", req.zone_id);
  }
  if(!req.log_enable.empty()) {
    req_rpc->AddRequestQuery("LogEnable", req.log_enable);
  }
  if(!req.log_path.empty()) {
    req_rpc->AddRequestQuery("LogPath", req.log_path);
  }
  if(!req.security_group.empty()) {
    req_rpc->AddRequestQuery("SecurityGroup", req.security_group);
  }
  if(!req.is_open_public_ip.empty()) {
    req_rpc->AddRequestQuery("IsOpenPublicIp", req.is_open_public_ip);
  }
  if(!req.security_group_name.empty()) {
    req_rpc->AddRequestQuery("SecurityGroupName", req.security_group_name);
  }
  if(!req.emr_ver.empty()) {
    req_rpc->AddRequestQuery("EmrVer", req.emr_ver);
  }
  if(!req.cluster_type.empty()) {
    req_rpc->AddRequestQuery("ClusterType", req.cluster_type);
  }
  if(!req.install.empty()) {
    req_rpc->AddRequestQuery("Install", req.install);
  }
  if(!req.master_index.empty()) {
    req_rpc->AddRequestQuery("MasterIndex", req.master_index);
  }
  if(!req.ecs_order.empty()) {
    req_rpc->AddRequestQuery("EcsOrder", req.ecs_order);
  }
  if(!req.emr_role4_ec_s.empty()) {
    req_rpc->AddRequestQuery("EmrRole4ECS", req.emr_role4_ec_s);
  }
  if(!req.emr_role4_oss.empty()) {
    req_rpc->AddRequestQuery("EmrRole4Oss", req.emr_role4_oss);
  }
  if(!req.pay_type.empty()) {
    req_rpc->AddRequestQuery("PayType", req.pay_type);
  }
  if(!req.period.empty()) {
    req_rpc->AddRequestQuery("Period", req.period);
  }
  if(!req.execute_plan_id.empty()) {
    req_rpc->AddRequestQuery("ExecutePlanId", req.execute_plan_id);
  }
  if(!req.name.empty()) {
    req_rpc->AddRequestQuery("Name", req.name);
  }
  if(!req.strategy.empty()) {
    req_rpc->AddRequestQuery("Strategy", req.strategy);
  }
  if(!req.time_interval.empty()) {
    req_rpc->AddRequestQuery("TimeInterval", req.time_interval);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.time_unit.empty()) {
    req_rpc->AddRequestQuery("TimeUnit", req.time_unit);
  }
  if(!req.job_id.empty()) {
    req_rpc->AddRequestQuery("JobId", req.job_id);
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
