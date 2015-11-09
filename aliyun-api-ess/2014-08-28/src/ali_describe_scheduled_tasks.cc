#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeScheduledTasksScheduledTaskType* item);
void Json2Type(const Json::Value& value, DescribeScheduledTasksResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeScheduledTasksScheduledTaskType* item) {
  if(value.isMember("ScheduledTaskId")) {
    item->scheduled_task_id = value["ScheduledTaskId"].asString();
  }
  if(value.isMember("ScheduledTaskName")) {
    item->scheduled_task_name = value["ScheduledTaskName"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("ScheduledAction")) {
    item->scheduled_action = value["ScheduledAction"].asString();
  }
  if(value.isMember("RecurrenceEndTime")) {
    item->recurrence_end_time = value["RecurrenceEndTime"].asString();
  }
  if(value.isMember("LaunchTime")) {
    item->launch_time = value["LaunchTime"].asString();
  }
  if(value.isMember("RecurrenceType")) {
    item->recurrence_type = value["RecurrenceType"].asString();
  }
  if(value.isMember("RecurrenceValue")) {
    item->recurrence_value = value["RecurrenceValue"].asString();
  }
  if(value.isMember("LaunchExpirationTime")) {
    item->launch_expiration_time = value["LaunchExpirationTime"].asInt();
  }
  if(value.isMember("TaskEnabled")) {
    item->task_enabled = value["TaskEnabled"].asBool();
  }
}
void Json2Type(const Json::Value& value, DescribeScheduledTasksResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ScheduledTasks") && value["ScheduledTasks"].isMember("ScheduledTask")) {
    Json2Array<DescribeScheduledTasksScheduledTaskType>(value["ScheduledTasks"]["ScheduledTask"], &item->scheduled_tasks);
  }
}
}

int Ess::DescribeScheduledTasks(const DescribeScheduledTasksRequestType& req,
                      DescribeScheduledTasksResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeScheduledTasks");
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
  if(!req.scheduled_action1.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.1", req.scheduled_action1);
  }
  if(!req.scheduled_action2.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.2", req.scheduled_action2);
  }
  if(!req.scheduled_action3.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.3", req.scheduled_action3);
  }
  if(!req.scheduled_action4.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.4", req.scheduled_action4);
  }
  if(!req.scheduled_action5.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.5", req.scheduled_action5);
  }
  if(!req.scheduled_action6.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.6", req.scheduled_action6);
  }
  if(!req.scheduled_action7.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.7", req.scheduled_action7);
  }
  if(!req.scheduled_action8.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.8", req.scheduled_action8);
  }
  if(!req.scheduled_action9.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.9", req.scheduled_action9);
  }
  if(!req.scheduled_action10.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.10", req.scheduled_action10);
  }
  if(!req.scheduled_action11.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.11", req.scheduled_action11);
  }
  if(!req.scheduled_action12.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.12", req.scheduled_action12);
  }
  if(!req.scheduled_action13.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.13", req.scheduled_action13);
  }
  if(!req.scheduled_action14.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.14", req.scheduled_action14);
  }
  if(!req.scheduled_action15.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.15", req.scheduled_action15);
  }
  if(!req.scheduled_action16.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.16", req.scheduled_action16);
  }
  if(!req.scheduled_action17.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.17", req.scheduled_action17);
  }
  if(!req.scheduled_action18.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.18", req.scheduled_action18);
  }
  if(!req.scheduled_action19.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.19", req.scheduled_action19);
  }
  if(!req.scheduled_action20.empty()) {
    req_rpc->AddRequestQuery("ScheduledAction.20", req.scheduled_action20);
  }
  if(!req.scheduled_task_id1.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.1", req.scheduled_task_id1);
  }
  if(!req.scheduled_task_id2.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.2", req.scheduled_task_id2);
  }
  if(!req.scheduled_task_id3.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.3", req.scheduled_task_id3);
  }
  if(!req.scheduled_task_id4.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.4", req.scheduled_task_id4);
  }
  if(!req.scheduled_task_id5.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.5", req.scheduled_task_id5);
  }
  if(!req.scheduled_task_id6.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.6", req.scheduled_task_id6);
  }
  if(!req.scheduled_task_id7.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.7", req.scheduled_task_id7);
  }
  if(!req.scheduled_task_id8.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.8", req.scheduled_task_id8);
  }
  if(!req.scheduled_task_id9.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.9", req.scheduled_task_id9);
  }
  if(!req.scheduled_task_id10.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.10", req.scheduled_task_id10);
  }
  if(!req.scheduled_task_id11.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.11", req.scheduled_task_id11);
  }
  if(!req.scheduled_task_id12.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.12", req.scheduled_task_id12);
  }
  if(!req.scheduled_task_id13.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.13", req.scheduled_task_id13);
  }
  if(!req.scheduled_task_id14.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.14", req.scheduled_task_id14);
  }
  if(!req.scheduled_task_id15.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.15", req.scheduled_task_id15);
  }
  if(!req.scheduled_task_id16.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.16", req.scheduled_task_id16);
  }
  if(!req.scheduled_task_id17.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.17", req.scheduled_task_id17);
  }
  if(!req.scheduled_task_id18.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.18", req.scheduled_task_id18);
  }
  if(!req.scheduled_task_id19.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.19", req.scheduled_task_id19);
  }
  if(!req.scheduled_task_id20.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskId.20", req.scheduled_task_id20);
  }
  if(!req.scheduled_task_name1.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.1", req.scheduled_task_name1);
  }
  if(!req.scheduled_task_name2.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.2", req.scheduled_task_name2);
  }
  if(!req.scheduled_task_name3.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.3", req.scheduled_task_name3);
  }
  if(!req.scheduled_task_name4.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.4", req.scheduled_task_name4);
  }
  if(!req.scheduled_task_name5.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.5", req.scheduled_task_name5);
  }
  if(!req.scheduled_task_name6.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.6", req.scheduled_task_name6);
  }
  if(!req.scheduled_task_name7.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.7", req.scheduled_task_name7);
  }
  if(!req.scheduled_task_name8.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.8", req.scheduled_task_name8);
  }
  if(!req.scheduled_task_name9.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.9", req.scheduled_task_name9);
  }
  if(!req.scheduled_task_name10.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.10", req.scheduled_task_name10);
  }
  if(!req.scheduled_task_name11.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.11", req.scheduled_task_name11);
  }
  if(!req.scheduled_task_name12.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.12", req.scheduled_task_name12);
  }
  if(!req.scheduled_task_name13.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.13", req.scheduled_task_name13);
  }
  if(!req.scheduled_task_name14.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.14", req.scheduled_task_name14);
  }
  if(!req.scheduled_task_name15.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.15", req.scheduled_task_name15);
  }
  if(!req.scheduled_task_name16.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.16", req.scheduled_task_name16);
  }
  if(!req.scheduled_task_name17.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.17", req.scheduled_task_name17);
  }
  if(!req.scheduled_task_name18.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.18", req.scheduled_task_name18);
  }
  if(!req.scheduled_task_name19.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.19", req.scheduled_task_name19);
  }
  if(!req.scheduled_task_name20.empty()) {
    req_rpc->AddRequestQuery("ScheduledTaskName.20", req.scheduled_task_name20);
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
