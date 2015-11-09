#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ons.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OnsMessageGetByMsgIdMessagePropertyType* item);
void Json2Type(const Json::Value& value, OnsMessageGetByMsgIdDataType* item);
void Json2Type(const Json::Value& value, OnsMessageGetByMsgIdResponseType* item);

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
void Json2Type(const Json::Value& value, OnsMessageGetByMsgIdMessagePropertyType* item) {
  if(value.isMember("Name")) {
    item->name = value["Name"].asString();
  }
  if(value.isMember("Value")) {
    item->value = value["Value"].asString();
  }
}
void Json2Type(const Json::Value& value, OnsMessageGetByMsgIdDataType* item) {
  if(value.isMember("Topic")) {
    item->topic = value["Topic"].asString();
  }
  if(value.isMember("Flag")) {
    item->flag = value["Flag"].asInt();
  }
  if(value.isMember("Body")) {
    item->body = value["Body"].asString();
  }
  if(value.isMember("QueueId")) {
    item->queue_id = value["QueueId"].asInt();
  }
  if(value.isMember("StoreSize")) {
    item->store_size = value["StoreSize"].asInt();
  }
  if(value.isMember("QueueOffset")) {
    item->queue_offset = value["QueueOffset"].asInt();
  }
  if(value.isMember("SysFlag")) {
    item->sys_flag = value["SysFlag"].asInt();
  }
  if(value.isMember("BornTimestamp")) {
    item->born_timestamp = value["BornTimestamp"].asInt();
  }
  if(value.isMember("BornHost")) {
    item->born_host = value["BornHost"].asString();
  }
  if(value.isMember("StoreTimestamp")) {
    item->store_timestamp = value["StoreTimestamp"].asInt();
  }
  if(value.isMember("StoreHost")) {
    item->store_host = value["StoreHost"].asString();
  }
  if(value.isMember("MsgId")) {
    item->msg_id = value["MsgId"].asString();
  }
  if(value.isMember("CommitLogOffset")) {
    item->commit_log_offset = value["CommitLogOffset"].asInt();
  }
  if(value.isMember("BodyCRC")) {
    item->body_cr_c = value["BodyCRC"].asInt();
  }
  if(value.isMember("ReconsumeTimes")) {
    item->reconsume_times = value["ReconsumeTimes"].asInt();
  }
  if(value.isMember("PreparedTransactionOffset")) {
    item->prepared_transaction_offset = value["PreparedTransactionOffset"].asInt();
  }
  if(value.isMember("PropertyList") && value["PropertyList"].isMember("MessageProperty")) {
    Json2Array<OnsMessageGetByMsgIdMessagePropertyType>(value["PropertyList"]["MessageProperty"], &item->property_list);
  }
}
void Json2Type(const Json::Value& value, OnsMessageGetByMsgIdResponseType* item) {
  if(value.isMember("HelpUrl")) {
    item->help_url = value["HelpUrl"].asString();
  }
  if(value.isMember("Data")) {
    Json2Type(value["Data"], &item->data);
  }
}
}

int Ons::OnsMessageGetByMsgId(const OnsMessageGetByMsgIdRequestType& req,
                      OnsMessageGetByMsgIdResponseType* response,
                       AliOnsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","OnsMessageGetByMsgId");
  if(!req.ons_region_id.empty()) {
    req_rpc->AddRequestQuery("OnsRegionId", req.ons_region_id);
  }
  if(!req.ons_platform.empty()) {
    req_rpc->AddRequestQuery("OnsPlatform", req.ons_platform);
  }
  if(!req.prevent_cache.empty()) {
    req_rpc->AddRequestQuery("PreventCache", req.prevent_cache);
  }
  if(!req.msg_id.empty()) {
    req_rpc->AddRequestQuery("MsgId", req.msg_id);
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
