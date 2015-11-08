#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_slb.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, CreateLoadBalancerHTTPSListenerResponseType* item);

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
void Json2Type(const Json::Value& value, CreateLoadBalancerHTTPSListenerResponseType* item) {
}
}

int Slb::CreateLoadBalancerHTTPSListener(const CreateLoadBalancerHTTPSListenerRequestType& req,
                      CreateLoadBalancerHTTPSListenerResponseType* response,
                       AliSlbErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","CreateLoadBalancerHTTPSListener");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.load_balancer_id.empty()) {
    req_rpc->AddRequestQuery("LoadBalancerId", req.load_balancer_id);
  }
  if(!req.bandwidth.empty()) {
    req_rpc->AddRequestQuery("Bandwidth", req.bandwidth);
  }
  if(!req.listener_port.empty()) {
    req_rpc->AddRequestQuery("ListenerPort", req.listener_port);
  }
  if(!req.backend_server_port.empty()) {
    req_rpc->AddRequestQuery("BackendServerPort", req.backend_server_port);
  }
  if(!req.xforwarded_for.empty()) {
    req_rpc->AddRequestQuery("XForwardedFor", req.xforwarded_for);
  }
  if(!req.scheduler.empty()) {
    req_rpc->AddRequestQuery("Scheduler", req.scheduler);
  }
  if(!req.sticky_session.empty()) {
    req_rpc->AddRequestQuery("StickySession", req.sticky_session);
  }
  if(!req.sticky_session_type.empty()) {
    req_rpc->AddRequestQuery("StickySessionType", req.sticky_session_type);
  }
  if(!req.cookie_timeout.empty()) {
    req_rpc->AddRequestQuery("CookieTimeout", req.cookie_timeout);
  }
  if(!req.cookie.empty()) {
    req_rpc->AddRequestQuery("Cookie", req.cookie);
  }
  if(!req.health_check.empty()) {
    req_rpc->AddRequestQuery("HealthCheck", req.health_check);
  }
  if(!req.health_check_domain.empty()) {
    req_rpc->AddRequestQuery("HealthCheckDomain", req.health_check_domain);
  }
  if(!req.health_check_ur_i.empty()) {
    req_rpc->AddRequestQuery("HealthCheckURI", req.health_check_ur_i);
  }
  if(!req.healthy_threshold.empty()) {
    req_rpc->AddRequestQuery("HealthyThreshold", req.healthy_threshold);
  }
  if(!req.unhealthy_threshold.empty()) {
    req_rpc->AddRequestQuery("UnhealthyThreshold", req.unhealthy_threshold);
  }
  if(!req.health_check_timeout.empty()) {
    req_rpc->AddRequestQuery("HealthCheckTimeout", req.health_check_timeout);
  }
  if(!req.health_check_connect_port.empty()) {
    req_rpc->AddRequestQuery("HealthCheckConnectPort", req.health_check_connect_port);
  }
  if(!req.health_check_interval.empty()) {
    req_rpc->AddRequestQuery("HealthCheckInterval", req.health_check_interval);
  }
  if(!req.health_check_http_code.empty()) {
    req_rpc->AddRequestQuery("HealthCheckHttpCode", req.health_check_http_code);
  }
  if(!req.server_certificate_id.empty()) {
    req_rpc->AddRequestQuery("ServerCertificateId", req.server_certificate_id);
  }
  if(!req.max_conn_limit.empty()) {
    req_rpc->AddRequestQuery("MaxConnLimit", req.max_conn_limit);
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
