#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeScalingGroupsScalingGroupType* item);
void Json2Type(const Json::Value& value, DescribeScalingGroupsResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeScalingGroupsScalingGroupType* item) {
  if(value.isMember("DefaultCooldown")) {
    item->default_cooldown = value["DefaultCooldown"].asInt();
  }
  if(value.isMember("MaxSize")) {
    item->max_size = value["MaxSize"].asInt();
  }
  if(value.isMember("PendingCapacity")) {
    item->pending_capacity = value["PendingCapacity"].asInt();
  }
  if(value.isMember("LoadBalancerId")) {
    item->load_balancer_id = value["LoadBalancerId"].asString();
  }
  if(value.isMember("RemovingCapacity")) {
    item->removing_capacity = value["RemovingCapacity"].asInt();
  }
  if(value.isMember("ScalingGroupName")) {
    item->scaling_group_name = value["ScalingGroupName"].asString();
  }
  if(value.isMember("ActiveCapacity")) {
    item->active_capacity = value["ActiveCapacity"].asInt();
  }
  if(value.isMember("ActiveScalingConfigurationId")) {
    item->active_scaling_configuration_id = value["ActiveScalingConfigurationId"].asString();
  }
  if(value.isMember("ScalingGroupId")) {
    item->scaling_group_id = value["ScalingGroupId"].asString();
  }
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("TotalCapacity")) {
    item->total_capacity = value["TotalCapacity"].asInt();
  }
  if(value.isMember("MinSize")) {
    item->min_size = value["MinSize"].asInt();
  }
  if(value.isMember("LifecycleState")) {
    item->lifecycle_state = value["LifecycleState"].asString();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("RemovalPolicies")  && value["RemovalPolicies"].isMember("RemovalPolicy")) {
    Json2Array<std::string>(value["RemovalPolicies"]["RemovalPolicy"], &item->removal_policies);
  }
  if(value.isMember("DBInstanceIds")  && value["DBInstanceIds"].isMember("DBInstanceId")) {
    Json2Array<std::string>(value["DBInstanceIds"]["DBInstanceId"], &item->db_instance_ids);
  }
}
void Json2Type(const Json::Value& value, DescribeScalingGroupsResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ScalingGroups") && value["ScalingGroups"].isMember("ScalingGroup")) {
    Json2Array<DescribeScalingGroupsScalingGroupType>(value["ScalingGroups"]["ScalingGroup"], &item->scaling_groups);
  }
}
}

int Ess::DescribeScalingGroups(const DescribeScalingGroupsRequestType& req,
                      DescribeScalingGroupsResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeScalingGroups");
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
  if(!req.scaling_group_id1.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.1", req.scaling_group_id1);
  }
  if(!req.scaling_group_id2.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.2", req.scaling_group_id2);
  }
  if(!req.scaling_group_id3.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.3", req.scaling_group_id3);
  }
  if(!req.scaling_group_id4.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.4", req.scaling_group_id4);
  }
  if(!req.scaling_group_id5.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.5", req.scaling_group_id5);
  }
  if(!req.scaling_group_id6.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.6", req.scaling_group_id6);
  }
  if(!req.scaling_group_id7.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.7", req.scaling_group_id7);
  }
  if(!req.scaling_group_id8.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.8", req.scaling_group_id8);
  }
  if(!req.scaling_group_id9.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.9", req.scaling_group_id9);
  }
  if(!req.scaling_group_id10.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.10", req.scaling_group_id10);
  }
  if(!req.scaling_group_id12.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.12", req.scaling_group_id12);
  }
  if(!req.scaling_group_id13.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.13", req.scaling_group_id13);
  }
  if(!req.scaling_group_id14.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.14", req.scaling_group_id14);
  }
  if(!req.scaling_group_id15.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.15", req.scaling_group_id15);
  }
  if(!req.scaling_group_id16.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.16", req.scaling_group_id16);
  }
  if(!req.scaling_group_id17.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.17", req.scaling_group_id17);
  }
  if(!req.scaling_group_id18.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.18", req.scaling_group_id18);
  }
  if(!req.scaling_group_id19.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.19", req.scaling_group_id19);
  }
  if(!req.scaling_group_id20.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupId.20", req.scaling_group_id20);
  }
  if(!req.scaling_group_name1.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.1", req.scaling_group_name1);
  }
  if(!req.scaling_group_name2.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.2", req.scaling_group_name2);
  }
  if(!req.scaling_group_name3.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.3", req.scaling_group_name3);
  }
  if(!req.scaling_group_name4.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.4", req.scaling_group_name4);
  }
  if(!req.scaling_group_name5.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.5", req.scaling_group_name5);
  }
  if(!req.scaling_group_name6.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.6", req.scaling_group_name6);
  }
  if(!req.scaling_group_name7.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.7", req.scaling_group_name7);
  }
  if(!req.scaling_group_name8.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.8", req.scaling_group_name8);
  }
  if(!req.scaling_group_name9.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.9", req.scaling_group_name9);
  }
  if(!req.scaling_group_name10.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.10", req.scaling_group_name10);
  }
  if(!req.scaling_group_name11.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.11", req.scaling_group_name11);
  }
  if(!req.scaling_group_name12.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.12", req.scaling_group_name12);
  }
  if(!req.scaling_group_name13.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.13", req.scaling_group_name13);
  }
  if(!req.scaling_group_name14.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.14", req.scaling_group_name14);
  }
  if(!req.scaling_group_name15.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.15", req.scaling_group_name15);
  }
  if(!req.scaling_group_name16.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.16", req.scaling_group_name16);
  }
  if(!req.scaling_group_name17.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.17", req.scaling_group_name17);
  }
  if(!req.scaling_group_name18.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.18", req.scaling_group_name18);
  }
  if(!req.scaling_group_name19.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.19", req.scaling_group_name19);
  }
  if(!req.scaling_group_name20.empty()) {
    req_rpc->AddRequestQuery("ScalingGroupName.20", req.scaling_group_name20);
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
