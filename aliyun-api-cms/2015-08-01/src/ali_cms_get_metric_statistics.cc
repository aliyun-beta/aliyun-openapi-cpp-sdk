#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_cms.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CmsGetMetricStatisticsResponseType* item);

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
void Json2Type(const Json::Value& value, CmsGetMetricStatisticsResponseType* item) {
  if(value.isMember("NextToken")) {
    item->next_token = value["NextToken"].asString();
  }
  if(value.isMember("Code")) {
    item->code = value["Code"].asString();
  }
  if(value.isMember("Message")) {
    item->message = value["Message"].asString();
  }
  if(value.isMember("Datapoints")  && value["Datapoints"].isMember("Datapoint")) {
    Json2Array<std::string>(value["Datapoints"]["Datapoint"], &item->datapoints);
  }
}
}

int Cms::GetMetricStatistics(const CmsGetMetricStatisticsRequestType& req,
                      CmsGetMetricStatisticsResponseType* response,
                       CmsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","GetMetricStatistics");
  if(!req.namespace_.empty()) {
    req_rpc->AddRequestQuery("Namespace_", req.namespace_);
  }
  if(!req.metric_name.empty()) {
    req_rpc->AddRequestQuery("MetricName", req.metric_name);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.interval.empty()) {
    req_rpc->AddRequestQuery("Interval", req.interval);
  }
  if(!req.dimensions.empty()) {
    req_rpc->AddRequestQuery("Dimensions", req.dimensions);
  }
  if(!req.next_token.empty()) {
    req_rpc->AddRequestQuery("NextToken", req.next_token);
  }
  if(!req.length.empty()) {
    req_rpc->AddRequestQuery("Length", req.length);
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
