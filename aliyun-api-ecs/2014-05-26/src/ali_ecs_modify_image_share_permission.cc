#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EcsModifyImageSharePermissionResponseType* item);

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
void Json2Type(const Json::Value& value, EcsModifyImageSharePermissionResponseType* item) {
}
}

int Ecs::ModifyImageSharePermission(const EcsModifyImageSharePermissionRequestType& req,
                      EcsModifyImageSharePermissionResponseType* response,
                       EcsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","ModifyImageSharePermission");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.image_id.empty()) {
    req_rpc->AddRequestQuery("ImageId", req.image_id);
  }
  if(!req.add_account1.empty()) {
    req_rpc->AddRequestQuery("AddAccount.1", req.add_account1);
  }
  if(!req.add_account2.empty()) {
    req_rpc->AddRequestQuery("AddAccount.2", req.add_account2);
  }
  if(!req.add_account3.empty()) {
    req_rpc->AddRequestQuery("AddAccount.3", req.add_account3);
  }
  if(!req.add_account4.empty()) {
    req_rpc->AddRequestQuery("AddAccount.4", req.add_account4);
  }
  if(!req.add_account5.empty()) {
    req_rpc->AddRequestQuery("AddAccount.5", req.add_account5);
  }
  if(!req.add_account6.empty()) {
    req_rpc->AddRequestQuery("AddAccount.6", req.add_account6);
  }
  if(!req.add_account7.empty()) {
    req_rpc->AddRequestQuery("AddAccount.7", req.add_account7);
  }
  if(!req.add_account8.empty()) {
    req_rpc->AddRequestQuery("AddAccount.8", req.add_account8);
  }
  if(!req.add_account9.empty()) {
    req_rpc->AddRequestQuery("AddAccount.9", req.add_account9);
  }
  if(!req.add_account10.empty()) {
    req_rpc->AddRequestQuery("AddAccount.10", req.add_account10);
  }
  if(!req.remove_account1.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.1", req.remove_account1);
  }
  if(!req.remove_account2.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.2", req.remove_account2);
  }
  if(!req.remove_account3.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.3", req.remove_account3);
  }
  if(!req.remove_account4.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.4", req.remove_account4);
  }
  if(!req.remove_account5.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.5", req.remove_account5);
  }
  if(!req.remove_account6.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.6", req.remove_account6);
  }
  if(!req.remove_account7.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.7", req.remove_account7);
  }
  if(!req.remove_account8.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.8", req.remove_account8);
  }
  if(!req.remove_account9.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.9", req.remove_account9);
  }
  if(!req.remove_account10.empty()) {
    req_rpc->AddRequestQuery("RemoveAccount.10", req.remove_account10);
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