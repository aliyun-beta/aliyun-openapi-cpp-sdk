#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rdsregion.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstancesByPerformanceDBInstancePerformanceType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstancesByPerformanceResponseType* item);

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
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstancesByPerformanceDBInstancePerformanceType* item) {
  if(value.isMember("CPUUsage")) {
    item->cp_uusage = value["CPUUsage"].asString();
  }
  if(value.isMember("IOPSUsage")) {
    item->io_ps_usage = value["IOPSUsage"].asString();
  }
  if(value.isMember("DiskUsage")) {
    item->disk_usage = value["DiskUsage"].asString();
  }
  if(value.isMember("SessionUsage")) {
    item->session_usage = value["SessionUsage"].asString();
  }
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("DBInstanceDescription")) {
    item->db_instance_description = value["DBInstanceDescription"].asString();
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstancesByPerformanceResponseType* item) {
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asInt();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asInt();
  }
  if(value.isMember("Items") && value["Items"].isMember("DBInstancePerformance")) {
    Json2Array<RdsRegionDescribeDBInstancesByPerformanceDBInstancePerformanceType>(value["Items"]["DBInstancePerformance"], &item->items);
  }
}
}

int RdsRegion::DescribeDBInstancesByPerformance(const RdsRegionDescribeDBInstancesByPerformanceRequestType& req,
                      RdsRegionDescribeDBInstancesByPerformanceResponseType* response,
                       RdsRegionErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeDBInstancesByPerformance");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.client_token.empty()) {
    req_rpc->AddRequestQuery("ClientToken", req.client_token);
  }
  if(!req.proxy_id.empty()) {
    req_rpc->AddRequestQuery("proxyId", req.proxy_id);
  }
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.sort_method.empty()) {
    req_rpc->AddRequestQuery("SortMethod", req.sort_method);
  }
  if(!req.sort_key.empty()) {
    req_rpc->AddRequestQuery("SortKey", req.sort_key);
  }
  if(!req.tag1key.empty()) {
    req_rpc->AddRequestQuery("Tag.1.key", req.tag1key);
  }
  if(!req.tag2key.empty()) {
    req_rpc->AddRequestQuery("Tag.2.key", req.tag2key);
  }
  if(!req.tag3key.empty()) {
    req_rpc->AddRequestQuery("Tag.3.key", req.tag3key);
  }
  if(!req.tag4key.empty()) {
    req_rpc->AddRequestQuery("Tag.4.key", req.tag4key);
  }
  if(!req.tag5key.empty()) {
    req_rpc->AddRequestQuery("Tag.5.key", req.tag5key);
  }
  if(!req.tag1value.empty()) {
    req_rpc->AddRequestQuery("Tag.1.value", req.tag1value);
  }
  if(!req.tag2value.empty()) {
    req_rpc->AddRequestQuery("Tag.2.value", req.tag2value);
  }
  if(!req.tag3value.empty()) {
    req_rpc->AddRequestQuery("Tag.3.value", req.tag3value);
  }
  if(!req.tag4value.empty()) {
    req_rpc->AddRequestQuery("Tag.4.value", req.tag4value);
  }
  if(!req.tag5value.empty()) {
    req_rpc->AddRequestQuery("Tag.5.value", req.tag5value);
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
