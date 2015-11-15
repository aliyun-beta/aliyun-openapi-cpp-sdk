#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ram.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RamSetPasswordPolicyPasswordPolicyType* item);
void Json2Type(const Json::Value& value, RamSetPasswordPolicyResponseType* item);

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
void Json2Type(const Json::Value& value, RamSetPasswordPolicyPasswordPolicyType* item) {
  if(value.isMember("MinimumPasswordLength")) {
    item->minimum_password_length = value["MinimumPasswordLength"].asInt();
  }
  if(value.isMember("RequireLowercaseCharacters")) {
    item->require_lowercase_characters = value["RequireLowercaseCharacters"].asBool();
  }
  if(value.isMember("RequireUppercaseCharacters")) {
    item->require_uppercase_characters = value["RequireUppercaseCharacters"].asBool();
  }
  if(value.isMember("RequireNumbers")) {
    item->require_numbers = value["RequireNumbers"].asBool();
  }
  if(value.isMember("RequireSymbols")) {
    item->require_symbols = value["RequireSymbols"].asBool();
  }
}
void Json2Type(const Json::Value& value, RamSetPasswordPolicyResponseType* item) {
  if(value.isMember("PasswordPolicy")) {
    Json2Type(value["PasswordPolicy"], &item->password_policy);
  }
}
}

int Ram::SetPasswordPolicy(const RamSetPasswordPolicyRequestType& req,
                      RamSetPasswordPolicyResponseType* response,
                       RamErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","SetPasswordPolicy");
  if(!req.minimum_password_length.empty()) {
    req_rpc->AddRequestQuery("MinimumPasswordLength", req.minimum_password_length);
  }
  if(!req.require_lowercase_characters.empty()) {
    req_rpc->AddRequestQuery("RequireLowercaseCharacters", req.require_lowercase_characters);
  }
  if(!req.require_uppercase_characters.empty()) {
    req_rpc->AddRequestQuery("RequireUppercaseCharacters", req.require_uppercase_characters);
  }
  if(!req.require_numbers.empty()) {
    req_rpc->AddRequestQuery("RequireNumbers", req.require_numbers);
  }
  if(!req.require_symbols.empty()) {
    req_rpc->AddRequestQuery("RequireSymbols", req.require_symbols);
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
