#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_cms.h"
#include "Json/Value.h"
#include "Json/Reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, QueryIncrementalResponseType* item);

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
void Json2Type(const Json::Value& value, QueryIncrementalResponseType* item) {
  if(value.isMember("Code")) {
    item->code = value["Code"].asString();
  }
  if(value.isMember("Message")) {
    item->message = value["Message"].asString();
  }
  if(value.isMember("Success")) {
    item->success = value["Success"].asString();
  }
  if(value.isMember("TraceId")) {
    item->trace_id = value["TraceId"].asString();
  }
  if(value.isMember("Datapoints")  && value["Datapoints"].isMember("Datapoint")) {
    Json2Array<std::string>(value["Datapoints"]["Datapoint"], &item->datapoints);
  }
}
}

int Cms::QueryIncremental(const QueryIncrementalRequestType& req,
                      QueryIncrementalResponseType* response,
                       AliCmsErrorInfo* error_info) {
  std::string str_response;
  int status_code;
  int ret = 0;
  bool parse_success = false;
  AliRpcRequest* req_rpc = new AliRpcRequest(version_,
                         appid_,
                         secret_,
                         "http://" + host_);
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","QueryIncremental");
  if(!req.project.empty()) {
    req_rpc->AddRequestQuery("Project", req.project);
  }
  if(!req.metric.empty()) {
    req_rpc->AddRequestQuery("Metric", req.metric);
  }
  if(!req.period.empty()) {
    req_rpc->AddRequestQuery("Period", req.period);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.dimensions.empty()) {
    req_rpc->AddRequestQuery("Dimensions", req.dimensions);
  }
  if(!req.target_period.empty()) {
    req_rpc->AddRequestQuery("TargetPeriod", req.target_period);
  }
  if(!req.columns.empty()) {
    req_rpc->AddRequestQuery("Columns", req.columns);
  }
  if(!req.extend.empty()) {
    req_rpc->AddRequestQuery("Extend", req.extend);
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
