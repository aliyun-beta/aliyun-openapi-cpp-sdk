#ifndef ALI_OCSH
#define ALI_OCSH
#include <string>
#include "ali_activate_instance_types.h"
#include "ali_add_authentic_ip_types.h"
#include "ali_create_instance_types.h"
#include "ali_data_operate_types.h"
#include "ali_deactivate_instance_types.h"
#include "ali_delete_instance_types.h"
#include "ali_describe_authentic_ip_types.h"
#include "ali_describe_history_monitor_values_types.h"
#include "ali_describe_instances_types.h"
#include "ali_describe_monitor_items_types.h"
#include "ali_describe_monitor_values_types.h"
#include "ali_describe_regions_types.h"
#include "ali_describe_security_ips_types.h"
#include "ali_describe_zones_types.h"
#include "ali_flush_instance_types.h"
#include "ali_modify_instance_attribute_types.h"
#include "ali_modify_instance_capacity_types.h"
#include "ali_modify_security_ips_types.h"
#include "ali_remove_authentic_ip_types.h"
#include "ali_replace_authentic_ip_types.h"
#include "ali_verify_password_types.h"
namespace aliyun {
struct AliOcsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ocs {
public:
  static Ocs* CreateOcsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ocs(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-03-01"),
  host_(host) {}
public:
  int ActivateInstance(const ActivateInstanceRequestType& req,
          ActivateInstanceResponseType* resp,
          AliOcsErrorInfo* error_info);

  int AddAuthenticIP(const AddAuthenticIPRequestType& req,
          AddAuthenticIPResponseType* resp,
          AliOcsErrorInfo* error_info);

  int CreateInstance(const CreateInstanceRequestType& req,
          CreateInstanceResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DataOperate(const DataOperateRequestType& req,
          DataOperateResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DeactivateInstance(const DeactivateInstanceRequestType& req,
          DeactivateInstanceResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DeleteInstance(const DeleteInstanceRequestType& req,
          DeleteInstanceResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeAuthenticIP(const DescribeAuthenticIPRequestType& req,
          DescribeAuthenticIPResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeHistoryMonitorValues(const DescribeHistoryMonitorValuesRequestType& req,
          DescribeHistoryMonitorValuesResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeInstances(const DescribeInstancesRequestType& req,
          DescribeInstancesResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeMonitorItems(const DescribeMonitorItemsRequestType& req,
          DescribeMonitorItemsResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeMonitorValues(const DescribeMonitorValuesRequestType& req,
          DescribeMonitorValuesResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeRegions(const DescribeRegionsRequestType& req,
          DescribeRegionsResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeSecurityIps(const DescribeSecurityIpsRequestType& req,
          DescribeSecurityIpsResponseType* resp,
          AliOcsErrorInfo* error_info);

  int DescribeZones(const DescribeZonesRequestType& req,
          DescribeZonesResponseType* resp,
          AliOcsErrorInfo* error_info);

  int FlushInstance(const FlushInstanceRequestType& req,
          FlushInstanceResponseType* resp,
          AliOcsErrorInfo* error_info);

  int ModifyInstanceAttribute(const ModifyInstanceAttributeRequestType& req,
          ModifyInstanceAttributeResponseType* resp,
          AliOcsErrorInfo* error_info);

  int ModifyInstanceCapacity(const ModifyInstanceCapacityRequestType& req,
          ModifyInstanceCapacityResponseType* resp,
          AliOcsErrorInfo* error_info);

  int ModifySecurityIps(const ModifySecurityIpsRequestType& req,
          ModifySecurityIpsResponseType* resp,
          AliOcsErrorInfo* error_info);

  int RemoveAuthenticIP(const RemoveAuthenticIPRequestType& req,
          RemoveAuthenticIPResponseType* resp,
          AliOcsErrorInfo* error_info);

  int ReplaceAuthenticIP(const ReplaceAuthenticIPRequestType& req,
          ReplaceAuthenticIPResponseType* resp,
          AliOcsErrorInfo* error_info);

  int VerifyPassword(const VerifyPasswordRequestType& req,
          VerifyPasswordResponseType* resp,
          AliOcsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
