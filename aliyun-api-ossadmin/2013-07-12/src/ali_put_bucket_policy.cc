#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_oss_admin.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, PutBucketPolicyResponseType* item);

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
void Json2Type(const Json::Value& value, PutBucketPolicyResponseType* item) {
  if(value.isMember("Code")) {
    item->code = value["Code"].asString();
  }
  if(value.isMember("Message")) {
    item->message = value["Message"].asString();
  }
  if(value.isMember("Success")) {
    item->success = value["Success"].asBool();
  }
}
}

int OssAdmin::PutBucketPolicy(const PutBucketPolicyRequestType& req,
                      PutBucketPolicyResponseType* response,
                       AliOssAdminErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","PutBucketPolicy");
  if(!req.uid.empty()) {
    req_rpc->AddRequestQuery("uid", req.uid);
  }
  if(!req.bid.empty()) {
    req_rpc->AddRequestQuery("bid", req.bid);
  }
  if(!req.bucket_name.empty()) {
    req_rpc->AddRequestQuery("BucketName", req.bucket_name);
  }
  if(!req.iam_policy.empty()) {
    req_rpc->AddRequestQuery("IamPolicy", req.iam_policy);
  }
  if(!req.disallow_empty_refer.empty()) {
    req_rpc->AddRequestQuery("DisallowEmptyRefer", req.disallow_empty_refer);
  }
  if(!req.enable_dual_cluster.empty()) {
    req_rpc->AddRequestQuery("EnableDualCluster", req.enable_dual_cluster);
  }
  if(!req.error_file.empty()) {
    req_rpc->AddRequestQuery("ErrorFile", req.error_file);
  }
  if(!req.index_file.empty()) {
    req_rpc->AddRequestQuery("IndexFile", req.index_file);
  }
  if(!req.location.empty()) {
    req_rpc->AddRequestQuery("Location", req.location);
  }
  if(!req.log_bucket.empty()) {
    req_rpc->AddRequestQuery("LogBucket", req.log_bucket);
  }
  if(!req.log_prefix.empty()) {
    req_rpc->AddRequestQuery("LogPrefix", req.log_prefix);
  }
  if(!req.white_refer_list.empty()) {
    req_rpc->AddRequestQuery("WhiteReferList", req.white_refer_list);
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
