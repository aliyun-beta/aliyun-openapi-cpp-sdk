#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ram.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyGroupType* item);
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyUserType* item);
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyRoleType* item);
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyResponseType* item);

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
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyGroupType* item) {
  if(value.isMember("GroupName")) {
    item->group_name = value["GroupName"].asString();
  }
  if(value.isMember("Comments")) {
    item->comments = value["Comments"].asString();
  }
  if(value.isMember("AttachDate")) {
    item->attach_date = value["AttachDate"].asString();
  }
}
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyUserType* item) {
  if(value.isMember("UserId")) {
    item->user_id = value["UserId"].asString();
  }
  if(value.isMember("UserName")) {
    item->user_name = value["UserName"].asString();
  }
  if(value.isMember("DisplayName")) {
    item->display_name = value["DisplayName"].asString();
  }
  if(value.isMember("AttachDate")) {
    item->attach_date = value["AttachDate"].asString();
  }
}
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyRoleType* item) {
  if(value.isMember("RoleId")) {
    item->role_id = value["RoleId"].asString();
  }
  if(value.isMember("RoleName")) {
    item->role_name = value["RoleName"].asString();
  }
  if(value.isMember("Arn")) {
    item->arn = value["Arn"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("AttachDate")) {
    item->attach_date = value["AttachDate"].asString();
  }
}
void Json2Type(const Json::Value& value, RamListEntitiesForPolicyResponseType* item) {
  if(value.isMember("Groups") && value["Groups"].isMember("Group")) {
    Json2Array<RamListEntitiesForPolicyGroupType>(value["Groups"]["Group"], &item->groups);
  }
  if(value.isMember("Users") && value["Users"].isMember("User")) {
    Json2Array<RamListEntitiesForPolicyUserType>(value["Users"]["User"], &item->users);
  }
  if(value.isMember("Roles") && value["Roles"].isMember("Role")) {
    Json2Array<RamListEntitiesForPolicyRoleType>(value["Roles"]["Role"], &item->roles);
  }
}
}

int Ram::ListEntitiesForPolicy(const RamListEntitiesForPolicyRequestType& req,
                      RamListEntitiesForPolicyResponseType* response,
                       RamErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","ListEntitiesForPolicy");
  if(!req.policy_type.empty()) {
    req_rpc->AddRequestQuery("PolicyType", req.policy_type);
  }
  if(!req.policy_name.empty()) {
    req_rpc->AddRequestQuery("PolicyName", req.policy_name);
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
