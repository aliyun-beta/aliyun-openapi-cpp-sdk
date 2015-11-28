#ifndef ALI_SLBH
#define ALI_SLBH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_slb_add_backend_servers_types.h"
#include "ali_slb_create_load_balancer_types.h"
#include "ali_slb_create_load_balancer_ht_tp_listener_types.h"
#include "ali_slb_create_load_balancer_tc_plistener_types.h"
#include "ali_slb_delete_load_balancer_types.h"
#include "ali_slb_delete_load_balancer_listener_types.h"
#include "ali_slb_describe_backend_servers_types.h"
#include "ali_slb_describe_load_balancer_attribute_types.h"
#include "ali_slb_describe_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_slb_describe_load_balancers_types.h"
#include "ali_slb_describe_load_balancer_tc_plistener_attribute_types.h"
#include "ali_slb_describe_regions_types.h"
#include "ali_slb_remove_backend_servers_types.h"
#include "ali_slb_set_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_slb_set_load_balancer_listener_status_types.h"
#include "ali_slb_set_load_balancer_name_types.h"
#include "ali_slb_set_load_balancer_status_types.h"
#include "ali_slb_set_load_balancer_tc_plistener_attribute_types.h"
#include "ali_slb_set_load_banancer_listener_status_types.h"
#ifdef WIN32
 #ifdef aliyun_api_slb_2013_02_21_EXPORTS
 #define ALIYUN_API_SLB_2013_02_21_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_SLB_2013_02_21_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_SLB_2013_02_21_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct SlbErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_SLB_2013_02_21_DLL_EXPORT_IMPORT Slb {
public:
  static Slb* CreateSlbClient(std::string endpoint, std::string appid, std::string secret);
  ~Slb();
private:
  Slb(std::string host, std::string appid, std::string secret);
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetProxyHost(std::string proxy_host) {
    if(this->proxy_host_) {
      free(this->proxy_host_);
    }
    this->proxy_host_ = strdup(proxy_host.c_str());
  }
  std::string GetProxyHost() {  return this->proxy_host_;  }
  void SetRegionId(std::string region_id) {
    if(this->region_id_) {
      free(this->region_id_);
    }
    this->region_id_ = strdup(region_id.c_str());
  }
  std::string GetRegionId() {  return this->region_id_;  }
  int AddBackendServers(const SlbAddBackendServersRequestType& req,
          SlbAddBackendServersResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancer(const SlbCreateLoadBalancerRequestType& req,
          SlbCreateLoadBalancerResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancerHTTPListener(const SlbCreateLoadBalancerHTTPListenerRequestType& req,
          SlbCreateLoadBalancerHTTPListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancerTCPListener(const SlbCreateLoadBalancerTCPListenerRequestType& req,
          SlbCreateLoadBalancerTCPListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int DeleteLoadBalancer(const SlbDeleteLoadBalancerRequestType& req,
          SlbDeleteLoadBalancerResponseType* resp,
          SlbErrorInfo* error_info);

  int DeleteLoadBalancerListener(const SlbDeleteLoadBalancerListenerRequestType& req,
          SlbDeleteLoadBalancerListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeBackendServers(const SlbDescribeBackendServersRequestType& req,
          SlbDescribeBackendServersResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerAttribute(const SlbDescribeLoadBalancerAttributeRequestType& req,
          SlbDescribeLoadBalancerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerHTTPListenerAttribute(const SlbDescribeLoadBalancerHTTPListenerAttributeRequestType& req,
          SlbDescribeLoadBalancerHTTPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancers(const SlbDescribeLoadBalancersRequestType& req,
          SlbDescribeLoadBalancersResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerTCPListenerAttribute(const SlbDescribeLoadBalancerTCPListenerAttributeRequestType& req,
          SlbDescribeLoadBalancerTCPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeRegions(const SlbDescribeRegionsRequestType& req,
          SlbDescribeRegionsResponseType* resp,
          SlbErrorInfo* error_info);

  int RemoveBackendServers(const SlbRemoveBackendServersRequestType& req,
          SlbRemoveBackendServersResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerHTTPListenerAttribute(const SlbSetLoadBalancerHTTPListenerAttributeRequestType& req,
          SlbSetLoadBalancerHTTPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerListenerStatus(const SlbSetLoadBalancerListenerStatusRequestType& req,
          SlbSetLoadBalancerListenerStatusResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerName(const SlbSetLoadBalancerNameRequestType& req,
          SlbSetLoadBalancerNameResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerStatus(const SlbSetLoadBalancerStatusRequestType& req,
          SlbSetLoadBalancerStatusResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerTCPListenerAttribute(const SlbSetLoadBalancerTCPListenerAttributeRequestType& req,
          SlbSetLoadBalancerTCPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBanancerListenerStatus(const SlbSetLoadBanancerListenerStatusRequestType& req,
          SlbSetLoadBanancerListenerStatusResponseType* resp,
          SlbErrorInfo* error_info);

private:
  char* appid_;
  char* secret_;
  char* version_;
  char* host_;
  char* proxy_host_;
  bool support_tls_;
  bool use_tls_;
  char* region_id_;
};  //end class
} // end namespace
#endif
