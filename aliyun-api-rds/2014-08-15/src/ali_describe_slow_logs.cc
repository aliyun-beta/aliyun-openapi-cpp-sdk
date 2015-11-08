#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rds.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeSlowLogsSQLSlowLogType* item);
void Json2Type(const Json::Value& value, DescribeSlowLogsResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeSlowLogsSQLSlowLogType* item) {
  if(value.isMember("SlowLogId")) {
    item->slow_log_id = value["SlowLogId"].asInt();
  }
  if(value.isMember("SQLId")) {
    item->sq_lid = value["SQLId"].asInt();
  }
  if(value.isMember("DBName")) {
    item->db_name = value["DBName"].asString();
  }
  if(value.isMember("SQLText")) {
    item->sq_ltext = value["SQLText"].asString();
  }
  if(value.isMember("MySQLTotalExecutionCounts")) {
    item->my_sq_ltotal_execution_counts = value["MySQLTotalExecutionCounts"].asInt();
  }
  if(value.isMember("MySQLTotalExecutionTimes")) {
    item->my_sq_ltotal_execution_times = value["MySQLTotalExecutionTimes"].asInt();
  }
  if(value.isMember("TotalLockTimes")) {
    item->total_lock_times = value["TotalLockTimes"].asInt();
  }
  if(value.isMember("MaxLockTime")) {
    item->max_lock_time = value["MaxLockTime"].asInt();
  }
  if(value.isMember("ParseTotalRowCounts")) {
    item->parse_total_row_counts = value["ParseTotalRowCounts"].asInt();
  }
  if(value.isMember("ParseMaxRowCount")) {
    item->parse_max_row_count = value["ParseMaxRowCount"].asInt();
  }
  if(value.isMember("ReturnTotalRowCounts")) {
    item->return_total_row_counts = value["ReturnTotalRowCounts"].asInt();
  }
  if(value.isMember("ReturnMaxRowCount")) {
    item->return_max_row_count = value["ReturnMaxRowCount"].asInt();
  }
  if(value.isMember("CreateTime")) {
    item->create_time = value["CreateTime"].asString();
  }
  if(value.isMember("SQLServerTotalExecutionCounts")) {
    item->sq_lserver_total_execution_counts = value["SQLServerTotalExecutionCounts"].asInt();
  }
  if(value.isMember("SQLServerTotalExecutionTimes")) {
    item->sq_lserver_total_execution_times = value["SQLServerTotalExecutionTimes"].asInt();
  }
  if(value.isMember("TotalLogicalReadCounts")) {
    item->total_logical_read_counts = value["TotalLogicalReadCounts"].asInt();
  }
  if(value.isMember("TotalPhysicalReadCounts")) {
    item->total_physical_read_counts = value["TotalPhysicalReadCounts"].asInt();
  }
  if(value.isMember("ReportTime")) {
    item->report_time = value["ReportTime"].asString();
  }
  if(value.isMember("MaxExecutionTime")) {
    item->max_execution_time = value["MaxExecutionTime"].asInt();
  }
  if(value.isMember("AvgExecutionTime")) {
    item->avg_execution_time = value["AvgExecutionTime"].asInt();
  }
}
void Json2Type(const Json::Value& value, DescribeSlowLogsResponseType* item) {
  if(value.isMember("Engine")) {
    item->engine = value["Engine"].asString();
  }
  if(value.isMember("StartTime")) {
    item->start_time = value["StartTime"].asString();
  }
  if(value.isMember("EndTime")) {
    item->end_time = value["EndTime"].asString();
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
  if(value.isMember("Items") && value["Items"].isMember("SQLSlowLog")) {
    Json2Array<DescribeSlowLogsSQLSlowLogType>(value["Items"]["SQLSlowLog"], &item->items);
  }
}
}

int Rds::DescribeSlowLogs(const DescribeSlowLogsRequestType& req,
                      DescribeSlowLogsResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeSlowLogs");
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
  if(!req.db_name.empty()) {
    req_rpc->AddRequestQuery("DBName", req.db_name);
  }
  if(!req.sort_key.empty()) {
    req_rpc->AddRequestQuery("SortKey", req.sort_key);
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
  if(status_code!= 200 && error_info && !parse_success) {
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
