#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_drds.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DrdsDescribeDrdsDBDataType* item);
void Json2Type(const Json::Value& value, DrdsDescribeDrdsDBResponseType* item);

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
void Json2Type(const Json::Value& value, DrdsDescribeDrdsDBDataType* item) {
  if(value.isMember("DbName")) {
    item->db_name = value["DbName"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asInt();
  }
  if(value.isMember("CreateTime")) {
    item->create_time = value["CreateTime"].asString();
  }
  if(value.isMember("Msg")) {
    item->msg = value["Msg"].asString();
  }
  if(value.isMember("Mode")) {
    item->mode = value["Mode"].asString();
  }
}
void Json2Type(const Json::Value& value, DrdsDescribeDrdsDBResponseType* item) {
  if(value.isMember("Success")) {
    item->success = value["Success"].asBool();
  }
  if(value.isMember("Data")) {
    Json2Type(value["Data"], &item->data);
  }
}
}

int Drds::DescribeDrdsDB(const DrdsDescribeDrdsDBRequestType& req,
                      DrdsDescribeDrdsDBResponseType* response,
                       DrdsErrorInfo* error_info) {
  std::string str_response;
  int status_code;
  int ret = 0;
  bool parse_success = false;
  std::string secheme = this->use_tls_ ? "https" : "http";
  AliRpcRequest* req_rpc = new AliRpcRequest(version_,
                         appid_,
                         secret_,
                         secheme + "://" + host_);
  if((!this->use_tls_) && this->proxy_host_ && this->proxy_host_[0]) {
    req_rpc->SetHttpProxy( this->proxy_host_);
  }
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","DescribeDrdsDB");
  if(!req.drds_instance_id.empty()) {
    req_rpc->AddRequestQuery("DrdsInstanceId", req.drds_instance_id);
  }
  if(!req.db_name.empty()) {
    req_rpc->AddRequestQuery("DbName", req.db_name);
  }
  if(this->region_id_ && this->region_id_[0]) {
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
