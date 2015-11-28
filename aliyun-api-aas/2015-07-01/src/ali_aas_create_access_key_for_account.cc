#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_aas.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, AasCreateAccessKeyForAccountAccessKeyType* item);
void Json2Type(const Json::Value& value, AasCreateAccessKeyForAccountResponseType* item);

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
void Json2Type(const Json::Value& value, AasCreateAccessKeyForAccountAccessKeyType* item) {
  if(value.isMember("CreateTime")) {
    item->create_time = value["CreateTime"].asString();
  }
  if(value.isMember("AccessKeyId")) {
    item->access_key_id = value["AccessKeyId"].asString();
  }
  if(value.isMember("AccessKeySecret")) {
    item->access_key_secret = value["AccessKeySecret"].asString();
  }
  if(value.isMember("AccessKeyStatus")) {
    item->access_key_status = value["AccessKeyStatus"].asString();
  }
  if(value.isMember("AccessKeyType")) {
    item->access_key_type = value["AccessKeyType"].asString();
  }
}
void Json2Type(const Json::Value& value, AasCreateAccessKeyForAccountResponseType* item) {
  if(value.isMember("PK")) {
    item->pk = value["PK"].asString();
  }
  if(value.isMember("AccessKey")) {
    Json2Type(value["AccessKey"], &item->access_key);
  }
}
}

int Aas::CreateAccessKeyForAccount(const AasCreateAccessKeyForAccountRequestType& req,
                      AasCreateAccessKeyForAccountResponseType* response,
                       AasErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","CreateAccessKeyForAccount");
  if(!req.pk.empty()) {
    req_rpc->AddRequestQuery("PK", req.pk);
  }
  if(!req.ak_secret.empty()) {
    req_rpc->AddRequestQuery("AKSecret", req.ak_secret);
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
