#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rdsregion.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeSlowLogRecordsSQLSlowRecordType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeSlowLogRecordsResponseType* item);

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
void Json2Type(const Json::Value& value, RdsRegionDescribeSlowLogRecordsSQLSlowRecordType* item) {
  if(value.isMember("HostAddress")) {
    item->host_address = value["HostAddress"].asString();
  }
  if(value.isMember("DBName")) {
    item->db_name = value["DBName"].asString();
  }
  if(value.isMember("SQLText")) {
    item->sq_ltext = value["SQLText"].asString();
  }
  if(value.isMember("QueryTimes")) {
    item->query_times = value["QueryTimes"].asInt();
  }
  if(value.isMember("LockTimes")) {
    item->lock_times = value["LockTimes"].asInt();
  }
  if(value.isMember("ParseRowCounts")) {
    item->parse_row_counts = value["ParseRowCounts"].asInt();
  }
  if(value.isMember("ReturnRowCounts")) {
    item->return_row_counts = value["ReturnRowCounts"].asInt();
  }
  if(value.isMember("ExecutionStartTime")) {
    item->execution_start_time = value["ExecutionStartTime"].asString();
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeSlowLogRecordsResponseType* item) {
  if(value.isMember("Engine")) {
    item->engine = value["Engine"].asString();
  }
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asInt();
  }
  if(value.isMember("Items") && value["Items"].isMember("SQLSlowRecord")) {
    Json2Array<RdsRegionDescribeSlowLogRecordsSQLSlowRecordType>(value["Items"]["SQLSlowRecord"], &item->items);
  }
}
}

int RdsRegion::DescribeSlowLogRecords(const RdsRegionDescribeSlowLogRecordsRequestType& req,
                      RdsRegionDescribeSlowLogRecordsResponseType* response,
                       RdsRegionErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeSlowLogRecords");
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
  if(!req.sq_lid.empty()) {
    req_rpc->AddRequestQuery("SQLId", req.sq_lid);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.db_name.empty()) {
    req_rpc->AddRequestQuery("DBName", req.db_name);
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
