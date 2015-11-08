#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ons.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OnsTrendClusterInputTpsStatsDataDoType* item);
void Json2Type(const Json::Value& value, OnsTrendClusterInputTpsDataType* item);
void Json2Type(const Json::Value& value, OnsTrendClusterInputTpsResponseType* item);

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
void Json2Type(const Json::Value& value, OnsTrendClusterInputTpsStatsDataDoType* item) {
  if(value.isMember("X")) {
    item->x = value["X"].asInt();
  }
  if(value.isMember("Y")) {
    item->y = value["Y"].asFloat();
  }
}
void Json2Type(const Json::Value& value, OnsTrendClusterInputTpsDataType* item) {
  if(value.isMember("Title")) {
    item->title = value["Title"].asString();
  }
  if(value.isMember("XUnit")) {
    item->xunit = value["XUnit"].asString();
  }
  if(value.isMember("YUnit")) {
    item->yunit = value["YUnit"].asString();
  }
  if(value.isMember("Records") && value["Records"].isMember("StatsDataDo")) {
    Json2Array<OnsTrendClusterInputTpsStatsDataDoType>(value["Records"]["StatsDataDo"], &item->records);
  }
}
void Json2Type(const Json::Value& value, OnsTrendClusterInputTpsResponseType* item) {
  if(value.isMember("HelpUrl")) {
    item->help_url = value["HelpUrl"].asString();
  }
  if(value.isMember("Data")) {
    Json2Type(value["Data"], &item->data);
  }
}
}

int Ons::OnsTrendClusterInputTps(const OnsTrendClusterInputTpsRequestType& req,
                      OnsTrendClusterInputTpsResponseType* response,
                       AliOnsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","OnsTrendClusterInputTps");
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
  if(!req.begin_time.empty()) {
    req_rpc->AddRequestQuery("BeginTime", req.begin_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.period.empty()) {
    req_rpc->AddRequestQuery("Period", req.period);
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
