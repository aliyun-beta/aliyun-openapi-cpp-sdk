#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_emr.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EmrListExecutePlanJobsExecutePlanJobInfoType* item);
void Json2Type(const Json::Value& value, EmrListExecutePlanJobsResponseType* item);

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
void Json2Type(const Json::Value& value, EmrListExecutePlanJobsExecutePlanJobInfoType* item) {
  if(value.isMember("id")) {
    item->id = value["id"].asString();
  }
  if(value.isMember("isMaster")) {
    item->is_master = value["isMaster"].asString();
  }
  if(value.isMember("LastRunStatus")) {
    item->last_run_status = value["LastRunStatus"].asString();
  }
  if(value.isMember("RunTime")) {
    item->run_time = value["RunTime"].asString();
  }
  if(value.isMember("ClusterName")) {
    item->cluster_name = value["ClusterName"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
  }
}
void Json2Type(const Json::Value& value, EmrListExecutePlanJobsResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ExecutePlanJobs") && value["ExecutePlanJobs"].isMember("ExecutePlanJobInfo")) {
    Json2Array<EmrListExecutePlanJobsExecutePlanJobInfoType>(value["ExecutePlanJobs"]["ExecutePlanJobInfo"], &item->execute_plan_jobs);
  }
}
}

int Emr::ListExecutePlanJobs(const EmrListExecutePlanJobsRequestType& req,
                      EmrListExecutePlanJobsResponseType* response,
                       EmrErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","ListExecutePlanJobs");
  if(!req.execute_plan_execute_node_id.empty()) {
    req_rpc->AddRequestQuery("ExecutePlanExecuteNodeId", req.execute_plan_execute_node_id);
  }
  if(!req.execute_plan_exec_record_id.empty()) {
    req_rpc->AddRequestQuery("ExecutePlanExecRecordId", req.execute_plan_exec_record_id);
  }
  if(!req.is_desc.empty()) {
    req_rpc->AddRequestQuery("IsDesc", req.is_desc);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
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
