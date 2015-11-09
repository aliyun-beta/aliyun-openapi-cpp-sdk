#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_oms.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, GetProductDefineTypeType* item);
void Json2Type(const Json::Value& value, GetProductDefineProductType* item);
void Json2Type(const Json::Value& value, GetProductDefineResponseType* item);

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
void Json2Type(const Json::Value& value, GetProductDefineTypeType* item) {
  if(value.isMember("DataType")) {
    item->data_type = value["DataType"].asString();
  }
  if(value.isMember("Fields")  && value["Fields"].isMember("Field")) {
    Json2Array<std::string>(value["Fields"]["Field"], &item->fields);
  }
}
void Json2Type(const Json::Value& value, GetProductDefineProductType* item) {
  if(value.isMember("ProductName")) {
    item->product_name = value["ProductName"].asString();
  }
  if(value.isMember("TypeList") && value["TypeList"].isMember("Type")) {
    Json2Array<GetProductDefineTypeType>(value["TypeList"]["Type"], &item->type_list);
  }
}
void Json2Type(const Json::Value& value, GetProductDefineResponseType* item) {
  if(value.isMember("ProductName")) {
    item->product_name = value["ProductName"].asString();
  }
  if(value.isMember("DataType")) {
    item->data_type = value["DataType"].asString();
  }
  if(value.isMember("ProductList") && value["ProductList"].isMember("Product")) {
    Json2Array<GetProductDefineProductType>(value["ProductList"]["Product"], &item->product_list);
  }
}
}

int Oms::GetProductDefine(const GetProductDefineRequestType& req,
                      GetProductDefineResponseType* response,
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
  req_rpc->AddRequestQuery("Action","GetProductDefine");
  if(!req.product_name.empty()) {
    req_rpc->AddRequestQuery("ProductName", req.product_name);
  }
  if(!req.data_type.empty()) {
    req_rpc->AddRequestQuery("DataType", req.data_type);
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
