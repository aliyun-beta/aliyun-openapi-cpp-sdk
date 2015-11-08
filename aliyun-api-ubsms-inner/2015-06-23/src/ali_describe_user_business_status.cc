#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ubsmsinner.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeUserBusinessStatusStatusType* item);
void Json2Type(const Json::Value& value, DescribeUserBusinessStatusResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeUserBusinessStatusStatusType* item) {
  if(value.isMember("StatusKey")) {
    item->status_key = value["StatusKey"].asString();
  }
  if(value.isMember("StatusValue")) {
    item->status_value = value["StatusValue"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeUserBusinessStatusResponseType* item) {
  if(value.isMember("Success")) {
    item->success = value["Success"].asBool();
  }
  if(value.isMember("Uid")) {
    item->uid = value["Uid"].asString();
  }
  if(value.isMember("ServiceCode")) {
    item->service_code = value["ServiceCode"].asString();
  }
  if(value.isMember("Statuses") && value["Statuses"].isMember("Status")) {
    Json2Array<DescribeUserBusinessStatusStatusType>(value["Statuses"]["Status"], &item->statuses);
  }
}
}

int Ubsmsinner::DescribeUserBusinessStatus(const DescribeUserBusinessStatusRequestType& req,
                      DescribeUserBusinessStatusResponseType* response,
                       AliUbsmsinnerErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeUserBusinessStatus");
  if(!req.caller_bid.empty()) {
    req_rpc->AddRequestQuery("callerBid", req.caller_bid);
  }
  if(!req.uid.empty()) {
    req_rpc->AddRequestQuery("Uid", req.uid);
  }
  if(!req.service_code.empty()) {
    req_rpc->AddRequestQuery("ServiceCode", req.service_code);
  }
  if(!req.password.empty()) {
    req_rpc->AddRequestQuery("Password", req.password);
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
  if(status_code!= 200 && error_info && !parse_success) {
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
