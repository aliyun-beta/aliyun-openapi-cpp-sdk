#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CreateScalingConfigurationResponseType* item);

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
void Json2Type(const Json::Value& value, CreateScalingConfigurationResponseType* item) {
  if(value.isMember("ScalingConfigurationId")) {
    item->scaling_configuration_id = value["ScalingConfigurationId"].asString();
  }
}
}

int Ess::CreateScalingConfiguration(const CreateScalingConfigurationRequestType& req,
                      CreateScalingConfigurationResponseType* response,
                       AliEssErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","CreateScalingConfiguration");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.scaling_group_id.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId", req.scaling_group_id);
  }
  if(!req.image_id.empty()) {
    req_rpc->AddRequestQuery("ImageId", req.image_id);
  }
  if(!req.instance_type.empty()) {
    req_rpc->AddRequestQuery("InstanceType", req.instance_type);
  }
  if(!req.security_group_id.empty()) {
    req_rpc->AddRequestQuery("SecurityGroupId", req.security_group_id);
  }
  if(!req.internet_charge_type.empty()) {
    req_rpc->AddRequestQuery("InternetChargeType", req.internet_charge_type);
  }
  if(!req.internet_max_bandwidth_in.empty()) {
    req_rpc->AddRequestQuery("InternetMaxBandwidthIn", req.internet_max_bandwidth_in);
  }
  if(!req.internet_max_bandwidth_out.empty()) {
    req_rpc->AddRequestQuery("InternetMaxBandwidthOut", req.internet_max_bandwidth_out);
  }
  if(!req.system_disk_category.empty()) {
    req_rpc->AddRequestQuery("SystemDisk.Category", req.system_disk_category);
  }
  if(!req.scaling_configuration_name.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName", req.scaling_configuration_name);
  }
  if(!req.data_disk1_size.empty()) {
    req_rpc->AddRequestQuery("DataDisk.1.Size", req.data_disk1_size);
  }
  if(!req.data_disk2_size.empty()) {
    req_rpc->AddRequestQuery("DataDisk.2.Size", req.data_disk2_size);
  }
  if(!req.data_disk3_size.empty()) {
    req_rpc->AddRequestQuery("DataDisk.3.Size", req.data_disk3_size);
  }
  if(!req.data_disk4_size.empty()) {
    req_rpc->AddRequestQuery("DataDisk.4.Size", req.data_disk4_size);
  }
  if(!req.data_disk1_category.empty()) {
    req_rpc->AddRequestQuery("DataDisk.1.Category", req.data_disk1_category);
  }
  if(!req.data_disk2_category.empty()) {
    req_rpc->AddRequestQuery("DataDisk.2.Category", req.data_disk2_category);
  }
  if(!req.data_disk3_category.empty()) {
    req_rpc->AddRequestQuery("DataDisk.3.Category", req.data_disk3_category);
  }
  if(!req.data_disk4_category.empty()) {
    req_rpc->AddRequestQuery("DataDisk.4.Category", req.data_disk4_category);
  }
  if(!req.data_disk1_snapshot_id.empty()) {
    req_rpc->AddRequestQuery("DataDisk.1.SnapshotId", req.data_disk1_snapshot_id);
  }
  if(!req.data_disk2_snapshot_id.empty()) {
    req_rpc->AddRequestQuery("DataDisk.2.SnapshotId", req.data_disk2_snapshot_id);
  }
  if(!req.data_disk3_snapshot_id.empty()) {
    req_rpc->AddRequestQuery("DataDisk.3.SnapshotId", req.data_disk3_snapshot_id);
  }
  if(!req.data_disk4_snapshot_id.empty()) {
    req_rpc->AddRequestQuery("DataDisk.4.SnapshotId", req.data_disk4_snapshot_id);
  }
  if(!req.data_disk1_device.empty()) {
    req_rpc->AddRequestQuery("DataDisk.1.Device", req.data_disk1_device);
  }
  if(!req.data_disk2_device.empty()) {
    req_rpc->AddRequestQuery("DataDisk.2.Device", req.data_disk2_device);
  }
  if(!req.data_disk3_device.empty()) {
    req_rpc->AddRequestQuery("DataDisk.3.Device", req.data_disk3_device);
  }
  if(!req.data_disk4_device.empty()) {
    req_rpc->AddRequestQuery("DataDisk.4.Device", req.data_disk4_device);
  }
  if(!req.data_disk1_delete_with_instance.empty()) {
    req_rpc->AddRequestQuery("DataDisk.1.DeleteWithInstance", req.data_disk1_delete_with_instance);
  }
  if(!req.data_disk2_delete_with_instance.empty()) {
    req_rpc->AddRequestQuery("DataDisk.2.DeleteWithInstance", req.data_disk2_delete_with_instance);
  }
  if(!req.data_disk3_delete_with_instance.empty()) {
    req_rpc->AddRequestQuery("DataDisk.3.DeleteWithInstance", req.data_disk3_delete_with_instance);
  }
  if(!req.data_disk4_delete_with_instance.empty()) {
    req_rpc->AddRequestQuery("DataDisk.4.DeleteWithInstance", req.data_disk4_delete_with_instance);
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
