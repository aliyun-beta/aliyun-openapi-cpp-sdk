#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EcsDescribeDisksOperationLockType* item);
void Json2Type(const Json::Value& value, EcsDescribeDisksTagType* item);
void Json2Type(const Json::Value& value, EcsDescribeDisksDiskType* item);
void Json2Type(const Json::Value& value, EcsDescribeDisksResponseType* item);

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
void Json2Type(const Json::Value& value, EcsDescribeDisksOperationLockType* item) {
  if(value.isMember("LockReason")) {
    item->lock_reason = value["LockReason"].asString();
  }
}
void Json2Type(const Json::Value& value, EcsDescribeDisksTagType* item) {
  if(value.isMember("TagKey")) {
    item->tag_key = value["TagKey"].asString();
  }
  if(value.isMember("TagValue")) {
    item->tag_value = value["TagValue"].asString();
  }
}
void Json2Type(const Json::Value& value, EcsDescribeDisksDiskType* item) {
  if(value.isMember("DiskId")) {
    item->disk_id = value["DiskId"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
  }
  if(value.isMember("DiskName")) {
    item->disk_name = value["DiskName"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("Type")) {
    item->type = value["Type"].asString();
  }
  if(value.isMember("Category")) {
    item->category = value["Category"].asString();
  }
  if(value.isMember("Size")) {
    item->size = value["Size"].asInt();
  }
  if(value.isMember("ImageId")) {
    item->image_id = value["ImageId"].asString();
  }
  if(value.isMember("SourceSnapshotId")) {
    item->source_snapshot_id = value["SourceSnapshotId"].asString();
  }
  if(value.isMember("ProductCode")) {
    item->product_code = value["ProductCode"].asString();
  }
  if(value.isMember("Portable")) {
    item->portable = value["Portable"].asBool();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
  }
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("Device")) {
    item->device = value["Device"].asString();
  }
  if(value.isMember("DeleteWithInstance")) {
    item->delete_with_instance = value["DeleteWithInstance"].asBool();
  }
  if(value.isMember("DeleteAutoSnapshot")) {
    item->delete_auto_snapshot = value["DeleteAutoSnapshot"].asBool();
  }
  if(value.isMember("EnableAutoSnapshot")) {
    item->enable_auto_snapshot = value["EnableAutoSnapshot"].asBool();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("AttachedTime")) {
    item->attached_time = value["AttachedTime"].asString();
  }
  if(value.isMember("DetachedTime")) {
    item->detached_time = value["DetachedTime"].asString();
  }
  if(value.isMember("DiskChargeType")) {
    item->disk_charge_type = value["DiskChargeType"].asString();
  }
  if(value.isMember("ExpiredTime")) {
    item->expired_time = value["ExpiredTime"].asString();
  }
  if(value.isMember("OperationLocks") && value["OperationLocks"].isMember("OperationLock")) {
    Json2Array<EcsDescribeDisksOperationLockType>(value["OperationLocks"]["OperationLock"], &item->operation_locks);
  }
  if(value.isMember("Tags") && value["Tags"].isMember("Tag")) {
    Json2Array<EcsDescribeDisksTagType>(value["Tags"]["Tag"], &item->tags);
  }
}
void Json2Type(const Json::Value& value, EcsDescribeDisksResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("Disks") && value["Disks"].isMember("Disk")) {
    Json2Array<EcsDescribeDisksDiskType>(value["Disks"]["Disk"], &item->disks);
  }
}
}

int Ecs::DescribeDisks(const EcsDescribeDisksRequestType& req,
                      EcsDescribeDisksResponseType* response,
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
  if((!this->use_tls_) && this->proxy_host_ && this->proxy_host_[0]) {
    req_rpc->SetHttpProxy( this->proxy_host_);
  }
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","DescribeDisks");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.zone_id.empty()) {
    req_rpc->AddRequestQuery("ZoneId", req.zone_id);
  }
  if(!req.disk_ids.empty()) {
    req_rpc->AddRequestQuery("DiskIds", req.disk_ids);
  }
  if(!req.instance_id.empty()) {
    req_rpc->AddRequestQuery("InstanceId", req.instance_id);
  }
  if(!req.disk_type.empty()) {
    req_rpc->AddRequestQuery("DiskType", req.disk_type);
  }
  if(!req.category.empty()) {
    req_rpc->AddRequestQuery("Category", req.category);
  }
  if(!req.status.empty()) {
    req_rpc->AddRequestQuery("Status", req.status);
  }
  if(!req.snapshot_id.empty()) {
    req_rpc->AddRequestQuery("SnapshotId", req.snapshot_id);
  }
  if(!req.portable.empty()) {
    req_rpc->AddRequestQuery("Portable", req.portable);
  }
  if(!req.delete_with_instance.empty()) {
    req_rpc->AddRequestQuery("DeleteWithInstance", req.delete_with_instance);
  }
  if(!req.delete_auto_snapshot.empty()) {
    req_rpc->AddRequestQuery("DeleteAutoSnapshot", req.delete_auto_snapshot);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(!req.disk_name.empty()) {
    req_rpc->AddRequestQuery("DiskName", req.disk_name);
  }
  if(!req.enable_auto_snapshot.empty()) {
    req_rpc->AddRequestQuery("EnableAutoSnapshot", req.enable_auto_snapshot);
  }
  if(!req.disk_charge_type.empty()) {
    req_rpc->AddRequestQuery("DiskChargeType", req.disk_charge_type);
  }
  if(!req.lock_reason.empty()) {
    req_rpc->AddRequestQuery("LockReason", req.lock_reason);
  }
  if(!req.filter1_key.empty()) {
    req_rpc->AddRequestQuery("Filter.1.Key", req.filter1_key);
  }
  if(!req.filter2_key.empty()) {
    req_rpc->AddRequestQuery("Filter.2.Key", req.filter2_key);
  }
  if(!req.filter1_value.empty()) {
    req_rpc->AddRequestQuery("Filter.1.Value", req.filter1_value);
  }
  if(!req.filter2_value.empty()) {
    req_rpc->AddRequestQuery("Filter.2.Value", req.filter2_value);
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
