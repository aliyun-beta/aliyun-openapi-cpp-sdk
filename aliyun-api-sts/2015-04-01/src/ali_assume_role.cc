#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_sts.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, AssumeRoleCredentialsType* item);
void Json2Type(const Json::Value& value, AssumeRoleAssumedRoleUserType* item);
void Json2Type(const Json::Value& value, AssumeRoleResponseType* item);

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
void Json2Type(const Json::Value& value, AssumeRoleCredentialsType* item) {
  if(value.isMember("SecurityToken")) {
    item->security_token = value["SecurityToken"].asString();
  }
  if(value.isMember("AccessKeySecret")) {
    item->access_key_secret = value["AccessKeySecret"].asString();
  }
  if(value.isMember("AccessKeyId")) {
    item->access_key_id = value["AccessKeyId"].asString();
  }
  if(value.isMember("Expiration")) {
    item->expiration = value["Expiration"].asString();
  }
}
void Json2Type(const Json::Value& value, AssumeRoleAssumedRoleUserType* item) {
  if(value.isMember("Arn")) {
    item->arn = value["Arn"].asString();
  }
  if(value.isMember("AssumedRoleId")) {
    item->assumed_role_id = value["AssumedRoleId"].asString();
  }
}
void Json2Type(const Json::Value& value, AssumeRoleResponseType* item) {
  if(value.isMember("Credentials")) {
    Json2Type(value["Credentials"], &item->credentials);
  }
  if(value.isMember("AssumedRoleUser")) {
    Json2Type(value["AssumedRoleUser"], &item->assumed_role_user);
  }
}
}

int Sts::AssumeRole(const AssumeRoleRequestType& req,
                      AssumeRoleResponseType* response,
                       AliStsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","AssumeRole");
  if(!req.duration_seconds.empty()) {
    req_rpc->AddRequestQuery("DurationSeconds", req.duration_seconds);
  }
  if(!req.policy.empty()) {
    req_rpc->AddRequestQuery("Policy", req.policy);
  }
  if(!req.role_arn.empty()) {
    req_rpc->AddRequestQuery("RoleArn", req.role_arn);
  }
  if(!req.role_session_name.empty()) {
    req_rpc->AddRequestQuery("RoleSessionName", req.role_session_name);
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
  if(status_code!= 200 && error_info) {
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
