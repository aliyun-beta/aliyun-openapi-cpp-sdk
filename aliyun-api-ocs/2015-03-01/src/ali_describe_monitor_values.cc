#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ocs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeMonitorValuesOcsMonitorKeyType* item);
void Json2Type(const Json::Value& value, DescribeMonitorValuesOcsInstanceMonitorType* item);
void Json2Type(const Json::Value& value, DescribeMonitorValuesResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeMonitorValuesOcsMonitorKeyType* item) {
  if(value.isMember("MonitorKey")) {
    item->monitor_key = value["MonitorKey"].asString();
  }
  if(value.isMember("Value")) {
    item->value = value["Value"].asString();
  }
  if(value.isMember("Unit")) {
    item->unit = value["Unit"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeMonitorValuesOcsInstanceMonitorType* item) {
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("MonitorKeys") && value["MonitorKeys"].isMember("OcsMonitorKey")) {
    Json2Array<DescribeMonitorValuesOcsMonitorKeyType>(value["MonitorKeys"]["OcsMonitorKey"], &item->monitor_keys);
  }
}
void Json2Type(const Json::Value& value, DescribeMonitorValuesResponseType* item) {
  if(value.isMember("Date")) {
    item->date = value["Date"].asString();
  }
  if(value.isMember("InstanceIds") && value["InstanceIds"].isMember("OcsInstanceMonitor")) {
    Json2Array<DescribeMonitorValuesOcsInstanceMonitorType>(value["InstanceIds"]["OcsInstanceMonitor"], &item->instance_ids);
  }
}
}

int Ocs::DescribeMonitorValues(const DescribeMonitorValuesRequestType& req,
                      DescribeMonitorValuesResponseType* response,
                       AliOcsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeMonitorValues");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(!req.instance_ids.empty()) {
    req_rpc->AddRequestQuery("InstanceIds", req.instance_ids);
  }
  if(!req.monitor_keys.empty()) {
    req_rpc->AddRequestQuery("MonitorKeys", req.monitor_keys);
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
