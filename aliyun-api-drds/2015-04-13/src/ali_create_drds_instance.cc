#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_drds.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CreateDrdsInstanceDataType* item);
void Json2Type(const Json::Value& value, CreateDrdsInstanceResponseType* item);

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
void Json2Type(const Json::Value& value, CreateDrdsInstanceDataType* item) {
  if(value.isMember("OrderId")) {
    item->order_id = value["OrderId"].asInt();
  }
  if(value.isMember("DrdsInstanceIdList")  && value["DrdsInstanceIdList"].isMember("DrdsInstanceId")) {
    Json2Array<std::string>(value["DrdsInstanceIdList"]["DrdsInstanceId"], &item->drds_instance_id_list);
  }
}
void Json2Type(const Json::Value& value, CreateDrdsInstanceResponseType* item) {
  if(value.isMember("Success")) {
    item->success = value["Success"].asBool();
  }
  if(value.isMember("Data")) {
    Json2Type(value["Data"], &item->data);
  }
}
}

int Drds::CreateDrdsInstance(const CreateDrdsInstanceRequestType& req,
                      CreateDrdsInstanceResponseType* response,
                       AliDrdsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","CreateDrdsInstance");
  if(!req.description.empty()) {
    req_rpc->AddRequestQuery("Description", req.description);
  }
  if(!req.zone_id.empty()) {
    req_rpc->AddRequestQuery("ZoneId", req.zone_id);
  }
  if(!req.type.empty()) {
    req_rpc->AddRequestQuery("Type", req.type);
  }
  if(!req.quantity.empty()) {
    req_rpc->AddRequestQuery("Quantity", req.quantity);
  }
  if(!req.specification.empty()) {
    req_rpc->AddRequestQuery("Specification", req.specification);
  }
  if(!req.pay_type.empty()) {
    req_rpc->AddRequestQuery("PayType", req.pay_type);
  }
  if(!req.vpc_id.empty()) {
    req_rpc->AddRequestQuery("VpcId", req.vpc_id);
  }
  if(!req.vswitch_id.empty()) {
    req_rpc->AddRequestQuery("VswitchId", req.vswitch_id);
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
