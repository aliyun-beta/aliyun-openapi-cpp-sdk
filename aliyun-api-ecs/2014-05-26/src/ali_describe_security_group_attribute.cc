#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ecs.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeSecurityGroupAttributePermissionType* item);
void Json2Type(const Json::Value& value, DescribeSecurityGroupAttributeResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeSecurityGroupAttributePermissionType* item) {
  if(value.isMember("IpProtocol")) {
    item->ip_protocol = value["IpProtocol"].asString();
  }
  if(value.isMember("PortRange")) {
    item->port_range = value["PortRange"].asString();
  }
  if(value.isMember("SourceGroupId")) {
    item->source_group_id = value["SourceGroupId"].asString();
  }
  if(value.isMember("SourceCidrIp")) {
    item->source_cidr_ip = value["SourceCidrIp"].asString();
  }
  if(value.isMember("Policy")) {
    item->policy = value["Policy"].asString();
  }
  if(value.isMember("NicType")) {
    item->nic_type = value["NicType"].asString();
  }
  if(value.isMember("SourceGroupOwnerAccount")) {
    item->source_group_owner_account = value["SourceGroupOwnerAccount"].asString();
  }
  if(value.isMember("DestGroupId")) {
    item->dest_group_id = value["DestGroupId"].asString();
  }
  if(value.isMember("DestCidrIp")) {
    item->dest_cidr_ip = value["DestCidrIp"].asString();
  }
  if(value.isMember("DestGroupOwnerAccount")) {
    item->dest_group_owner_account = value["DestGroupOwnerAccount"].asString();
  }
  if(value.isMember("Priority")) {
    item->priority = value["Priority"].asString();
  }
  if(value.isMember("Direction")) {
    item->direction = value["Direction"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeSecurityGroupAttributeResponseType* item) {
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("SecurityGroupId")) {
    item->security_group_id = value["SecurityGroupId"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("SecurityGroupName")) {
    item->security_group_name = value["SecurityGroupName"].asString();
  }
  if(value.isMember("VpcId")) {
    item->vpc_id = value["VpcId"].asString();
  }
  if(value.isMember("Permissions") && value["Permissions"].isMember("Permission")) {
    Json2Array<DescribeSecurityGroupAttributePermissionType>(value["Permissions"]["Permission"], &item->permissions);
  }
}
}

int Ecs::DescribeSecurityGroupAttribute(const DescribeSecurityGroupAttributeRequestType& req,
                      DescribeSecurityGroupAttributeResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeSecurityGroupAttribute");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.security_group_id.empty()) {
    req_rpc->AddRequestQuery("SecurityGroupId", req.security_group_id);
  }
  if(!req.nic_type.empty()) {
    req_rpc->AddRequestQuery("NicType", req.nic_type);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(!req.direction.empty()) {
    req_rpc->AddRequestQuery("Direction", req.direction);
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
