#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rdsregion.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeAbnormalDBInstancesAbnormalItemType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeAbnormalDBInstancesInstanceResultType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeAbnormalDBInstancesResponseType* item);

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
void Json2Type(const Json::Value& value, RdsRegionDescribeAbnormalDBInstancesAbnormalItemType* item) {
  if(value.isMember("CheckTime")) {
    item->check_time = value["CheckTime"].asString();
  }
  if(value.isMember("CheckItem")) {
    item->check_item = value["CheckItem"].asString();
  }
  if(value.isMember("AbnormalReason")) {
    item->abnormal_reason = value["AbnormalReason"].asString();
  }
  if(value.isMember("AbnormalValue")) {
    item->abnormal_value = value["AbnormalValue"].asString();
  }
  if(value.isMember("AbnormalDetail")) {
    item->abnormal_detail = value["AbnormalDetail"].asString();
  }
  if(value.isMember("AdviceKey")) {
    item->advice_key = value["AdviceKey"].asString();
  }
  if(value.isMember("AdviseValue")  && value["AdviseValue"].isMember("String")) {
    Json2Array<std::string>(value["AdviseValue"]["String"], &item->advise_value);
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeAbnormalDBInstancesInstanceResultType* item) {
  if(value.isMember("DBInstanceDescription")) {
    item->db_instance_description = value["DBInstanceDescription"].asString();
  }
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("AbnormalItems") && value["AbnormalItems"].isMember("AbnormalItem")) {
    Json2Array<RdsRegionDescribeAbnormalDBInstancesAbnormalItemType>(value["AbnormalItems"]["AbnormalItem"], &item->abnormal_items);
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeAbnormalDBInstancesResponseType* item) {
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asInt();
  }
  if(value.isMember("Items") && value["Items"].isMember("InstanceResult")) {
    Json2Array<RdsRegionDescribeAbnormalDBInstancesInstanceResultType>(value["Items"]["InstanceResult"], &item->items);
  }
}
}

int RdsRegion::DescribeAbnormalDBInstances(const RdsRegionDescribeAbnormalDBInstancesRequestType& req,
                      RdsRegionDescribeAbnormalDBInstancesResponseType* response,
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
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","DescribeAbnormalDBInstances");
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
