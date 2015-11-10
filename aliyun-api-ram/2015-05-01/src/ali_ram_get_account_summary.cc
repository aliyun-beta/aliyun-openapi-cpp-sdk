#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ram.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RamGetAccountSummarySummaryMapType* item);
void Json2Type(const Json::Value& value, RamGetAccountSummaryResponseType* item);

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
void Json2Type(const Json::Value& value, RamGetAccountSummarySummaryMapType* item) {
  if(value.isMember("UsersQuota")) {
    item->users_quota = value["UsersQuota"].asInt();
  }
  if(value.isMember("Users")) {
    item->users = value["Users"].asInt();
  }
  if(value.isMember("AccessKeysPerUserQuota")) {
    item->access_keys_per_user_quota = value["AccessKeysPerUserQuota"].asInt();
  }
  if(value.isMember("VirtualMFADevicesQuota")) {
    item->virtual_mf_adevices_quota = value["VirtualMFADevicesQuota"].asInt();
  }
  if(value.isMember("MFADevices")) {
    item->mf_adevices = value["MFADevices"].asInt();
  }
  if(value.isMember("MFADevicesInUse")) {
    item->mf_adevices_in_use = value["MFADevicesInUse"].asInt();
  }
  if(value.isMember("GroupsQuota")) {
    item->groups_quota = value["GroupsQuota"].asInt();
  }
  if(value.isMember("Groups")) {
    item->groups = value["Groups"].asInt();
  }
  if(value.isMember("GroupsPerUserQuota")) {
    item->groups_per_user_quota = value["GroupsPerUserQuota"].asInt();
  }
  if(value.isMember("RolesQuota")) {
    item->roles_quota = value["RolesQuota"].asInt();
  }
  if(value.isMember("Roles")) {
    item->roles = value["Roles"].asInt();
  }
  if(value.isMember("PoliciesQuota")) {
    item->policies_quota = value["PoliciesQuota"].asInt();
  }
  if(value.isMember("Policies")) {
    item->policies = value["Policies"].asInt();
  }
  if(value.isMember("PolicySizeQuota")) {
    item->policy_size_quota = value["PolicySizeQuota"].asInt();
  }
  if(value.isMember("VersionsPerPolicyQuota")) {
    item->versions_per_policy_quota = value["VersionsPerPolicyQuota"].asInt();
  }
  if(value.isMember("AttachedPoliciesPerUserQuota")) {
    item->attached_policies_per_user_quota = value["AttachedPoliciesPerUserQuota"].asInt();
  }
  if(value.isMember("AttachedPoliciesPerGroupQuota")) {
    item->attached_policies_per_group_quota = value["AttachedPoliciesPerGroupQuota"].asInt();
  }
  if(value.isMember("AttachedPoliciesPerRoleQuota")) {
    item->attached_policies_per_role_quota = value["AttachedPoliciesPerRoleQuota"].asInt();
  }
}
void Json2Type(const Json::Value& value, RamGetAccountSummaryResponseType* item) {
  if(value.isMember("SummaryMap")) {
    Json2Type(value["SummaryMap"], &item->summary_map);
  }
}
}

int Ram::GetAccountSummary(const RamGetAccountSummaryRequestType& req,
                      RamGetAccountSummaryResponseType* response,
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
  req_rpc->AddRequestQuery("Action","GetAccountSummary");
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
