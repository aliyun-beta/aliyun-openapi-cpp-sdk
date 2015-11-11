#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_push.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, PushBatchGetDevicesInfoDeviceInfoType* item);
void Json2Type(const Json::Value& value, PushBatchGetDevicesInfoResponseType* item);

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
void Json2Type(const Json::Value& value, PushBatchGetDevicesInfoDeviceInfoType* item) {
  if(value.isMember("DeviceId")) {
    item->device_id = value["DeviceId"].asString();
  }
  if(value.isMember("IsOnline")) {
    item->is_online = value["IsOnline"].asBool();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asInt();
  }
}
void Json2Type(const Json::Value& value, PushBatchGetDevicesInfoResponseType* item) {
  if(value.isMember("DeviceInfos") && value["DeviceInfos"].isMember("DeviceInfo")) {
    Json2Array<PushBatchGetDevicesInfoDeviceInfoType>(value["DeviceInfos"]["DeviceInfo"], &item->device_infos);
  }
}
}

int Push::BatchGetDevicesInfo(const PushBatchGetDevicesInfoRequestType& req,
                      PushBatchGetDevicesInfoResponseType* response,
                       PushErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","BatchGetDevicesInfo");
  if(!req.devices.empty()) {
    req_rpc->AddRequestQuery("Devices", req.devices);
  }
  if(!req.app_id.empty()) {
    req_rpc->AddRequestQuery("AppId", req.app_id);
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