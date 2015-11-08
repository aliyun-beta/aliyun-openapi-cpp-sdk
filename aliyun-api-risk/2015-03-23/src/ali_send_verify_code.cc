#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_risk.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, SendVerifyCodeResponseType* item);

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
void Json2Type(const Json::Value& value, SendVerifyCodeResponseType* item) {
  if(value.isMember("Code")) {
    item->code = value["Code"].asString();
  }
}
}

int Risk::SendVerifyCode(const SendVerifyCodeRequestType& req,
                      SendVerifyCodeResponseType* response,
                       AliRiskErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","SendVerifyCode");
  if(!req.request_id.empty()) {
    req_rpc->AddRequestQuery("RequestId", req.request_id);
  }
  if(!req.mtee_code.empty()) {
    req_rpc->AddRequestQuery("MteeCode", req.mtee_code);
  }
  if(!req.code_type.empty()) {
    req_rpc->AddRequestQuery("CodeType", req.code_type);
  }
  if(!req.id_type.empty()) {
    req_rpc->AddRequestQuery("IdType", req.id_type);
  }
  if(!req.user_id.empty()) {
    req_rpc->AddRequestQuery("UserId", req.user_id);
  }
  if(!req.channel_type.empty()) {
    req_rpc->AddRequestQuery("ChannelType", req.channel_type);
  }
  if(!req.biz_id.empty()) {
    req_rpc->AddRequestQuery("BizId", req.biz_id);
  }
  if(!req.event_id.empty()) {
    req_rpc->AddRequestQuery("EventId", req.event_id);
  }
  if(!req.message_reiver.empty()) {
    req_rpc->AddRequestQuery("MessageReiver", req.message_reiver);
  }
  if(!req.time_interval.empty()) {
    req_rpc->AddRequestQuery("TimeInterval", req.time_interval);
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
