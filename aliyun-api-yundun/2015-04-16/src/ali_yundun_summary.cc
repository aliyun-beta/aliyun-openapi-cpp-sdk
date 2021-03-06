#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_yundun.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, YundunSummaryDdosType* item);
void Json2Type(const Json::Value& value, YundunSummaryBruteForceType* item);
void Json2Type(const Json::Value& value, YundunSummaryWebshellType* item);
void Json2Type(const Json::Value& value, YundunSummaryRemoteLoginType* item);
void Json2Type(const Json::Value& value, YundunSummaryWebAttackType* item);
void Json2Type(const Json::Value& value, YundunSummaryWebLeakType* item);
void Json2Type(const Json::Value& value, YundunSummaryResponseType* item);

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
void Json2Type(const Json::Value& value, YundunSummaryDdosType* item) {
  if(value.isMember("Count")) {
    item->count = value["Count"].asInt();
  }
  if(value.isMember("HostCount")) {
    item->host_count = value["HostCount"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunSummaryBruteForceType* item) {
  if(value.isMember("Count")) {
    item->count = value["Count"].asInt();
  }
  if(value.isMember("HostCount")) {
    item->host_count = value["HostCount"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunSummaryWebshellType* item) {
  if(value.isMember("Count")) {
    item->count = value["Count"].asInt();
  }
  if(value.isMember("HostCount")) {
    item->host_count = value["HostCount"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunSummaryRemoteLoginType* item) {
  if(value.isMember("Count")) {
    item->count = value["Count"].asInt();
  }
  if(value.isMember("HostCount")) {
    item->host_count = value["HostCount"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunSummaryWebAttackType* item) {
  if(value.isMember("Count")) {
    item->count = value["Count"].asInt();
  }
  if(value.isMember("HostCount")) {
    item->host_count = value["HostCount"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunSummaryWebLeakType* item) {
  if(value.isMember("Count")) {
    item->count = value["Count"].asInt();
  }
  if(value.isMember("HostCount")) {
    item->host_count = value["HostCount"].asInt();
  }
}
void Json2Type(const Json::Value& value, YundunSummaryResponseType* item) {
  if(value.isMember("Status")) {
    item->status = value["Status"].asInt();
  }
  if(value.isMember("AbnormalHostCount")) {
    item->abnormal_host_count = value["AbnormalHostCount"].asInt();
  }
  if(value.isMember("Ddos")) {
    Json2Type(value["Ddos"], &item->ddos);
  }
  if(value.isMember("BruteForce")) {
    Json2Type(value["BruteForce"], &item->brute_force);
  }
  if(value.isMember("Webshell")) {
    Json2Type(value["Webshell"], &item->webshell);
  }
  if(value.isMember("RemoteLogin")) {
    Json2Type(value["RemoteLogin"], &item->remote_login);
  }
  if(value.isMember("WebAttack")) {
    Json2Type(value["WebAttack"], &item->web_attack);
  }
  if(value.isMember("WebLeak")) {
    Json2Type(value["WebLeak"], &item->web_leak);
  }
}
}

int Yundun::Summary(const YundunSummaryRequestType& req,
                      YundunSummaryResponseType* response,
                       YundunErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","Summary");
  if(!req.jst_owner_id.empty()) {
    req_rpc->AddRequestQuery("JstOwnerId", req.jst_owner_id);
  }
  if(!req.instance_ids.empty()) {
    req_rpc->AddRequestQuery("InstanceIds", req.instance_ids);
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
