#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeImagesDiskDeviceMappingType* item);
void Json2Type(const Json::Value& value, DescribeImagesTagType* item);
void Json2Type(const Json::Value& value, DescribeImagesImageType* item);
void Json2Type(const Json::Value& value, DescribeImagesResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeImagesDiskDeviceMappingType* item) {
  if(value.isMember("SnapshotId")) {
    item->snapshot_id = value["SnapshotId"].asString();
  }
  if(value.isMember("Size")) {
    item->size = value["Size"].asString();
  }
  if(value.isMember("Device")) {
    item->device = value["Device"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeImagesTagType* item) {
  if(value.isMember("TagKey")) {
    item->tag_key = value["TagKey"].asString();
  }
  if(value.isMember("TagValue")) {
    item->tag_value = value["TagValue"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeImagesImageType* item) {
  if(value.isMember("Progress")) {
    item->progress = value["Progress"].asString();
  }
  if(value.isMember("ImageId")) {
    item->image_id = value["ImageId"].asString();
  }
  if(value.isMember("ImageName")) {
    item->image_name = value["ImageName"].asString();
  }
  if(value.isMember("ImageVersion")) {
    item->image_version = value["ImageVersion"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("Size")) {
    item->size = value["Size"].asInt();
  }
  if(value.isMember("ImageOwnerAlias")) {
    item->image_owner_alias = value["ImageOwnerAlias"].asString();
  }
  if(value.isMember("OSName")) {
    item->os_name = value["OSName"].asString();
  }
  if(value.isMember("Architecture")) {
    item->architecture = value["Architecture"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
  }
  if(value.isMember("ProductCode")) {
    item->product_code = value["ProductCode"].asString();
  }
  if(value.isMember("IsSubscribed")) {
    item->is_subscribed = value["IsSubscribed"].asBool();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("IsSelfShared")) {
    item->is_self_shared = value["IsSelfShared"].asString();
  }
  if(value.isMember("OSType")) {
    item->os_type = value["OSType"].asString();
  }
  if(value.isMember("Platform")) {
    item->platform = value["Platform"].asString();
  }
  if(value.isMember("Usage")) {
    item->usage = value["Usage"].asString();
  }
  if(value.isMember("IsCopied")) {
    item->is_copied = value["IsCopied"].asBool();
  }
  if(value.isMember("DiskDeviceMappings") && value["DiskDeviceMappings"].isMember("DiskDeviceMapping")) {
    Json2Array<DescribeImagesDiskDeviceMappingType>(value["DiskDeviceMappings"]["DiskDeviceMapping"], &item->disk_device_mappings);
  }
  if(value.isMember("Tags") && value["Tags"].isMember("Tag")) {
    Json2Array<DescribeImagesTagType>(value["Tags"]["Tag"], &item->tags);
  }
}
void Json2Type(const Json::Value& value, DescribeImagesResponseType* item) {
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("Images") && value["Images"].isMember("Image")) {
    Json2Array<DescribeImagesImageType>(value["Images"]["Image"], &item->images);
  }
}
}

int Ecs::DescribeImages(const DescribeImagesRequestType& req,
                      DescribeImagesResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeImages");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.status.empty()) {
    req_rpc->AddRequestQuery("Status", req.status);
  }
  if(!req.image_id.empty()) {
    req_rpc->AddRequestQuery("ImageId", req.image_id);
  }
  if(!req.show_expired.empty()) {
    req_rpc->AddRequestQuery("ShowExpired", req.show_expired);
  }
  if(!req.snapshot_id.empty()) {
    req_rpc->AddRequestQuery("SnapshotId", req.snapshot_id);
  }
  if(!req.image_name.empty()) {
    req_rpc->AddRequestQuery("ImageName", req.image_name);
  }
  if(!req.image_owner_alias.empty()) {
    req_rpc->AddRequestQuery("ImageOwnerAlias", req.image_owner_alias);
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
