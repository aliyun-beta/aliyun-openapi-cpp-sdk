#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_yundun.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, YundunSecureCheckInfoType* item);
void Json2Type(const Json::Value& value, YundunSecureCheckResponseType* item);

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
void Json2Type(const Json::Value& value, YundunSecureCheckInfoType* item) {
  if(value.isMember("Ip")) {
    item->ip = value["Ip"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
  }
  if(value.isMember("VulNum")) {
    item->vul_num = value["VulNum"].asString();
  }
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
}
void Json2Type(const Json::Value& value, YundunSecureCheckResponseType* item) {
  if(value.isMember("RecentInstanceId")) {
    item->recent_instance_id = value["RecentInstanceId"].asString();
  }
  if(value.isMember("ProblemList") && value["ProblemList"].isMember("Info")) {
    Json2Array<YundunSecureCheckInfoType>(value["ProblemList"]["Info"], &item->problem_list);
  }
  if(value.isMember("NoProblemList") && value["NoProblemList"].isMember("Info")) {
    Json2Array<YundunSecureCheckInfoType>(value["NoProblemList"]["Info"], &item->no_problem_list);
  }
  if(value.isMember("NoScanList") && value["NoScanList"].isMember("Info")) {
    Json2Array<YundunSecureCheckInfoType>(value["NoScanList"]["Info"], &item->no_scan_list);
  }
  if(value.isMember("ScanningList") && value["ScanningList"].isMember("Info")) {
    Json2Array<YundunSecureCheckInfoType>(value["ScanningList"]["Info"], &item->scanning_list);
  }
  if(value.isMember("InnerIpList") && value["InnerIpList"].isMember("Info")) {
    Json2Array<YundunSecureCheckInfoType>(value["InnerIpList"]["Info"], &item->inner_ip_list);
  }
}
}

int Yundun::SecureCheck(const YundunSecureCheckRequestType& req,
                      YundunSecureCheckResponseType* response,
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
  req_rpc->AddRequestQuery("Action","SecureCheck");
  if(!req.jst_owner_id.empty()) {
    req_rpc->AddRequestQuery("JstOwnerId", req.jst_owner_id);
  }
  if(!req.instance_ids.empty()) {
    req_rpc->AddRequestQuery("InstanceIds", req.instance_ids);
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
