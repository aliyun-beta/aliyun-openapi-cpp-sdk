#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeScalingActivitiesScalingActivityType* item);
void Json2Type(const Json::Value& value, DescribeScalingActivitiesResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeScalingActivitiesScalingActivityType* item) {
  if(value.isMember("ScalingActivityId")) {
    item->scaling_activity_id = value["ScalingActivityId"].asString();
  }
  if(value.isMember("ScalingGroupId")) {
    item->scaling_group_id = value["ScalingGroupId"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("Cause")) {
    item->cause = value["Cause"].asString();
  }
  if(value.isMember("StartTime")) {
    item->start_time = value["StartTime"].asString();
  }
  if(value.isMember("EndTime")) {
    item->end_time = value["EndTime"].asString();
  }
  if(value.isMember("Progress")) {
    item->progress = value["Progress"].asInt();
  }
  if(value.isMember("StatusCode")) {
    item->status_code = value["StatusCode"].asString();
  }
  if(value.isMember("StatusMessage")) {
    item->status_message = value["StatusMessage"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeScalingActivitiesResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ScalingActivities") && value["ScalingActivities"].isMember("ScalingActivity")) {
    Json2Array<DescribeScalingActivitiesScalingActivityType>(value["ScalingActivities"]["ScalingActivity"], &item->scaling_activities);
  }
}
}

int Ess::DescribeScalingActivities(const DescribeScalingActivitiesRequestType& req,
                      DescribeScalingActivitiesResponseType* response,
                       AliEssErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeScalingActivities");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.scaling_group_id.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId", req.scaling_group_id);
  }
  if(!req.status_code.empty()) {
    req_rpc->AddRequestQuery("StatusCode", req.status_code);
  }
  if(!req.scaling_activity_id1.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.1", req.scaling_activity_id1);
  }
  if(!req.scaling_activity_id2.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.2", req.scaling_activity_id2);
  }
  if(!req.scaling_activity_id3.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.3", req.scaling_activity_id3);
  }
  if(!req.scaling_activity_id4.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.4", req.scaling_activity_id4);
  }
  if(!req.scaling_activity_id5.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.5", req.scaling_activity_id5);
  }
  if(!req.scaling_activity_id6.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.6", req.scaling_activity_id6);
  }
  if(!req.scaling_activity_id7.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.7", req.scaling_activity_id7);
  }
  if(!req.scaling_activity_id8.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.8", req.scaling_activity_id8);
  }
  if(!req.scaling_activity_id9.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.9", req.scaling_activity_id9);
  }
  if(!req.scaling_activity_id10.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.10", req.scaling_activity_id10);
  }
  if(!req.scaling_activity_id11.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.11", req.scaling_activity_id11);
  }
  if(!req.scaling_activity_id12.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.12", req.scaling_activity_id12);
  }
  if(!req.scaling_activity_id13.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.13", req.scaling_activity_id13);
  }
  if(!req.scaling_activity_id14.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.14", req.scaling_activity_id14);
  }
  if(!req.scaling_activity_id15.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.15", req.scaling_activity_id15);
  }
  if(!req.scaling_activity_id16.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.16", req.scaling_activity_id16);
  }
  if(!req.scaling_activity_id17.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.17", req.scaling_activity_id17);
  }
  if(!req.scaling_activity_id18.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.18", req.scaling_activity_id18);
  }
  if(!req.scaling_activity_id19.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.19", req.scaling_activity_id19);
  }
  if(!req.scaling_activity_id20.empty()) {
    req_rpc->AddRequestQuery("ScalingActivityId.20", req.scaling_activity_id20);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
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
