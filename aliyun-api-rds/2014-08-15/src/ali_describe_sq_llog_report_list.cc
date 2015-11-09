#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rds.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeSQLLogReportListLatencyTopNItemType* item);
void Json2Type(const Json::Value& value, DescribeSQLLogReportListQPSTopNItemType* item);
void Json2Type(const Json::Value& value, DescribeSQLLogReportListItemType* item);
void Json2Type(const Json::Value& value, DescribeSQLLogReportListResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeSQLLogReportListLatencyTopNItemType* item) {
  if(value.isMember("SQLText")) {
    item->sq_ltext = value["SQLText"].asString();
  }
  if(value.isMember("AvgLatency")) {
    item->avg_latency = value["AvgLatency"].asInt();
  }
  if(value.isMember("SQLExecuteTimes")) {
    item->sq_lexecute_times = value["SQLExecuteTimes"].asInt();
  }
}
void Json2Type(const Json::Value& value, DescribeSQLLogReportListQPSTopNItemType* item) {
  if(value.isMember("SQLText")) {
    item->sq_ltext = value["SQLText"].asString();
  }
  if(value.isMember("SQLExecuteTimes")) {
    item->sq_lexecute_times = value["SQLExecuteTimes"].asInt();
  }
}
void Json2Type(const Json::Value& value, DescribeSQLLogReportListItemType* item) {
  if(value.isMember("ReportTime")) {
    item->report_time = value["ReportTime"].asString();
  }
  if(value.isMember("LatencyTopNItems") && value["LatencyTopNItems"].isMember("LatencyTopNItem")) {
    Json2Array<DescribeSQLLogReportListLatencyTopNItemType>(value["LatencyTopNItems"]["LatencyTopNItem"], &item->latency_top_nitems);
  }
  if(value.isMember("QPSTopNItems") && value["QPSTopNItems"].isMember("QPSTopNItem")) {
    Json2Array<DescribeSQLLogReportListQPSTopNItemType>(value["QPSTopNItems"]["QPSTopNItem"], &item->qp_stop_nitems);
  }
}
void Json2Type(const Json::Value& value, DescribeSQLLogReportListResponseType* item) {
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asInt();
  }
  if(value.isMember("Items") && value["Items"].isMember("Item")) {
    Json2Array<DescribeSQLLogReportListItemType>(value["Items"]["Item"], &item->items);
  }
}
}

int Rds::DescribeSQLLogReportList(const DescribeSQLLogReportListRequestType& req,
                      DescribeSQLLogReportListResponseType* response,
                       AliRdsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeSQLLogReportList");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
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
