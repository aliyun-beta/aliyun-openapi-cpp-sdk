#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ace.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, AceGetMonitorDataItemType* item);
void Json2Type(const Json::Value& value, AceGetMonitorDataResponseType* item);

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
void Json2Type(const Json::Value& value, AceGetMonitorDataItemType* item) {
  if(value.isMember("Timestamp")) {
    item->timestamp = value["Timestamp"].asInt();
  }
  if(value.isMember("Value")) {
    item->value = value["Value"].asFloat();
  }
}
void Json2Type(const Json::Value& value, AceGetMonitorDataResponseType* item) {
  if(value.isMember("NextPageNum")) {
    item->next_page_num = value["NextPageNum"].asString();
  }
  if(value.isMember("Data") && value["Data"].isMember("Item")) {
    Json2Array<AceGetMonitorDataItemType>(value["Data"]["Item"], &item->data);
  }
}
}

int Ace::GetMonitorData(const AceGetMonitorDataRequestType& req,
                      AceGetMonitorDataResponseType* response,
                       AceErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","GetMonitorData");
  if(!req.app_id.empty()) {
    req_rpc->AddRequestQuery("AppId", req.app_id);
  }
  if(!req.item.empty()) {
    req_rpc->AddRequestQuery("Item", req.item);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.cur_page.empty()) {
    req_rpc->AddRequestQuery("CurPage", req.cur_page);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
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
