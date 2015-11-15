#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_yundun.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, YundunListInstanceInfosInstanceInfoType* item);
void Json2Type(const Json::Value& value, YundunListInstanceInfosResponseType* item);

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
void Json2Type(const Json::Value& value, YundunListInstanceInfosInstanceInfoType* item) {
  if(value.isMember("Region")) {
    item->region = value["Region"].asString();
  }
  if(value.isMember("RegionName")) {
    item->region_name = value["RegionName"].asString();
  }
  if(value.isMember("RegionEnName")) {
    item->region_en_name = value["RegionEnName"].asString();
  }
  if(value.isMember("InstanceName")) {
    item->instance_name = value["InstanceName"].asString();
  }
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("Ip")) {
    item->ip = value["Ip"].asString();
  }
  if(value.isMember("InternetIp")) {
    item->internet_ip = value["InternetIp"].asString();
  }
  if(value.isMember("IntranetIp")) {
    item->intranet_ip = value["IntranetIp"].asString();
  }
  if(value.isMember("Ddos")) {
    item->ddos = value["Ddos"].asInt();
  }
  if(value.isMember("HostEvent")) {
    item->host_event = value["HostEvent"].asInt();
  }
  if(value.isMember("SecureCheck")) {
    item->secure_check = value["SecureCheck"].asInt();
  }
  if(value.isMember("AegisStatus")) {
    item->aegis_status = value["AegisStatus"].asInt();
  }
  if(value.isMember("Waf")) {
    item->waf = value["Waf"].asInt();
  }
  if(value.isMember("IsLock")) {
    item->is_lock = value["IsLock"].asBool();
  }
  if(value.isMember("LockType")) {
    item->lock_type = value["LockType"].asString();
  }
  if(value.isMember("UnLockTimes")) {
    item->un_lock_times = value["UnLockTimes"].asInt();
  }
  if(value.isMember("TriggerTime")) {
    item->trigger_time = value["TriggerTime"].asString();
  }
}
void Json2Type(const Json::Value& value, YundunListInstanceInfosResponseType* item) {
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("InfosList") && value["InfosList"].isMember("InstanceInfo")) {
    Json2Array<YundunListInstanceInfosInstanceInfoType>(value["InfosList"]["InstanceInfo"], &item->infos_list);
  }
}
}

int Yundun::ListInstanceInfos(const YundunListInstanceInfosRequestType& req,
                      YundunListInstanceInfosResponseType* response,
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
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","ListInstanceInfos");
  if(!req.jst_owner_id.empty()) {
    req_rpc->AddRequestQuery("JstOwnerId", req.jst_owner_id);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.region.empty()) {
    req_rpc->AddRequestQuery("Region", req.region);
  }
  if(!req.event_type.empty()) {
    req_rpc->AddRequestQuery("EventType", req.event_type);
  }
  if(!req.instance_name.empty()) {
    req_rpc->AddRequestQuery("InstanceName", req.instance_name);
  }
  if(!req.instance_type.empty()) {
    req_rpc->AddRequestQuery("InstanceType", req.instance_type);
  }
  if(!req.instance_ids.empty()) {
    req_rpc->AddRequestQuery("InstanceIds", req.instance_ids);
  }
  if(!this->region_id_.empty()) {
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
