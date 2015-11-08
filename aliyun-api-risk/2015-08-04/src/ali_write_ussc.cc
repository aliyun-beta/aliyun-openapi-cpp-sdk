#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_risk.h"
#include "Json/Value.h"
#include "Json/Reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, WriteUsscResponseType* item);

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
void Json2Type(const Json::Value& value, WriteUsscResponseType* item) {
  if(value.isMember("Code")) {
    item->code = value["Code"].asString();
  }
}
}

int Risk::WriteUssc(const WriteUsscRequestType& req,
                      WriteUsscResponseType* response,
                       AliRiskErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","WriteUssc");
  if(!req.app_key.empty()) {
    req_rpc->AddRequestQuery("AppKey", req.app_key);
  }
  if(!req.sign_time.empty()) {
    req_rpc->AddRequestQuery("SignTime", req.sign_time);
  }
  if(!req.sign.empty()) {
    req_rpc->AddRequestQuery("Sign", req.sign);
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
  if(!req.verify_result.empty()) {
    req_rpc->AddRequestQuery("VerifyResult", req.verify_result);
  }
  if(!req.umid_token.empty()) {
    req_rpc->AddRequestQuery("UmidToken", req.umid_token);
  }
  if(!req.collina.empty()) {
    req_rpc->AddRequestQuery("Collina", req.collina);
  }
  if(!req.ip.empty()) {
    req_rpc->AddRequestQuery("Ip", req.ip);
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
