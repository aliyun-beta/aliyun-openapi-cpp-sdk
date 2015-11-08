#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ons.h"
#include "Json/Value.h"
#include "Json/Reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OnsConsumerAccumulateConsumeQueueOffsetType* item);
void Json2Type(const Json::Value& value, OnsConsumerAccumulateDetailInTopicDoType* item);
void Json2Type(const Json::Value& value, OnsConsumerAccumulateDataType* item);
void Json2Type(const Json::Value& value, OnsConsumerAccumulateResponseType* item);

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
void Json2Type(const Json::Value& value, OnsConsumerAccumulateConsumeQueueOffsetType* item) {
  if(value.isMember("Topic")) {
    item->topic = value["Topic"].asString();
  }
  if(value.isMember("BrokerName")) {
    item->broker_name = value["BrokerName"].asString();
  }
  if(value.isMember("QueueId")) {
    item->queue_id = value["QueueId"].asInt();
  }
  if(value.isMember("BrokerOffset")) {
    item->broker_offset = value["BrokerOffset"].asInt();
  }
  if(value.isMember("ConsumerOffset")) {
    item->consumer_offset = value["ConsumerOffset"].asInt();
  }
  if(value.isMember("LastTimestamp")) {
    item->last_timestamp = value["LastTimestamp"].asInt();
  }
}
void Json2Type(const Json::Value& value, OnsConsumerAccumulateDetailInTopicDoType* item) {
  if(value.isMember("Topic")) {
    item->topic = value["Topic"].asString();
  }
  if(value.isMember("ConsumeTps")) {
    item->consume_tps = value["ConsumeTps"].asFloat();
  }
  if(value.isMember("LastTimestamp")) {
    item->last_timestamp = value["LastTimestamp"].asInt();
  }
  if(value.isMember("DelayTime")) {
    item->delay_time = value["DelayTime"].asInt();
  }
  if(value.isMember("OffsetList") && value["OffsetList"].isMember("ConsumeQueueOffset")) {
    Json2Array<OnsConsumerAccumulateConsumeQueueOffsetType>(value["OffsetList"]["ConsumeQueueOffset"], &item->offset_list);
  }
}
void Json2Type(const Json::Value& value, OnsConsumerAccumulateDataType* item) {
  if(value.isMember("Online")) {
    item->online = value["Online"].asBool();
  }
  if(value.isMember("TotalDiff")) {
    item->total_diff = value["TotalDiff"].asInt();
  }
  if(value.isMember("ConsumeTps")) {
    item->consume_tps = value["ConsumeTps"].asFloat();
  }
  if(value.isMember("LastTimestamp")) {
    item->last_timestamp = value["LastTimestamp"].asInt();
  }
  if(value.isMember("DelayTime")) {
    item->delay_time = value["DelayTime"].asInt();
  }
  if(value.isMember("DetailInTopicList") && value["DetailInTopicList"].isMember("DetailInTopicDo")) {
    Json2Array<OnsConsumerAccumulateDetailInTopicDoType>(value["DetailInTopicList"]["DetailInTopicDo"], &item->detail_in_topic_list);
  }
}
void Json2Type(const Json::Value& value, OnsConsumerAccumulateResponseType* item) {
  if(value.isMember("HelpUrl")) {
    item->help_url = value["HelpUrl"].asString();
  }
  if(value.isMember("Data")) {
    Json2Type(value["Data"], &item->data);
  }
}
}

int Ons::OnsConsumerAccumulate(const OnsConsumerAccumulateRequestType& req,
                      OnsConsumerAccumulateResponseType* response,
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
  req_rpc->AddRequestQuery("Action","OnsConsumerAccumulate");
  if(!req.ons_region_id.empty()) {
    req_rpc->AddRequestQuery("OnsRegionId", req.ons_region_id);
  }
  if(!req.ons_platform.empty()) {
    req_rpc->AddRequestQuery("OnsPlatform", req.ons_platform);
  }
  if(!req.prevent_cache.empty()) {
    req_rpc->AddRequestQuery("PreventCache", req.prevent_cache);
  }
  if(!req.consumer_id.empty()) {
    req_rpc->AddRequestQuery("ConsumerId", req.consumer_id);
  }
  if(!req.detail.empty()) {
    req_rpc->AddRequestQuery("Detail", req.detail);
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
