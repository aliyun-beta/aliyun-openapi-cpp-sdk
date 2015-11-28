#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_yundun.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, YundunQueryDdosConfigResponseType* item);

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
void Json2Type(const Json::Value& value, YundunQueryDdosConfigResponseType* item) {
  if(value.isMember("Bps")) {
    item->bps = value["Bps"].asInt();
  }
  if(value.isMember("Pps")) {
    item->pps = value["Pps"].asInt();
  }
  if(value.isMember("Qps")) {
    item->qps = value["Qps"].asInt();
  }
  if(value.isMember("Sipconn")) {
    item->sipconn = value["Sipconn"].asInt();
  }
  if(value.isMember("Sipnew")) {
    item->sipnew = value["Sipnew"].asInt();
  }
  if(value.isMember("Layer7Config")) {
    item->layer7_config = value["Layer7Config"].asBool();
  }
  if(value.isMember("FlowPosition")) {
    item->flow_position = value["FlowPosition"].asInt();
  }
  if(value.isMember("QpsPosition")) {
    item->qps_position = value["QpsPosition"].asInt();
  }
  if(value.isMember("StrategyPosition")) {
    item->strategy_position = value["StrategyPosition"].asInt();
  }
  if(value.isMember("Level")) {
    item->level = value["Level"].asInt();
  }
  if(value.isMember("HoleBps")) {
    item->hole_bps = value["HoleBps"].asString();
  }
  if(value.isMember("ConfigType")) {
    item->config_type = value["ConfigType"].asString();
  }
}
}

int Yundun::QueryDdosConfig(const YundunQueryDdosConfigRequestType& req,
                      YundunQueryDdosConfigResponseType* response,
                       YundunErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","QueryDdosConfig");
  if(!req.instance_id.empty()) {
    req_rpc->AddRequestQuery("InstanceId", req.instance_id);
  }
  if(!req.instance_type.empty()) {
    req_rpc->AddRequestQuery("InstanceType", req.instance_type);
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
