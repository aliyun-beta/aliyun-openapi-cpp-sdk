#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_oss_admin.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, GetBucketPolicyWhiteReferListType* item);
void Json2Type(const Json::Value& value, GetBucketPolicyResponseType* item);

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
void Json2Type(const Json::Value& value, GetBucketPolicyWhiteReferListType* item) {
  if(value.isMember("ReferList")  && value["ReferList"].isMember("string")) {
    Json2Array<std::string>(value["ReferList"]["string"], &item->refer_list);
  }
}
void Json2Type(const Json::Value& value, GetBucketPolicyResponseType* item) {
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

int OssAdmin::GetBucketPolicy(const GetBucketPolicyRequestType& req,
                      GetBucketPolicyResponseType* response,
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
