#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_yundun.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, YundunWafLogWafLogType* item);
void Json2Type(const Json::Value& value, YundunWafLogResponseType* item);

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
void Json2Type(const Json::Value& value, YundunWafLogWafLogType* item) {
  if(value.isMember("SourceIp")) {
    item->source_ip = value["SourceIp"].asString();
  }
  if(value.isMember("Time")) {
    item->time = value["Time"].asString();
  }
  if(value.isMember("Url")) {
    item->url = value["Url"].asString();
  }
  if(value.isMember("Type")) {
    item->type = value["Type"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunWafLogResponseType* item) {
  if(value.isMember("WebAttack")) {
    item->web_attack = value["WebAttack"].asInt();
  }
  if(value.isMember("NewWafUser")) {
    item->new_waf_user = value["NewWafUser"].asBool();
  }
  if(value.isMember("WafOpened")) {
    item->waf_opened = value["WafOpened"].asBool();
  }
  if(value.isMember("InWhiteList")) {
    item->in_white_list = value["InWhiteList"].asBool();
  }
  if(value.isMember("DomainCount")) {
    item->domain_count = value["DomainCount"].asInt();
  }
  if(value.isMember("StartTime")) {
    item->start_time = value["StartTime"].asString();
  }
  if(value.isMember("EndTime")) {
    item->end_time = value["EndTime"].asString();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("LogList") && value["LogList"].isMember("WafLog")) {
    Json2Array<YundunWafLogWafLogType>(value["LogList"]["WafLog"], &item->log_list);
  }
}
}

int Yundun::WafLog(const YundunWafLogRequestType& req,
                      YundunWafLogResponseType* response,
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
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","WafLog");
  if(!req.jst_owner_id.empty()) {
    req_rpc->AddRequestQuery("JstOwnerId", req.jst_owner_id);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.instance_id.empty()) {
    req_rpc->AddRequestQuery("InstanceId", req.instance_id);
  }
  if(!req.instance_type.empty()) {
    req_rpc->AddRequestQuery("InstanceType", req.instance_type);
  }
  if(!this->region_id_.empty()) {
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
