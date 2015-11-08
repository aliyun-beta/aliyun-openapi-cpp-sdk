#ifndef ALI_SLBH
#define ALI_SLBH
#include <string>
#include "ali_add_backend_servers_types.h"
#include "ali_create_load_balancer_types.h"
#include "ali_create_load_balancer_ht_tp_listener_types.h"
#include "ali_create_load_balancer_tc_plistener_types.h"
#include "ali_delete_load_balancer_types.h"
#include "ali_delete_load_balancer_listener_types.h"
#include "ali_describe_backend_servers_types.h"
#include "ali_describe_load_balancer_attribute_types.h"
#include "ali_describe_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_describe_load_balancers_types.h"
#include "ali_describe_load_balancer_tc_plistener_attribute_types.h"
#include "ali_describe_regions_types.h"
#include "ali_remove_backend_servers_types.h"
#include "ali_set_load_balancer_ht_tp_listener_attribute_types.h"
#include "ali_set_load_balancer_listener_status_types.h"
#include "ali_set_load_balancer_name_types.h"
#include "ali_set_load_balancer_status_types.h"
#include "ali_set_load_balancer_tc_plistener_attribute_types.h"
#include "ali_set_load_banancer_listener_status_types.h"
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
  version_("2013-02-21"),
  host_(host) {}
public:
  int AddBackendServers(const AddBackendServersRequestType& req,
          AddBackendServersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancer(const CreateLoadBalancerRequestType& req,
          CreateLoadBalancerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequestType& req,
          CreateLoadBalancerHTTPListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int CreateLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequestType& req,
          CreateLoadBalancerTCPListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DeleteLoadBalancer(const DeleteLoadBalancerRequestType& req,
          DeleteLoadBalancerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DeleteLoadBalancerListener(const DeleteLoadBalancerListenerRequestType& req,
          DeleteLoadBalancerListenerResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeBackendServers(const DescribeBackendServersRequestType& req,
          DescribeBackendServersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequestType& req,
          DescribeLoadBalancerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequestType& req,
          DescribeLoadBalancerHTTPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancers(const DescribeLoadBalancersRequestType& req,
          DescribeLoadBalancersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequestType& req,
          DescribeLoadBalancerTCPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int DescribeRegions(const DescribeRegionsRequestType& req,
          DescribeRegionsResponseType* resp,
          AliSlbErrorInfo* error_info);

  int RemoveBackendServers(const RemoveBackendServersRequestType& req,
          RemoveBackendServersResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequestType& req,
          SetLoadBalancerHTTPListenerAttributeResponseType* resp,
          AliSlbErrorInfo* error_info);

  int SetLoadBalancerListenerStatus(const SetLoadBalancerListenerStatusRequestType& req,
          SetLoadBalancerListenerStatusResponseType* resp,
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

  int SetLoadBanancerListenerStatus(const SetLoadBanancerListenerStatusRequestType& req,
          SetLoadBanancerListenerStatusResponseType* resp,
          AliSlbErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
