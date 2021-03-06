#ifndef ALI_SLBH
#define ALI_SLBH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_slb_add_backend_servers_types.h"
#include "ali_slb_add_listener_white_list_item_types.h"
#include "ali_slb_create_load_balancer_types.h"
#include "ali_slb_create_load_balancer_ht_tp_listener_types.h"
#include "ali_slb_create_load_balancer_ht_tp_slistener_types.h"
#include "ali_slb_create_load_balancer_tc_plistener_types.h"
#include "ali_slb_create_load_balancer_ud_plistener_types.h"
#include "ali_slb_delete_load_balancer_types.h"
#include "ali_slb_delete_load_balancer_listener_types.h"
#include "ali_slb_delete_server_certificate_types.h"
#include "ali_slb_describe_health_status_types.h"
#include "ali_slb_describe_listener_access_control_attribute_types.h"
#include "ali_slb_describe_load_balancer_attribute_types.h"
#include "ali_slb_describe_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_slb_describe_load_balancer_ht_tp_slistener_attribute_types.h"
#include "ali_slb_describe_load_balancers_types.h"
#include "ali_slb_describe_load_balancer_tc_plistener_attribute_types.h"
#include "ali_slb_describe_load_balancer_ud_plistener_attribute_types.h"
#include "ali_slb_describe_locations_types.h"
#include "ali_slb_describe_regions_types.h"
#include "ali_slb_describe_regions4_location_types.h"
#include "ali_slb_describe_server_certificate_types.h"
#include "ali_slb_describe_server_certificates_types.h"
#include "ali_slb_describe_zones_types.h"
#include "ali_slb_modify_load_balancer_internet_spec_types.h"
#include "ali_slb_remove_backend_servers_types.h"
#include "ali_slb_remove_listener_white_list_item_types.h"
#include "ali_slb_set_backend_servers_types.h"
#include "ali_slb_set_listener_access_control_status_types.h"
#include "ali_slb_set_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_slb_set_load_balancer_ht_tp_slistener_attribute_types.h"
#include "ali_slb_set_load_balancer_name_types.h"
#include "ali_slb_set_load_balancer_status_types.h"
#include "ali_slb_set_load_balancer_tc_plistener_attribute_types.h"
#include "ali_slb_set_load_balancer_ud_plistener_attribute_types.h"
#include "ali_slb_set_server_certificate_name_types.h"
#include "ali_slb_start_load_balancer_listener_types.h"
#include "ali_slb_stop_load_balancer_listener_types.h"
#include "ali_slb_upload_server_certificate_types.h"
#ifdef WIN32
 #ifdef aliyun_api_slb_2014_05_15_EXPORTS
 #define ALIYUN_API_SLB_2014_05_15_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_SLB_2014_05_15_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_SLB_2014_05_15_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct SlbErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_SLB_2014_05_15_DLL_EXPORT_IMPORT Slb {
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

  int AddListenerWhiteListItem(const SlbAddListenerWhiteListItemRequestType& req,
          SlbAddListenerWhiteListItemResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancer(const SlbCreateLoadBalancerRequestType& req,
          SlbCreateLoadBalancerResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancerHTTPListener(const SlbCreateLoadBalancerHTTPListenerRequestType& req,
          SlbCreateLoadBalancerHTTPListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancerHTTPSListener(const SlbCreateLoadBalancerHTTPSListenerRequestType& req,
          SlbCreateLoadBalancerHTTPSListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancerTCPListener(const SlbCreateLoadBalancerTCPListenerRequestType& req,
          SlbCreateLoadBalancerTCPListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int CreateLoadBalancerUDPListener(const SlbCreateLoadBalancerUDPListenerRequestType& req,
          SlbCreateLoadBalancerUDPListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int DeleteLoadBalancer(const SlbDeleteLoadBalancerRequestType& req,
          SlbDeleteLoadBalancerResponseType* resp,
          SlbErrorInfo* error_info);

  int DeleteLoadBalancerListener(const SlbDeleteLoadBalancerListenerRequestType& req,
          SlbDeleteLoadBalancerListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int DeleteServerCertificate(const SlbDeleteServerCertificateRequestType& req,
          SlbDeleteServerCertificateResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeHealthStatus(const SlbDescribeHealthStatusRequestType& req,
          SlbDescribeHealthStatusResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeListenerAccessControlAttribute(const SlbDescribeListenerAccessControlAttributeRequestType& req,
          SlbDescribeListenerAccessControlAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerAttribute(const SlbDescribeLoadBalancerAttributeRequestType& req,
          SlbDescribeLoadBalancerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerHTTPListenerAttribute(const SlbDescribeLoadBalancerHTTPListenerAttributeRequestType& req,
          SlbDescribeLoadBalancerHTTPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerHTTPSListenerAttribute(const SlbDescribeLoadBalancerHTTPSListenerAttributeRequestType& req,
          SlbDescribeLoadBalancerHTTPSListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancers(const SlbDescribeLoadBalancersRequestType& req,
          SlbDescribeLoadBalancersResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerTCPListenerAttribute(const SlbDescribeLoadBalancerTCPListenerAttributeRequestType& req,
          SlbDescribeLoadBalancerTCPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLoadBalancerUDPListenerAttribute(const SlbDescribeLoadBalancerUDPListenerAttributeRequestType& req,
          SlbDescribeLoadBalancerUDPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeLocations(const SlbDescribeLocationsRequestType& req,
          SlbDescribeLocationsResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeRegions(const SlbDescribeRegionsRequestType& req,
          SlbDescribeRegionsResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeRegions4Location(const SlbDescribeRegions4LocationRequestType& req,
          SlbDescribeRegions4LocationResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeServerCertificate(const SlbDescribeServerCertificateRequestType& req,
          SlbDescribeServerCertificateResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeServerCertificates(const SlbDescribeServerCertificatesRequestType& req,
          SlbDescribeServerCertificatesResponseType* resp,
          SlbErrorInfo* error_info);

  int DescribeZones(const SlbDescribeZonesRequestType& req,
          SlbDescribeZonesResponseType* resp,
          SlbErrorInfo* error_info);

  int ModifyLoadBalancerInternetSpec(const SlbModifyLoadBalancerInternetSpecRequestType& req,
          SlbModifyLoadBalancerInternetSpecResponseType* resp,
          SlbErrorInfo* error_info);

  int RemoveBackendServers(const SlbRemoveBackendServersRequestType& req,
          SlbRemoveBackendServersResponseType* resp,
          SlbErrorInfo* error_info);

  int RemoveListenerWhiteListItem(const SlbRemoveListenerWhiteListItemRequestType& req,
          SlbRemoveListenerWhiteListItemResponseType* resp,
          SlbErrorInfo* error_info);

  int SetBackendServers(const SlbSetBackendServersRequestType& req,
          SlbSetBackendServersResponseType* resp,
          SlbErrorInfo* error_info);

  int SetListenerAccessControlStatus(const SlbSetListenerAccessControlStatusRequestType& req,
          SlbSetListenerAccessControlStatusResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerHTTPListenerAttribute(const SlbSetLoadBalancerHTTPListenerAttributeRequestType& req,
          SlbSetLoadBalancerHTTPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int SetLoadBalancerHTTPSListenerAttribute(const SlbSetLoadBalancerHTTPSListenerAttributeRequestType& req,
          SlbSetLoadBalancerHTTPSListenerAttributeResponseType* resp,
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

  int SetLoadBalancerUDPListenerAttribute(const SlbSetLoadBalancerUDPListenerAttributeRequestType& req,
          SlbSetLoadBalancerUDPListenerAttributeResponseType* resp,
          SlbErrorInfo* error_info);

  int SetServerCertificateName(const SlbSetServerCertificateNameRequestType& req,
          SlbSetServerCertificateNameResponseType* resp,
          SlbErrorInfo* error_info);

  int StartLoadBalancerListener(const SlbStartLoadBalancerListenerRequestType& req,
          SlbStartLoadBalancerListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int StopLoadBalancerListener(const SlbStopLoadBalancerListenerRequestType& req,
          SlbStopLoadBalancerListenerResponseType* resp,
          SlbErrorInfo* error_info);

  int UploadServerCertificate(const SlbUploadServerCertificateRequestType& req,
          SlbUploadServerCertificateResponseType* resp,
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
