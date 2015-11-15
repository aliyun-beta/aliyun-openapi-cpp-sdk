#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ubsms.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, UbsmsSetUserBusinessStatusesResponseType* item);

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
void Json2Type(const Json::Value& value, UbsmsSetUserBusinessStatusesResponseType* item) {
  if(value.isMember("Success")) {
    item->success = value["Success"].asBool();
  }
}
}

int Ubsms::SetUserBusinessStatuses(const UbsmsSetUserBusinessStatusesRequestType& req,
                      UbsmsSetUserBusinessStatusesResponseType* response,
                       UbsmsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","SetUserBusinessStatuses");
  if(!req.uid.empty()) {
    req_rpc->AddRequestQuery("Uid", req.uid);
  }
  if(!req.service_code.empty()) {
    req_rpc->AddRequestQuery("ServiceCode", req.service_code);
  }
  if(!req.status_key1.empty()) {
    req_rpc->AddRequestQuery("StatusKey1", req.status_key1);
  }
  if(!req.status_value1.empty()) {
    req_rpc->AddRequestQuery("StatusValue1", req.status_value1);
  }
  if(!req.status_key2.empty()) {
    req_rpc->AddRequestQuery("StatusKey2", req.status_key2);
  }
  if(!req.status_value2.empty()) {
    req_rpc->AddRequestQuery("StatusValue2", req.status_value2);
  }
  if(!req.status_key3.empty()) {
    req_rpc->AddRequestQuery("StatusKey3", req.status_key3);
  }
  if(!req.status_value3.empty()) {
    req_rpc->AddRequestQuery("StatusValue3", req.status_value3);
  }
  if(!req.status_key4.empty()) {
    req_rpc->AddRequestQuery("StatusKey4", req.status_key4);
  }
  if(!req.status_value4.empty()) {
    req_rpc->AddRequestQuery("StatusValue4", req.status_value4);
  }
  if(!req.status_key5.empty()) {
    req_rpc->AddRequestQuery("StatusKey5", req.status_key5);
  }
  if(!req.status_value5.empty()) {
    req_rpc->AddRequestQuery("StatusValue5", req.status_value5);
  }
  if(!req.status_key6.empty()) {
    req_rpc->AddRequestQuery("StatusKey6", req.status_key6);
  }
  if(!req.status_value6.empty()) {
    req_rpc->AddRequestQuery("StatusValue6", req.status_value6);
  }
  if(!req.status_key7.empty()) {
    req_rpc->AddRequestQuery("StatusKey7", req.status_key7);
  }
  if(!req.status_value7.empty()) {
    req_rpc->AddRequestQuery("StatusValue7", req.status_value7);
  }
  if(!req.status_key8.empty()) {
    req_rpc->AddRequestQuery("StatusKey8", req.status_key8);
  }
  if(!req.status_value8.empty()) {
    req_rpc->AddRequestQuery("StatusValue8", req.status_value8);
  }
  if(!req.status_key9.empty()) {
    req_rpc->AddRequestQuery("StatusKey9", req.status_key9);
  }
  if(!req.status_value9.empty()) {
    req_rpc->AddRequestQuery("StatusValue9", req.status_value9);
  }
  if(!req.status_key10.empty()) {
    req_rpc->AddRequestQuery("StatusKey10", req.status_key10);
  }
  if(!req.status_value10.empty()) {
    req_rpc->AddRequestQuery("StatusValue10", req.status_value10);
  }
  if(!req.password.empty()) {
    req_rpc->AddRequestQuery("Password", req.password);
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
