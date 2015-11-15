#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ons.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConnectionDoType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConsumeQueueOffsetType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusDetailInTopicDoType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusSubscriptionDataType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConsumerRunningDataDoType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusThreadTrackDoType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusWarnMapType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusProcessQueueInfoDoType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConsumerConnectionInfoDoType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusDataType* item);
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusResponseType* item);

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
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConnectionDoType* item) {
  if(value.isMember("ClientId")) {
    item->client_id = value["ClientId"].asString();
  }
  if(value.isMember("ClientAddr")) {
    item->client_addr = value["ClientAddr"].asString();
  }
  if(value.isMember("Language")) {
    item->language = value["Language"].asString();
  }
  if(value.isMember("Version")) {
    item->version = value["Version"].asString();
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConsumeQueueOffsetType* item) {
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
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusDetailInTopicDoType* item) {
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
    Json2Array<OnsOnsConsumerStatusConsumeQueueOffsetType>(value["OffsetList"]["ConsumeQueueOffset"], &item->offset_list);
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusSubscriptionDataType* item) {
  if(value.isMember("ClassFilterMode")) {
    item->class_filter_mode = value["ClassFilterMode"].asBool();
  }
  if(value.isMember("Topic")) {
    item->topic = value["Topic"].asString();
  }
  if(value.isMember("SubString")) {
    item->sub_string = value["SubString"].asString();
  }
  if(value.isMember("SubVersion")) {
    item->sub_version = value["SubVersion"].asInt();
  }
  if(value.isMember("TagsSet")  && value["TagsSet"].isMember("Tag")) {
    Json2Array<std::string>(value["TagsSet"]["Tag"], &item->tags_set);
  }
  if(value.isMember("CodeSet")  && value["CodeSet"].isMember("Code")) {
    Json2Array<std::string>(value["CodeSet"]["Code"], &item->code_set);
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConsumerRunningDataDoType* item) {
  if(value.isMember("ConsumerId")) {
    item->consumer_id = value["ConsumerId"].asString();
  }
  if(value.isMember("Topic")) {
    item->topic = value["Topic"].asString();
  }
  if(value.isMember("Rt")) {
    item->rt = value["Rt"].asFloat();
  }
  if(value.isMember("OkTps")) {
    item->ok_tps = value["OkTps"].asFloat();
  }
  if(value.isMember("FailedTps")) {
    item->failed_tps = value["FailedTps"].asInt();
  }
  if(value.isMember("FailedCountPerHour")) {
    item->failed_count_per_hour = value["FailedCountPerHour"].asInt();
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusThreadTrackDoType* item) {
  if(value.isMember("Thread")) {
    item->thread = value["Thread"].asString();
  }
  if(value.isMember("TrackList")  && value["TrackList"].isMember("Track")) {
    Json2Array<std::string>(value["TrackList"]["Track"], &item->track_list);
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusWarnMapType* item) {
  if(value.isMember("LOCK")) {
    item->lo_ck = value["LOCK"].asString();
  }
  if(value.isMember("UNLOCK")) {
    item->un_lo_ck = value["UNLOCK"].asString();
  }
  if(value.isMember("BLOCK")) {
    item->bl_oc_k = value["BLOCK"].asString();
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusProcessQueueInfoDoType* item) {
  if(value.isMember("topic")) {
    item->topic = value["topic"].asString();
  }
  if(value.isMember("BrokerName")) {
    item->broker_name = value["BrokerName"].asString();
  }
  if(value.isMember("QueueId")) {
    item->queue_id = value["QueueId"].asInt();
  }
  if(value.isMember("WarnMap")) {
    Json2Type(value["WarnMap"], &item->warn_map);
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusConsumerConnectionInfoDoType* item) {
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("Connection")) {
    item->connection = value["Connection"].asString();
  }
  if(value.isMember("Language")) {
    item->language = value["Language"].asString();
  }
  if(value.isMember("Version")) {
    item->version = value["Version"].asString();
  }
  if(value.isMember("ConsumeModel")) {
    item->consume_model = value["ConsumeModel"].asString();
  }
  if(value.isMember("ConsumeType")) {
    item->consume_type = value["ConsumeType"].asString();
  }
  if(value.isMember("ThreadCount")) {
    item->thread_count = value["ThreadCount"].asInt();
  }
  if(value.isMember("StartTimeStamp")) {
    item->start_time_stamp = value["StartTimeStamp"].asInt();
  }
  if(value.isMember("LastTimeStamp")) {
    item->last_time_stamp = value["LastTimeStamp"].asInt();
  }
  if(value.isMember("SubscriptionSet") && value["SubscriptionSet"].isMember("SubscriptionData")) {
    Json2Array<OnsOnsConsumerStatusSubscriptionDataType>(value["SubscriptionSet"]["SubscriptionData"], &item->subscription_set);
  }
  if(value.isMember("RunningDataList") && value["RunningDataList"].isMember("ConsumerRunningDataDo")) {
    Json2Array<OnsOnsConsumerStatusConsumerRunningDataDoType>(value["RunningDataList"]["ConsumerRunningDataDo"], &item->running_data_list);
  }
  if(value.isMember("Jstack") && value["Jstack"].isMember("ThreadTrackDo")) {
    Json2Array<OnsOnsConsumerStatusThreadTrackDoType>(value["Jstack"]["ThreadTrackDo"], &item->jstack);
  }
  if(value.isMember("ProcessQueueInfoDoList") && value["ProcessQueueInfoDoList"].isMember("ProcessQueueInfoDo")) {
    Json2Array<OnsOnsConsumerStatusProcessQueueInfoDoType>(value["ProcessQueueInfoDoList"]["ProcessQueueInfoDo"], &item->process_queue_info_do_list);
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusDataType* item) {
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
  if(value.isMember("ConsumeModel")) {
    item->consume_model = value["ConsumeModel"].asString();
  }
  if(value.isMember("SubscriptionSame")) {
    item->subscription_same = value["SubscriptionSame"].asBool();
  }
  if(value.isMember("RebalanceOK")) {
    item->rebalance_ok = value["RebalanceOK"].asBool();
  }
  if(value.isMember("ConnectionSet") && value["ConnectionSet"].isMember("ConnectionDo")) {
    Json2Array<OnsOnsConsumerStatusConnectionDoType>(value["ConnectionSet"]["ConnectionDo"], &item->connection_set);
  }
  if(value.isMember("DetailInTopicList") && value["DetailInTopicList"].isMember("DetailInTopicDo")) {
    Json2Array<OnsOnsConsumerStatusDetailInTopicDoType>(value["DetailInTopicList"]["DetailInTopicDo"], &item->detail_in_topic_list);
  }
  if(value.isMember("ConsumerConnectionInfoList") && value["ConsumerConnectionInfoList"].isMember("ConsumerConnectionInfoDo")) {
    Json2Array<OnsOnsConsumerStatusConsumerConnectionInfoDoType>(value["ConsumerConnectionInfoList"]["ConsumerConnectionInfoDo"], &item->consumer_connection_info_list);
  }
}
void Json2Type(const Json::Value& value, OnsOnsConsumerStatusResponseType* item) {
  if(value.isMember("HelpUrl")) {
    item->help_url = value["HelpUrl"].asString();
  }
  if(value.isMember("Data")) {
    Json2Type(value["Data"], &item->data);
  }
}
}

int Ons::OnsConsumerStatus(const OnsOnsConsumerStatusRequestType& req,
                      OnsOnsConsumerStatusResponseType* response,
                       OnsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","OnsConsumerStatus");
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
  if(!req.need_jstack.empty()) {
    req_rpc->AddRequestQuery("NeedJstack", req.need_jstack);
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
