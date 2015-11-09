#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ess.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeScalingRulesScalingRuleType* item);
void Json2Type(const Json::Value& value, DescribeScalingRulesResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeScalingRulesScalingRuleType* item) {
  if(value.isMember("ScalingRuleId")) {
    item->scaling_rule_id = value["ScalingRuleId"].asString();
  }
  if(value.isMember("ScalingGroupId")) {
    item->scaling_group_id = value["ScalingGroupId"].asString();
  }
  if(value.isMember("ScalingRuleName")) {
    item->scaling_rule_name = value["ScalingRuleName"].asString();
  }
  if(value.isMember("Cooldown")) {
    item->cooldown = value["Cooldown"].asInt();
  }
  if(value.isMember("AdjustmentType")) {
    item->adjustment_type = value["AdjustmentType"].asString();
  }
  if(value.isMember("AdjustmentValue")) {
    item->adjustment_value = value["AdjustmentValue"].asInt();
  }
  if(value.isMember("MinSize")) {
    item->min_size = value["MinSize"].asInt();
  }
  if(value.isMember("MaxSize")) {
    item->max_size = value["MaxSize"].asInt();
  }
  if(value.isMember("ScalingRuleAri")) {
    item->scaling_rule_ari = value["ScalingRuleAri"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeScalingRulesResponseType* item) {
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asInt();
  }
  if(value.isMember("PageSize")) {
    item->page_size = value["PageSize"].asInt();
  }
  if(value.isMember("ScalingRules") && value["ScalingRules"].isMember("ScalingRule")) {
    Json2Array<DescribeScalingRulesScalingRuleType>(value["ScalingRules"]["ScalingRule"], &item->scaling_rules);
  }
}
}

int Ess::DescribeScalingRules(const DescribeScalingRulesRequestType& req,
                      DescribeScalingRulesResponseType* response,
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
  req_rpc->AddRequestQuery("Action","DescribeScalingRules");
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
  if(!req.scaling_rule_id1.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.1", req.scaling_rule_id1);
  }
  if(!req.scaling_rule_id2.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.2", req.scaling_rule_id2);
  }
  if(!req.scaling_rule_id3.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.3", req.scaling_rule_id3);
  }
  if(!req.scaling_rule_id4.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.4", req.scaling_rule_id4);
  }
  if(!req.scaling_rule_id5.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.5", req.scaling_rule_id5);
  }
  if(!req.scaling_rule_id6.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.6", req.scaling_rule_id6);
  }
  if(!req.scaling_rule_id7.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.7", req.scaling_rule_id7);
  }
  if(!req.scaling_rule_id8.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.8", req.scaling_rule_id8);
  }
  if(!req.scaling_rule_id9.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.9", req.scaling_rule_id9);
  }
  if(!req.scaling_rule_id10.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleId.10", req.scaling_rule_id10);
  }
  if(!req.scaling_rule_name1.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.1", req.scaling_rule_name1);
  }
  if(!req.scaling_rule_name2.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.2", req.scaling_rule_name2);
  }
  if(!req.scaling_rule_name3.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.3", req.scaling_rule_name3);
  }
  if(!req.scaling_rule_name4.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.4", req.scaling_rule_name4);
  }
  if(!req.scaling_rule_name5.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.5", req.scaling_rule_name5);
  }
  if(!req.scaling_rule_name6.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.6", req.scaling_rule_name6);
  }
  if(!req.scaling_rule_name7.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.7", req.scaling_rule_name7);
  }
  if(!req.scaling_rule_name8.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.8", req.scaling_rule_name8);
  }
  if(!req.scaling_rule_name9.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.9", req.scaling_rule_name9);
  }
  if(!req.scaling_rule_name10.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleName.10", req.scaling_rule_name10);
  }
  if(!req.scaling_rule_ari1.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.1", req.scaling_rule_ari1);
  }
  if(!req.scaling_rule_ari2.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.2", req.scaling_rule_ari2);
  }
  if(!req.scaling_rule_ari3.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.3", req.scaling_rule_ari3);
  }
  if(!req.scaling_rule_ari4.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.4", req.scaling_rule_ari4);
  }
  if(!req.scaling_rule_ari5.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.5", req.scaling_rule_ari5);
  }
  if(!req.scaling_rule_ari6.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.6", req.scaling_rule_ari6);
  }
  if(!req.scaling_rule_ari7.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.7", req.scaling_rule_ari7);
  }
  if(!req.scaling_rule_ari8.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.8", req.scaling_rule_ari8);
  }
  if(!req.scaling_rule_ari9.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.9", req.scaling_rule_ari9);
  }
  if(!req.scaling_rule_ari10.empty()) {
    req_rpc->AddRequestQuery("ScalingRuleAri.10", req.scaling_rule_ari10);
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
