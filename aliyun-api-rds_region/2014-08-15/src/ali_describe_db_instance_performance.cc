#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rds_region.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeDBInstancePerformancePerformanceValueType* item);
void Json2Type(const Json::Value& value, DescribeDBInstancePerformancePerformanceKeyType* item);
void Json2Type(const Json::Value& value, DescribeDBInstancePerformanceResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeDBInstancePerformancePerformanceValueType* item) {
  if(value.isMember("Value")) {
    item->value = value["Value"].asString();
  }
  if(value.isMember("Date")) {
    item->date = value["Date"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstancePerformancePerformanceKeyType* item) {
  if(value.isMember("Key")) {
    item->key = value["Key"].asString();
  }
  if(value.isMember("Unit")) {
    item->unit = value["Unit"].asString();
  }
  if(value.isMember("ValueFormat")) {
    item->value_format = value["ValueFormat"].asString();
  }
  if(value.isMember("Values") && value["Values"].isMember("PerformanceValue")) {
    Json2Array<DescribeDBInstancePerformancePerformanceValueType>(value["Values"]["PerformanceValue"], &item->values);
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstancePerformanceResponseType* item) {
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("Engine")) {
    item->engine = value["Engine"].asString();
  }
  if(value.isMember("StartTime")) {
    item->start_time = value["StartTime"].asString();
  }
  if(value.isMember("EndTime")) {
    item->end_time = value["EndTime"].asString();
  }
  if(value.isMember("PerformanceKeys") && value["PerformanceKeys"].isMember("PerformanceKey")) {
    Json2Array<DescribeDBInstancePerformancePerformanceKeyType>(value["PerformanceKeys"]["PerformanceKey"], &item->performance_keys);
  }
}
}

int RdsRegion::DescribeDBInstancePerformance(const DescribeDBInstancePerformanceRequestType& req,
                      DescribeDBInstancePerformanceResponseType* response,
                       AliRdsRegionErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeDBInstancePerformance");
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
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.key.empty()) {
    req_rpc->AddRequestQuery("Key", req.key);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
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
