#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EcsDescribeResourceByTagsResourceType* item);
void Json2Type(const Json::Value& value, EcsDescribeResourceByTagsResponseType* item);

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
void Json2Type(const Json::Value& value, EcsDescribeResourceByTagsResourceType* item) {
  if(value.isMember("ResourceId")) {
    item->resource_id = value["ResourceId"].asString();
  }
  if(value.isMember("ResourceType")) {
    item->resource_type = value["ResourceType"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
}
void Json2Type(const Json::Value& value, EcsDescribeResourceByTagsResponseType* item) {
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("Resources") && value["Resources"].isMember("Resource")) {
    Json2Array<EcsDescribeResourceByTagsResourceType>(value["Resources"]["Resource"], &item->resources);
  }
}
}

int Ecs::DescribeResourceByTags(const EcsDescribeResourceByTagsRequestType& req,
                      EcsDescribeResourceByTagsResponseType* response,
                       EcsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeResourceByTags");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.resource_type.empty()) {
    req_rpc->AddRequestQuery("ResourceType", req.resource_type);
  }
  if(!req.tag1_key.empty()) {
    req_rpc->AddRequestQuery("Tag.1.Key", req.tag1_key);
  }
  if(!req.tag2_key.empty()) {
    req_rpc->AddRequestQuery("Tag.2.Key", req.tag2_key);
  }
  if(!req.tag3_key.empty()) {
    req_rpc->AddRequestQuery("Tag.3.Key", req.tag3_key);
  }
  if(!req.tag4_key.empty()) {
    req_rpc->AddRequestQuery("Tag.4.Key", req.tag4_key);
  }
  if(!req.tag5_key.empty()) {
    req_rpc->AddRequestQuery("Tag.5.Key", req.tag5_key);
  }
  if(!req.tag1_value.empty()) {
    req_rpc->AddRequestQuery("Tag.1.Value", req.tag1_value);
  }
  if(!req.tag2_value.empty()) {
    req_rpc->AddRequestQuery("Tag.2.Value", req.tag2_value);
  }
  if(!req.tag3_value.empty()) {
    req_rpc->AddRequestQuery("Tag.3.Value", req.tag3_value);
  }
  if(!req.tag4_value.empty()) {
    req_rpc->AddRequestQuery("Tag.4.Value", req.tag4_value);
  }
  if(!req.tag5_value.empty()) {
    req_rpc->AddRequestQuery("Tag.5.Value", req.tag5_value);
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
