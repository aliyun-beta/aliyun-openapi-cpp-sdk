#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rdsregion.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RdsRegionCreateDBInstanceforFirstPayResponseType* item);

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
void Json2Type(const Json::Value& value, RdsRegionCreateDBInstanceforFirstPayResponseType* item) {
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("ConnectionString")) {
    item->connection_string = value["ConnectionString"].asString();
  }
  if(value.isMember("Port")) {
    item->port = value["Port"].asString();
  }
}
}

int RdsRegion::CreateDBInstanceforFirstPay(const RdsRegionCreateDBInstanceforFirstPayRequestType& req,
                      RdsRegionCreateDBInstanceforFirstPayResponseType* response,
                       RdsRegionErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","CreateDBInstanceforFirstPay");
  if(!req.uid.empty()) {
    req_rpc->AddRequestQuery("uid", req.uid);
  }
  if(!req.bid.empty()) {
    req_rpc->AddRequestQuery("bid", req.bid);
  }
  if(!req.uid_login_email.empty()) {
    req_rpc->AddRequestQuery("uidLoginEmail", req.uid_login_email);
  }
  if(!req.bid_login_email.empty()) {
    req_rpc->AddRequestQuery("bidLoginEmail", req.bid_login_email);
  }
  if(!req.engine.empty()) {
    req_rpc->AddRequestQuery("Engine", req.engine);
  }
  if(!req.engine_version.empty()) {
    req_rpc->AddRequestQuery("EngineVersion", req.engine_version);
  }
  if(!req.db_instance_class.empty()) {
    req_rpc->AddRequestQuery("DBInstanceClass", req.db_instance_class);
  }
  if(!req.db_instance_storage.empty()) {
    req_rpc->AddRequestQuery("DBInstanceStorage", req.db_instance_storage);
  }
  if(!req.db_instance_net_type.empty()) {
    req_rpc->AddRequestQuery("DBInstanceNetType", req.db_instance_net_type);
  }
  if(!req.character_set_name.empty()) {
    req_rpc->AddRequestQuery("CharacterSetName", req.character_set_name);
  }
  if(!req.db_instance_remarks.empty()) {
    req_rpc->AddRequestQuery("DBInstanceRemarks", req.db_instance_remarks);
  }
  if(!req.client_token.empty()) {
    req_rpc->AddRequestQuery("ClientToken", req.client_token);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
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
