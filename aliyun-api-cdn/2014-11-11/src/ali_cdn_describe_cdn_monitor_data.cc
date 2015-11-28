#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_cdn.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CdnDescribeCdnMonitorDataCDNMonitorDataType* item);
void Json2Type(const Json::Value& value, CdnDescribeCdnMonitorDataResponseType* item);

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
void Json2Type(const Json::Value& value, CdnDescribeCdnMonitorDataCDNMonitorDataType* item) {
  if(value.isMember("TimeStamp")) {
    item->time_stamp = value["TimeStamp"].asString();
  }
  if(value.isMember("QueryPerSecond")) {
    item->query_per_second = value["QueryPerSecond"].asString();
  }
  if(value.isMember("BytesPerSecond")) {
    item->bytes_per_second = value["BytesPerSecond"].asString();
  }
  if(value.isMember("BytesHitRate")) {
    item->bytes_hit_rate = value["BytesHitRate"].asString();
  }
  if(value.isMember("RequestHitRate")) {
    item->request_hit_rate = value["RequestHitRate"].asString();
  }
  if(value.isMember("AverageObjectSize")) {
    item->average_object_size = value["AverageObjectSize"].asString();
  }
}
void Json2Type(const Json::Value& value, CdnDescribeCdnMonitorDataResponseType* item) {
  if(value.isMember("DomainName")) {
    item->domain_name = value["DomainName"].asString();
  }
  if(value.isMember("MonitorInterval")) {
    item->monitor_interval = value["MonitorInterval"].asInt();
  }
  if(value.isMember("StartTime")) {
    item->start_time = value["StartTime"].asString();
  }
  if(value.isMember("EndTime")) {
    item->end_time = value["EndTime"].asString();
  }
  if(value.isMember("MonitorDatas") && value["MonitorDatas"].isMember("CDNMonitorData")) {
    Json2Array<CdnDescribeCdnMonitorDataCDNMonitorDataType>(value["MonitorDatas"]["CDNMonitorData"], &item->monitor_datas);
  }
}
}

int Cdn::DescribeCdnMonitorData(const CdnDescribeCdnMonitorDataRequestType& req,
                      CdnDescribeCdnMonitorDataResponseType* response,
                       CdnErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeCdnMonitorData");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.domain_name.empty()) {
    req_rpc->AddRequestQuery("DomainName", req.domain_name);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
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
