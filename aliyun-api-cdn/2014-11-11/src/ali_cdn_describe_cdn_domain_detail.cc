#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_cdn.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CdnDescribeCdnDomainDetailGetDomainDetailModelType* item);
void Json2Type(const Json::Value& value, CdnDescribeCdnDomainDetailResponseType* item);

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
void Json2Type(const Json::Value& value, CdnDescribeCdnDomainDetailGetDomainDetailModelType* item) {
  if(value.isMember("GmtCreated")) {
    item->gmt_created = value["GmtCreated"].asString();
  }
  if(value.isMember("GmtModified")) {
    item->gmt_modified = value["GmtModified"].asString();
  }
  if(value.isMember("SourceType")) {
    item->source_type = value["SourceType"].asString();
  }
  if(value.isMember("DomainStatus")) {
    item->domain_status = value["DomainStatus"].asString();
  }
  if(value.isMember("CdnType")) {
    item->cdn_type = value["CdnType"].asString();
  }
  if(value.isMember("Cname")) {
    item->cname = value["Cname"].asString();
  }
  if(value.isMember("HttpsCname")) {
    item->https_cname = value["HttpsCname"].asString();
  }
  if(value.isMember("DomainName")) {
    item->domain_name = value["DomainName"].asString();
  }
  if(value.isMember("Remark")) {
    item->remark = value["Remark"].asString();
  }
  if(value.isMember("Sources")  && value["Sources"].isMember("Source")) {
    Json2Array<std::string>(value["Sources"]["Source"], &item->sources);
  }
}
void Json2Type(const Json::Value& value, CdnDescribeCdnDomainDetailResponseType* item) {
  if(value.isMember("GetDomainDetailModel")) {
    Json2Type(value["GetDomainDetailModel"], &item->get_domain_detail_model);
  }
}
}

int Cdn::DescribeCdnDomainDetail(const CdnDescribeCdnDomainDetailRequestType& req,
                      CdnDescribeCdnDomainDetailResponseType* response,
                       CdnErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeCdnDomainDetail");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.domain_name.empty()) {
    req_rpc->AddRequestQuery("DomainName", req.domain_name);
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
