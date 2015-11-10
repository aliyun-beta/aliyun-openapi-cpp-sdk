#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ons.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OnsOnsClusterListBrokerInfoDataDoType* item);
void Json2Type(const Json::Value& value, OnsOnsClusterListClusterInfoDataDoType* item);
void Json2Type(const Json::Value& value, OnsOnsClusterListResponseType* item);

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
void Json2Type(const Json::Value& value, OnsOnsClusterListBrokerInfoDataDoType* item) {
  if(value.isMember("ClusterName")) {
    item->cluster_name = value["ClusterName"].asString();
  }
  if(value.isMember("BrokerName")) {
    item->broker_name = value["BrokerName"].asString();
  }
  if(value.isMember("BrokerId")) {
    item->broker_id = value["BrokerId"].asInt();
  }
  if(value.isMember("BrokerAddr")) {
    item->broker_addr = value["BrokerAddr"].asString();
  }
  if(value.isMember("BrokerIp")) {
    item->broker_ip = value["BrokerIp"].asString();
  }
  if(value.isMember("Version")) {
    item->version = value["Version"].asString();
  }
  if(value.isMember("InTPS")) {
    item->in_tp_s = value["InTPS"].asFloat();
  }
  if(value.isMember("OutTPS")) {
    item->out_tp_s = value["OutTPS"].asFloat();
  }
  if(value.isMember("InTotalYest")) {
    item->in_total_yest = value["InTotalYest"].asFloat();
  }
  if(value.isMember("OutTotalYest")) {
    item->out_total_yest = value["OutTotalYest"].asFloat();
  }
  if(value.isMember("InTotalToday")) {
    item->in_total_today = value["InTotalToday"].asFloat();
  }
  if(value.isMember("OutTotalToday")) {
    item->out_total_today = value["OutTotalToday"].asFloat();
  }
}
void Json2Type(const Json::Value& value, OnsOnsClusterListClusterInfoDataDoType* item) {
  if(value.isMember("ClusterName")) {
    item->cluster_name = value["ClusterName"].asString();
  }
  if(value.isMember("BrokerInfoList") && value["BrokerInfoList"].isMember("BrokerInfoDataDo")) {
    Json2Array<OnsOnsClusterListBrokerInfoDataDoType>(value["BrokerInfoList"]["BrokerInfoDataDo"], &item->broker_info_list);
  }
}
void Json2Type(const Json::Value& value, OnsOnsClusterListResponseType* item) {
  if(value.isMember("HelpUrl")) {
    item->help_url = value["HelpUrl"].asString();
  }
  if(value.isMember("Data") && value["Data"].isMember("ClusterInfoDataDo")) {
    Json2Array<OnsOnsClusterListClusterInfoDataDoType>(value["Data"]["ClusterInfoDataDo"], &item->data);
  }
}
}

int Ons::OnsClusterList(const OnsOnsClusterListRequestType& req,
                      OnsOnsClusterListResponseType* response,
                       OnsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","OnsClusterList");
  if(!req.ons_region_id.empty()) {
    req_rpc->AddRequestQuery("OnsRegionId", req.ons_region_id);
  }
  if(!req.ons_platform.empty()) {
    req_rpc->AddRequestQuery("OnsPlatform", req.ons_platform);
  }
  if(!req.prevent_cache.empty()) {
    req_rpc->AddRequestQuery("PreventCache", req.prevent_cache);
  }
  if(!req.cluster.empty()) {
    req_rpc->AddRequestQuery("Cluster", req.cluster);
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
