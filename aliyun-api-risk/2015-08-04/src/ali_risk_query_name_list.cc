#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_risk.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RiskQueryNameListRiskNameType* item);
void Json2Type(const Json::Value& value, RiskQueryNameListResponseType* item);

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
void Json2Type(const Json::Value& value, RiskQueryNameListRiskNameType* item) {
  if(value.isMember("Type")) {
    item->type = value["Type"].asString();
  }
  if(value.isMember("DataType")) {
    item->data_type = value["DataType"].asString();
  }
  if(value.isMember("DataValue")) {
    item->data_value = value["DataValue"].asString();
  }
}
void Json2Type(const Json::Value& value, RiskQueryNameListResponseType* item) {
  if(value.isMember("Code")) {
    item->code = value["Code"].asString();
  }
  if(value.isMember("RiskNameLists") && value["RiskNameLists"].isMember("RiskName")) {
    Json2Array<RiskQueryNameListRiskNameType>(value["RiskNameLists"]["RiskName"], &item->risk_name_lists);
  }
}
}

int Risk::QueryNameList(const RiskQueryNameListRequestType& req,
                      RiskQueryNameListResponseType* response,
                       RiskErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","QueryNameList");
  if(!req.type.empty()) {
    req_rpc->AddRequestQuery("Type", req.type);
  }
  if(!req.data_type.empty()) {
    req_rpc->AddRequestQuery("DataType", req.data_type);
  }
  if(!req.data_value.empty()) {
    req_rpc->AddRequestQuery("DataValue", req.data_value);
  }
  if(!req.query_like.empty()) {
    req_rpc->AddRequestQuery("QueryLike", req.query_like);
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
