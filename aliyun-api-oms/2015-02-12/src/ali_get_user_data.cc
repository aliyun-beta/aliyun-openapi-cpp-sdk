#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_oms.h"
#include "Json/Value.h"
#include "Json/Reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, GetUserDataDataItemType* item);
void Json2Type(const Json::Value& value, GetUserDataDataType* item);
void Json2Type(const Json::Value& value, GetUserDataResponseType* item);

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
void Json2Type(const Json::Value& value, GetUserDataDataItemType* item) {
  if(value.isMember("Name")) {
    item->name = value["Name"].asString();
  }
  if(value.isMember("Value")) {
    item->value = value["Value"].asString();
  }
}
void Json2Type(const Json::Value& value, GetUserDataDataType* item) {
  if(value.isMember("DataItems") && value["DataItems"].isMember("DataItem")) {
    Json2Array<GetUserDataDataItemType>(value["DataItems"]["DataItem"], &item->data_items);
  }
}
void Json2Type(const Json::Value& value, GetUserDataResponseType* item) {
  if(value.isMember("ProductName")) {
    item->product_name = value["ProductName"].asString();
  }
  if(value.isMember("DataType")) {
    item->data_type = value["DataType"].asString();
  }
  if(value.isMember("NextToken")) {
    item->next_token = value["NextToken"].asString();
  }
  if(value.isMember("DataList") && value["DataList"].isMember("Data")) {
    Json2Array<GetUserDataDataType>(value["DataList"]["Data"], &item->data_list);
  }
}
}

int Oms::GetUserData(const GetUserDataRequestType& req,
                      GetUserDataResponseType* response,
                       AliOmsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","GetUserData");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(!req.product_name.empty()) {
    req_rpc->AddRequestQuery("ProductName", req.product_name);
  }
  if(!req.data_type.empty()) {
    req_rpc->AddRequestQuery("DataType", req.data_type);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.next_token.empty()) {
    req_rpc->AddRequestQuery("NextToken", req.next_token);
  }
  if(!req.max_result.empty()) {
    req_rpc->AddRequestQuery("MaxResult", req.max_result);
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
