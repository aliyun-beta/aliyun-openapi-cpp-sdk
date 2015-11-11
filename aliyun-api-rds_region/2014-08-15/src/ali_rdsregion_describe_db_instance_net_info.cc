#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rdsregion.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstanceNetInfosecurityIPGroupsType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstanceNetInfoDBInstanceNetInfoType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstanceNetInfoResponseType* item);

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
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstanceNetInfosecurityIPGroupsType* item) {
  if(value.isMember("SecurityIPGroupName")) {
    item->security_ip_group_name = value["SecurityIPGroupName"].asString();
  }
  if(value.isMember("SecurityIPs")) {
    item->security_ips = value["SecurityIPs"].asString();
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstanceNetInfoDBInstanceNetInfoType* item) {
  if(value.isMember("ConnectionString")) {
    item->connection_string = value["ConnectionString"].asString();
  }
  if(value.isMember("IPAddress")) {
    item->ip_address = value["IPAddress"].asString();
  }
  if(value.isMember("IPType")) {
    item->ip_type = value["IPType"].asString();
  }
  if(value.isMember("Port")) {
    item->port = value["Port"].asString();
  }
  if(value.isMember("VPCId")) {
    item->vp_cid = value["VPCId"].asString();
  }
  if(value.isMember("VSwitchId")) {
    item->vswitch_id = value["VSwitchId"].asString();
  }
  if(value.isMember("SecurityIPGroups") && value["SecurityIPGroups"].isMember("securityIPGroups")) {
    Json2Array<RdsRegionDescribeDBInstanceNetInfosecurityIPGroupsType>(value["SecurityIPGroups"]["securityIPGroups"], &item->security_ip_groups);
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeDBInstanceNetInfoResponseType* item) {
  if(value.isMember("InstanceNetworkType")) {
    item->instance_network_type = value["InstanceNetworkType"].asString();
  }
  if(value.isMember("DBInstanceNetInfos") && value["DBInstanceNetInfos"].isMember("DBInstanceNetInfo")) {
    Json2Array<RdsRegionDescribeDBInstanceNetInfoDBInstanceNetInfoType>(value["DBInstanceNetInfos"]["DBInstanceNetInfo"], &item->db_instance_net_infos);
  }
}
}

int RdsRegion::DescribeDBInstanceNetInfo(const RdsRegionDescribeDBInstanceNetInfoRequestType& req,
                      RdsRegionDescribeDBInstanceNetInfoResponseType* response,
                       RdsRegionErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeDBInstanceNetInfo");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.client_token.empty()) {
    req_rpc->AddRequestQuery("ClientToken", req.client_token);
  }
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.flag.empty()) {
    req_rpc->AddRequestQuery("Flag", req.flag);
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
