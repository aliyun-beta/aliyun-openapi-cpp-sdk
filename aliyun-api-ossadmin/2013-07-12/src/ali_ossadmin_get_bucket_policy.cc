#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ossadmin.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, OssAdminGetBucketPolicyWhiteReferListType* item);
void Json2Type(const Json::Value& value, OssAdminGetBucketPolicyResponseType* item);

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
void Json2Type(const Json::Value& value, OssAdminGetBucketPolicyWhiteReferListType* item) {
  if(value.isMember("ReferList")  && value["ReferList"].isMember("string")) {
    Json2Array<std::string>(value["ReferList"]["string"], &item->refer_list);
  }
}
void Json2Type(const Json::Value& value, OssAdminGetBucketPolicyResponseType* item) {
  if(value.isMember("DisallowEmptyRefer")) {
    item->disallow_empty_refer = value["DisallowEmptyRefer"].asBool();
  }
  if(value.isMember("EnableDualCluster")) {
    item->enable_dual_cluster = value["EnableDualCluster"].asBool();
  }
  if(value.isMember("ErrorFile")) {
    item->error_file = value["ErrorFile"].asString();
  }
  if(value.isMember("IndexFile")) {
    item->index_file = value["IndexFile"].asString();
  }
  if(value.isMember("Location")) {
    item->location = value["Location"].asString();
  }
  if(value.isMember("LogBucket")) {
    item->log_bucket = value["LogBucket"].asString();
  }
  if(value.isMember("LogPrefix")) {
    item->log_prefix = value["LogPrefix"].asString();
  }
  if(value.isMember("IamPolicy")) {
    item->iam_policy = value["IamPolicy"].asString();
  }
  if(value.isMember("WhiteReferList")) {
    Json2Type(value["WhiteReferList"], &item->white_refer_list);
  }
}
}

int OssAdmin::GetBucketPolicy(const OssAdminGetBucketPolicyRequestType& req,
                      OssAdminGetBucketPolicyResponseType* response,
                       OssAdminErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","GetBucketPolicy");
  if(!req.uid.empty()) {
    req_rpc->AddRequestQuery("uid", req.uid);
  }
  if(!req.bid.empty()) {
    req_rpc->AddRequestQuery("bid", req.bid);
  }
  if(!req.bucket_name.empty()) {
    req_rpc->AddRequestQuery("BucketName", req.bucket_name);
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
