#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rds_region.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeDBInstancesByExpireTimeDBInstanceExpireTimeType* item);
void Json2Type(const Json::Value& value, DescribeDBInstancesByExpireTimeResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeDBInstancesByExpireTimeDBInstanceExpireTimeType* item) {
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("DBInstanceDescription")) {
    item->db_instance_description = value["DBInstanceDescription"].asString();
  }
  if(value.isMember("ExpireTime")) {
    item->expire_time = value["ExpireTime"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeDBInstancesByExpireTimeResponseType* item) {
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asInt();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asInt();
  }
  if(value.isMember("Items") && value["Items"].isMember("DBInstanceExpireTime")) {
    Json2Array<DescribeDBInstancesByExpireTimeDBInstanceExpireTimeType>(value["Items"]["DBInstanceExpireTime"], &item->items);
  }
}
}

int RdsRegion::DescribeDBInstancesByExpireTime(const DescribeDBInstancesByExpireTimeRequestType& req,
                      DescribeDBInstancesByExpireTimeResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeDBInstancesByExpireTime");
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
  if(!req.expire_period.empty()) {
    req_rpc->AddRequestQuery("ExpirePeriod", req.expire_period);
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
