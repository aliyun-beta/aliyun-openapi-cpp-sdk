#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeAutoSnapshotPolicyAutoSnapshotPolicyType* item);
void Json2Type(const Json::Value& value, DescribeAutoSnapshotPolicyAutoSnapshotExcutionStatusType* item);
void Json2Type(const Json::Value& value, DescribeAutoSnapshotPolicyResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeAutoSnapshotPolicyAutoSnapshotPolicyType* item) {
  if(value.isMember("SystemDiskPolicyEnabled")) {
    item->system_disk_policy_enabled = value["SystemDiskPolicyEnabled"].asString();
  }
  if(value.isMember("SystemDiskPolicyTimePeriod")) {
    item->system_disk_policy_time_period = value["SystemDiskPolicyTimePeriod"].asString();
  }
  if(value.isMember("SystemDiskPolicyRetentionDays")) {
    item->system_disk_policy_retention_days = value["SystemDiskPolicyRetentionDays"].asString();
  }
  if(value.isMember("SystemDiskPolicyRetentionLastWeek")) {
    item->system_disk_policy_retention_last_week = value["SystemDiskPolicyRetentionLastWeek"].asString();
  }
  if(value.isMember("DataDiskPolicyEnabled")) {
    item->data_disk_policy_enabled = value["DataDiskPolicyEnabled"].asString();
  }
  if(value.isMember("DataDiskPolicyTimePeriod")) {
    item->data_disk_policy_time_period = value["DataDiskPolicyTimePeriod"].asString();
  }
  if(value.isMember("DataDiskPolicyRetentionDays")) {
    item->data_disk_policy_retention_days = value["DataDiskPolicyRetentionDays"].asString();
  }
  if(value.isMember("DataDiskPolicyRetentionLastWeek")) {
    item->data_disk_policy_retention_last_week = value["DataDiskPolicyRetentionLastWeek"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeAutoSnapshotPolicyAutoSnapshotExcutionStatusType* item) {
  if(value.isMember("SystemDiskExcutionStatus")) {
    item->system_disk_excution_status = value["SystemDiskExcutionStatus"].asString();
  }
  if(value.isMember("DataDiskExcutionStatus")) {
    item->data_disk_excution_status = value["DataDiskExcutionStatus"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeAutoSnapshotPolicyResponseType* item) {
  if(value.isMember("AutoSnapshotOccupation")) {
    item->auto_snapshot_occupation = value["AutoSnapshotOccupation"].asInt();
  }
  if(value.isMember("AutoSnapshotPolicy")) {
    Json2Type(value["AutoSnapshotPolicy"], &item->auto_snapshot_policy);
  }
  if(value.isMember("AutoSnapshotExcutionStatus")) {
    Json2Type(value["AutoSnapshotExcutionStatus"], &item->auto_snapshot_excution_status);
  }
}
}

int Ecs::DescribeAutoSnapshotPolicy(const DescribeAutoSnapshotPolicyRequestType& req,
                      DescribeAutoSnapshotPolicyResponseType* response,
                       AliEcsErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeAutoSnapshotPolicy");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
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
