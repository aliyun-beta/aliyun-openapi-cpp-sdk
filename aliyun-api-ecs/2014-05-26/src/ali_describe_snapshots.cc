#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "Json/Value.h"
#include "Json/Reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeSnapshotsTagType* item);
void Json2Type(const Json::Value& value, DescribeSnapshotsSnapshotType* item);
void Json2Type(const Json::Value& value, DescribeSnapshotsResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeSnapshotsTagType* item) {
  if(value.isMember("TagKey")) {
    item->tag_key = value["TagKey"].asString();
  }
  if(value.isMember("TagValue")) {
    item->tag_value = value["TagValue"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeSnapshotsSnapshotType* item) {
  if(value.isMember("SnapshotId")) {
    item->snapshot_id = value["SnapshotId"].asString();
  }
  if(value.isMember("SnapshotName")) {
    item->snapshot_name = value["SnapshotName"].asString();
  }
  if(value.isMember("Progress")) {
    item->progress = value["Progress"].asString();
  }
  if(value.isMember("ProductCode")) {
    item->product_code = value["ProductCode"].asString();
  }
  if(value.isMember("SourceDiskId")) {
    item->source_disk_id = value["SourceDiskId"].asString();
  }
  if(value.isMember("SourceDiskType")) {
    item->source_disk_type = value["SourceDiskType"].asString();
  }
  if(value.isMember("SourceDiskSize")) {
    item->source_disk_size = value["SourceDiskSize"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
  }
  if(value.isMember("Usage")) {
    item->usage = value["Usage"].asString();
  }
  if(value.isMember("Tags") && value["Tags"].isMember("Tag")) {
    Json2Array<DescribeSnapshotsTagType>(value["Tags"]["Tag"], &item->tags);
  }
}
void Json2Type(const Json::Value& value, DescribeSnapshotsResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("Snapshots") && value["Snapshots"].isMember("Snapshot")) {
    Json2Array<DescribeSnapshotsSnapshotType>(value["Snapshots"]["Snapshot"], &item->snapshots);
  }
}
}

int Ecs::DescribeSnapshots(const DescribeSnapshotsRequestType& req,
                      DescribeSnapshotsResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeSnapshots");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.instance_id.empty()) {
    req_rpc->AddRequestQuery("InstanceId", req.instance_id);
  }
  if(!req.disk_id.empty()) {
    req_rpc->AddRequestQuery("DiskId", req.disk_id);
  }
  if(!req.snapshot_ids.empty()) {
    req_rpc->AddRequestQuery("SnapshotIds", req.snapshot_ids);
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
  if(!req.snapshot_name.empty()) {
    req_rpc->AddRequestQuery("SnapshotName", req.snapshot_name);
  }
  if(!req.status.empty()) {
    req_rpc->AddRequestQuery("Status", req.status);
  }
  if(!req.snapshot_type.empty()) {
    req_rpc->AddRequestQuery("SnapshotType", req.snapshot_type);
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
  if(!req.usage.empty()) {
    req_rpc->AddRequestQuery("Usage", req.usage);
  }
  if(!req.source_disk_type.empty()) {
    req_rpc->AddRequestQuery("SourceDiskType", req.source_disk_type);
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
