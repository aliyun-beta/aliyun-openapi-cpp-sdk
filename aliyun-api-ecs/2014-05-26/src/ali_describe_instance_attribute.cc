#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeInstanceAttributeLockReasonType* item);
void Json2Type(const Json::Value& value, DescribeInstanceAttributeVpcAttributesType* item);
void Json2Type(const Json::Value& value, DescribeInstanceAttributeEipAddressType* item);
void Json2Type(const Json::Value& value, DescribeInstanceAttributeResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeInstanceAttributeLockReasonType* item) {
  if(value.isMember("LockReason")) {
    item->lock_reason = value["LockReason"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeInstanceAttributeVpcAttributesType* item) {
  if(value.isMember("VpcId")) {
    item->vpc_id = value["VpcId"].asString();
  }
  if(value.isMember("VSwitchId")) {
    item->vswitch_id = value["VSwitchId"].asString();
  }
  if(value.isMember("NatIpAddress")) {
    item->nat_ip_address = value["NatIpAddress"].asString();
  }
  if(value.isMember("PrivateIpAddress")  && value["PrivateIpAddress"].isMember("IpAddress")) {
    Json2Array<std::string>(value["PrivateIpAddress"]["IpAddress"], &item->private_ip_address);
  }
}
void Json2Type(const Json::Value& value, DescribeInstanceAttributeEipAddressType* item) {
  if(value.isMember("AllocationId")) {
    item->allocation_id = value["AllocationId"].asString();
  }
  if(value.isMember("IpAddress")) {
    item->ip_address = value["IpAddress"].asString();
  }
  if(value.isMember("Bandwidth")) {
    item->bandwidth = value["Bandwidth"].asInt();
  }
  if(value.isMember("InternetChargeType")) {
    item->internet_charge_type = value["InternetChargeType"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeInstanceAttributeResponseType* item) {
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("InstanceName")) {
    item->instance_name = value["InstanceName"].asString();
  }
  if(value.isMember("ImageId")) {
    item->image_id = value["ImageId"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
  }
  if(value.isMember("ClusterId")) {
    item->cluster_id = value["ClusterId"].asString();
  }
  if(value.isMember("InstanceType")) {
    item->instance_type = value["InstanceType"].asString();
  }
  if(value.isMember("HostName")) {
    item->host_name = value["HostName"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
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
  if(value.isMember("VlanId")) {
    item->vlan_id = value["VlanId"].asString();
  }
  if(value.isMember("SerialNumber")) {
    item->serial_number = value["SerialNumber"].asString();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("InstanceNetworkType")) {
    item->instance_network_type = value["InstanceNetworkType"].asString();
  }
  if(value.isMember("IoOptimized")) {
    item->io_optimized = value["IoOptimized"].asString();
  }
  if(value.isMember("InstanceChargeType")) {
    item->instance_charge_type = value["InstanceChargeType"].asString();
  }
  if(value.isMember("ExpiredTime")) {
    item->expired_time = value["ExpiredTime"].asString();
  }
  if(value.isMember("OperationLocks") && value["OperationLocks"].isMember("LockReason")) {
    Json2Array<DescribeInstanceAttributeLockReasonType>(value["OperationLocks"]["LockReason"], &item->operation_locks);
  }
  if(value.isMember("VpcAttributes")) {
    Json2Type(value["VpcAttributes"], &item->vpc_attributes);
  }
  if(value.isMember("EipAddress")) {
    Json2Type(value["EipAddress"], &item->eip_address);
  }
  if(value.isMember("SecurityGroupIds")  && value["SecurityGroupIds"].isMember("SecurityGroupId")) {
    Json2Array<std::string>(value["SecurityGroupIds"]["SecurityGroupId"], &item->security_group_ids);
  }
  if(value.isMember("PublicIpAddress")  && value["PublicIpAddress"].isMember("IpAddress")) {
    Json2Array<std::string>(value["PublicIpAddress"]["IpAddress"], &item->public_ip_address);
  }
  if(value.isMember("InnerIpAddress")  && value["InnerIpAddress"].isMember("IpAddress")) {
    Json2Array<std::string>(value["InnerIpAddress"]["IpAddress"], &item->inner_ip_address);
  }
}
}

int Ecs::DescribeInstanceAttribute(const DescribeInstanceAttributeRequestType& req,
                      DescribeInstanceAttributeResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeInstanceAttribute");
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
