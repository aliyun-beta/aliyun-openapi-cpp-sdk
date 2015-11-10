#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, EssDescribeScalingConfigurationsDataDiskType* item);
void Json2Type(const Json::Value& value, EssDescribeScalingConfigurationsScalingConfigurationType* item);
void Json2Type(const Json::Value& value, EssDescribeScalingConfigurationsResponseType* item);

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
void Json2Type(const Json::Value& value, EssDescribeScalingConfigurationsDataDiskType* item) {
  if(value.isMember("Size")) {
    item->size = value["Size"].asInt();
  }
  if(value.isMember("Category")) {
    item->category = value["Category"].asString();
  }
  if(value.isMember("SnapshotId")) {
    item->snapshot_id = value["SnapshotId"].asString();
  }
  if(value.isMember("Device")) {
    item->device = value["Device"].asString();
  }
}
void Json2Type(const Json::Value& value, EssDescribeScalingConfigurationsScalingConfigurationType* item) {
  if(value.isMember("ScalingConfigurationId")) {
    item->scaling_configuration_id = value["ScalingConfigurationId"].asString();
  }
  if(value.isMember("ScalingConfigurationName")) {
    item->scaling_configuration_name = value["ScalingConfigurationName"].asString();
  }
  if(value.isMember("ScalingGroupId")) {
    item->scaling_group_id = value["ScalingGroupId"].asString();
  }
  if(value.isMember("ImageId")) {
    item->image_id = value["ImageId"].asString();
  }
  if(value.isMember("InstanceType")) {
    item->instance_type = value["InstanceType"].asString();
  }
  if(value.isMember("SecurityGroupId")) {
    item->security_group_id = value["SecurityGroupId"].asString();
  }
  if(value.isMember("InternetChargeType")) {
    item->internet_charge_type = value["InternetChargeType"].asString();
  }
  if(value.isMember("InternetMaxBandwidthIn")) {
    item->internet_max_bandwidth_in = value["InternetMaxBandwidthIn"].asInt();
  }
  if(value.isMember("InternetMaxBandwidthOut")) {
    item->internet_max_bandwidth_out = value["InternetMaxBandwidthOut"].asInt();
  }
  if(value.isMember("SystemDiskCategory")) {
    item->system_disk_category = value["SystemDiskCategory"].asString();
  }
  if(value.isMember("LifecycleState")) {
    item->lifecycle_state = value["LifecycleState"].asString();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("DataDisks") && value["DataDisks"].isMember("DataDisk")) {
    Json2Array<EssDescribeScalingConfigurationsDataDiskType>(value["DataDisks"]["DataDisk"], &item->data_disks);
  }
}
void Json2Type(const Json::Value& value, EssDescribeScalingConfigurationsResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ScalingConfigurations") && value["ScalingConfigurations"].isMember("ScalingConfiguration")) {
    Json2Array<EssDescribeScalingConfigurationsScalingConfigurationType>(value["ScalingConfigurations"]["ScalingConfiguration"], &item->scaling_configurations);
  }
}
}

int Ess::DescribeScalingConfigurations(const EssDescribeScalingConfigurationsRequestType& req,
                      EssDescribeScalingConfigurationsResponseType* response,
                       EssErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeScalingConfigurations");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.scaling_group_id.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId", req.scaling_group_id);
  }
  if(!req.scaling_configuration_id1.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.1", req.scaling_configuration_id1);
  }
  if(!req.scaling_configuration_id2.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.2", req.scaling_configuration_id2);
  }
  if(!req.scaling_configuration_id3.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.3", req.scaling_configuration_id3);
  }
  if(!req.scaling_configuration_id4.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.4", req.scaling_configuration_id4);
  }
  if(!req.scaling_configuration_id5.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.5", req.scaling_configuration_id5);
  }
  if(!req.scaling_configuration_id6.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.6", req.scaling_configuration_id6);
  }
  if(!req.scaling_configuration_id7.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.7", req.scaling_configuration_id7);
  }
  if(!req.scaling_configuration_id8.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.8", req.scaling_configuration_id8);
  }
  if(!req.scaling_configuration_id9.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.9", req.scaling_configuration_id9);
  }
  if(!req.scaling_configuration_id10.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationId.10", req.scaling_configuration_id10);
  }
  if(!req.scaling_configuration_name1.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.1", req.scaling_configuration_name1);
  }
  if(!req.scaling_configuration_name2.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.2", req.scaling_configuration_name2);
  }
  if(!req.scaling_configuration_name3.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.3", req.scaling_configuration_name3);
  }
  if(!req.scaling_configuration_name4.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.4", req.scaling_configuration_name4);
  }
  if(!req.scaling_configuration_name5.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.5", req.scaling_configuration_name5);
  }
  if(!req.scaling_configuration_name6.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.6", req.scaling_configuration_name6);
  }
  if(!req.scaling_configuration_name7.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.7", req.scaling_configuration_name7);
  }
  if(!req.scaling_configuration_name8.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.8", req.scaling_configuration_name8);
  }
  if(!req.scaling_configuration_name9.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.9", req.scaling_configuration_name9);
  }
  if(!req.scaling_configuration_name10.empty()) {
    req_rpc->AddRequestQuery("ScalingConfigurationName.10", req.scaling_configuration_name10);
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
