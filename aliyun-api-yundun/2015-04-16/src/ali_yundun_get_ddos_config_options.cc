#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_yundun.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, YundunGetDdosConfigOptionsRequestThresholdOptionType* item);
void Json2Type(const Json::Value& value, YundunGetDdosConfigOptionsConnectionThresholdOptionType* item);
void Json2Type(const Json::Value& value, YundunGetDdosConfigOptionsResponseType* item);

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
void Json2Type(const Json::Value& value, YundunGetDdosConfigOptionsRequestThresholdOptionType* item) {
  if(value.isMember("Bps")) {
    item->bps = value["Bps"].asInt();
  }
  if(value.isMember("Pps")) {
    item->pps = value["Pps"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunGetDdosConfigOptionsConnectionThresholdOptionType* item) {
  if(value.isMember("Sipconn")) {
    item->sipconn = value["Sipconn"].asInt();
  }
  if(value.isMember("Sipnew")) {
    item->sipnew = value["Sipnew"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunGetDdosConfigOptionsResponseType* item) {
  if(value.isMember("RequestThresholdOptions1") && value["RequestThresholdOptions1"].isMember("RequestThresholdOption")) {
    Json2Array<YundunGetDdosConfigOptionsRequestThresholdOptionType>(value["RequestThresholdOptions1"]["RequestThresholdOption"], &item->request_threshold_options1);
  }
  if(value.isMember("RequestThresholdOptions2") && value["RequestThresholdOptions2"].isMember("RequestThresholdOption")) {
    Json2Array<YundunGetDdosConfigOptionsRequestThresholdOptionType>(value["RequestThresholdOptions2"]["RequestThresholdOption"], &item->request_threshold_options2);
  }
  if(value.isMember("ConnectionThresholdOptions") && value["ConnectionThresholdOptions"].isMember("ConnectionThresholdOption")) {
    Json2Array<YundunGetDdosConfigOptionsConnectionThresholdOptionType>(value["ConnectionThresholdOptions"]["ConnectionThresholdOption"], &item->connection_threshold_options);
  }
  if(value.isMember("QpsOptions1")  && value["QpsOptions1"].isMember("value")) {
    Json2Array<std::string>(value["QpsOptions1"]["value"], &item->qps_options1);
  }
  if(value.isMember("QpsOptions2")  && value["QpsOptions2"].isMember("value")) {
    Json2Array<std::string>(value["QpsOptions2"]["value"], &item->qps_options2);
  }
}
}

int Yundun::GetDdosConfigOptions(YundunGetDdosConfigOptionsResponseType* response,
                       YundunErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","GetDdosConfigOptions");
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
