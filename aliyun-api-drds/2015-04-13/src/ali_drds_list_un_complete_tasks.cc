#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_drds.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DrdsListUnCompleteTaskstaskType* item);
void Json2Type(const Json::Value& value, DrdsListUnCompleteTasksResponseType* item);

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
void Json2Type(const Json::Value& value, DrdsListUnCompleteTaskstaskType* item) {
  if(value.isMember("RequestId")) {
    item->request_id = value["RequestId"].asString();
  }
  if(value.isMember("TargetId")) {
    item->target_id = value["TargetId"].asString();
  }
  if(value.isMember("TaskDetail")) {
    item->task_detail = value["TaskDetail"].asString();
  }
  if(value.isMember("taskStatus")) {
    item->task_status = value["taskStatus"].asInt();
  }
  if(value.isMember("TaskPhase")) {
    item->task_phase = value["TaskPhase"].asString();
  }
  if(value.isMember("TaskType")) {
    item->task_type = value["TaskType"].asInt();
  }
  if(value.isMember("TaskName")) {
    item->task_name = value["TaskName"].asString();
  }
  if(value.isMember("gmtCreate")) {
    item->gmt_create = value["gmtCreate"].asInt();
  }
  if(value.isMember("AllowCancel")) {
    item->allow_cancel = value["AllowCancel"].asString();
  }
  if(value.isMember("ErrMsg")) {
    item->err_msg = value["ErrMsg"].asString();
  }
}
void Json2Type(const Json::Value& value, DrdsListUnCompleteTasksResponseType* item) {
  if(value.isMember("Data") && value["Data"].isMember("task")) {
    Json2Array<DrdsListUnCompleteTaskstaskType>(value["Data"]["task"], &item->data);
  }
}
}

int Drds::ListUnCompleteTasks(const DrdsListUnCompleteTasksRequestType& req,
                      DrdsListUnCompleteTasksResponseType* response,
                       DrdsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","ListUnCompleteTasks");
  if(!req.drds_instance_id.empty()) {
    req_rpc->AddRequestQuery("DrdsInstanceId", req.drds_instance_id);
  }
  if(!req.db_name.empty()) {
    req_rpc->AddRequestQuery("DbName", req.db_name);
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
