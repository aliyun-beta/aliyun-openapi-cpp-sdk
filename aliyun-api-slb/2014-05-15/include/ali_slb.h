#ifndef ALI_SLBH
#define ALI_SLBH
#include <string>
#include "ali_add_backend_servers_types.h"
#include "ali_add_listener_white_list_item_types.h"
#include "ali_create_load_balancer_types.h"
#include "ali_create_load_balancer_ht_tp_listener_types.h"
#include "ali_create_load_balancer_ht_tp_slistener_types.h"
#include "ali_create_load_balancer_tc_plistener_types.h"
#include "ali_create_load_balancer_ud_plistener_types.h"
#include "ali_delete_load_balancer_types.h"
#include "ali_delete_load_balancer_listener_types.h"
#include "ali_delete_server_certificate_types.h"
#include "ali_describe_health_status_types.h"
#include "ali_describe_listener_access_control_attribute_types.h"
#include "ali_describe_load_balancer_attribute_types.h"
#include "ali_describe_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_describe_load_balancer_ht_tp_slistener_attribute_types.h"
#include "ali_describe_load_balancers_types.h"
#include "ali_describe_load_balancer_tc_plistener_attribute_types.h"
#include "ali_describe_load_balancer_ud_plistener_attribute_types.h"
#include "ali_describe_locations_types.h"
#include "ali_describe_regions_types.h"
#include "ali_describe_regions4_location_types.h"
#include "ali_describe_server_certificate_types.h"
#include "ali_describe_server_certificates_types.h"
#include "ali_describe_zones_types.h"
#include "ali_modify_load_balancer_internet_spec_types.h"
#include "ali_remove_backend_servers_types.h"
#include "ali_remove_listener_white_list_item_types.h"
#include "ali_set_backend_servers_types.h"
#include "ali_set_listener_access_control_status_types.h"
#include "ali_set_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_set_load_balancer_ht_tp_slistener_attribute_types.h"
#include "ali_set_load_balancer_name_types.h"
#include "ali_set_load_balancer_status_types.h"
#include "ali_set_load_balancer_tc_plistener_attribute_types.h"
#include "ali_set_load_balancer_ud_plistener_attribute_types.h"
#include "ali_set_server_certificate_name_types.h"
#include "ali_start_load_balancer_listener_types.h"
#include "ali_stop_load_balancer_listener_types.h"
#include "ali_upload_server_certificate_types.h"
namespace aliyun {
struct AliSlbErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Slb {
public:
  static Slb* CreateSlbClient(std::string endpoint, std::string appid, std::string secret);
private:
  Slb(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-05-15"),
  host_(host) {}
public:
  int AddBackendServers(const AddBackendServersRequestType& req,
          AddBackendServersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int AddListenerWhiteListItem(const AddListenerWhiteListItemRequestType& req,
          AddListenerWhiteListItemResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancer(const CreateLoadBalancerRequestType& req,
          CreateLoadBalancerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequestType& req,
          CreateLoadBalancerHTTPListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancerHTTPSListener(const CreateLoadBalancerHTTPSListenerRequestType& req,
          CreateLoadBalancerHTTPSListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequestType& req,
          CreateLoadBalancerTCPListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancerUDPListener(const CreateLoadBalancerUDPListenerRequestType& req,
          CreateLoadBalancerUDPListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DeleteLoadBalancer(const DeleteLoadBalancerRequestType& req,
          DeleteLoadBalancerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DeleteLoadBalancerListener(const DeleteLoadBalancerListenerRequestType& req,
          DeleteLoadBalancerListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DeleteServerCertificate(const DeleteServerCertificateRequestType& req,
          DeleteServerCertificateResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeHealthStatus(const DescribeHealthStatusRequestType& req,
          DescribeHealthStatusResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeListenerAccessControlAttribute(const DescribeListenerAccessControlAttributeRequestType& req,
          DescribeListenerAccessControlAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequestType& req,
          DescribeLoadBalancerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequestType& req,
          DescribeLoadBalancerHTTPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerHTTPSListenerAttribute(const DescribeLoadBalancerHTTPSListenerAttributeRequestType& req,
          DescribeLoadBalancerHTTPSListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancers(const DescribeLoadBalancersRequestType& req,
          DescribeLoadBalancersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequestType& req,
          DescribeLoadBalancerTCPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerUDPListenerAttribute(const DescribeLoadBalancerUDPListenerAttributeRequestType& req,
          DescribeLoadBalancerUDPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLocations(const DescribeLocationsRequestType& req,
          DescribeLocationsResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeRegions(const DescribeRegionsRequestType& req,
          DescribeRegionsResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeRegions4Location(const DescribeRegions4LocationRequestType& req,
          DescribeRegions4LocationResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeServerCertificate(const DescribeServerCertificateRequestType& req,
          DescribeServerCertificateResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeServerCertificates(const DescribeServerCertificatesRequestType& req,
          DescribeServerCertificatesResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeZones(const DescribeZonesRequestType& req,
          DescribeZonesResponseType* resp,
          AliSlbErrorInfo* error_info);

  int ModifyLoadBalancerInternetSpec(const ModifyLoadBalancerInternetSpecRequestType& req,
          ModifyLoadBalancerInternetSpecResponseType* resp,
          AliSlbErrorInfo* error_info);

  int RemoveBackendServers(const RemoveBackendServersRequestType& req,
          RemoveBackendServersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int RemoveListenerWhiteListItem(const RemoveListenerWhiteListItemRequestType& req,
          RemoveListenerWhiteListItemResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetBackendServers(const SetBackendServersRequestType& req,
          SetBackendServersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetListenerAccessControlStatus(const SetListenerAccessControlStatusRequestType& req,
          SetListenerAccessControlStatusResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequestType& req,
          SetLoadBalancerHTTPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerHTTPSListenerAttribute(const SetLoadBalancerHTTPSListenerAttributeRequestType& req,
          SetLoadBalancerHTTPSListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerName(const SetLoadBalancerNameRequestType& req,
          SetLoadBalancerNameResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerStatus(const SetLoadBalancerStatusRequestType& req,
          SetLoadBalancerStatusResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequestType& req,
          SetLoadBalancerTCPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerUDPListenerAttribute(const SetLoadBalancerUDPListenerAttributeRequestType& req,
          SetLoadBalancerUDPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetServerCertificateName(const SetServerCertificateNameRequestType& req,
          SetServerCertificateNameResponseType* resp,
          AliSlbErrorInfo* error_info);

  int StartLoadBalancerListener(const StartLoadBalancerListenerRequestType& req,
          StartLoadBalancerListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int StopLoadBalancerListener(const StopLoadBalancerListenerRequestType& req,
          StopLoadBalancerListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int UploadServerCertificate(const UploadServerCertificateRequestType& req,
          UploadServerCertificateResponseType* resp,
          AliSlbErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
