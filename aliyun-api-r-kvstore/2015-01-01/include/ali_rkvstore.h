#ifndef ALI_RKVSTOREH
#define ALI_RKVSTOREH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_rkvstore_activate_instance_types.h"
#include "ali_rkvstore_create_instance_types.h"
#include "ali_rkvstore_create_instances_types.h"
#include "ali_rkvstore_data_operate_types.h"
#include "ali_rkvstore_deactivate_instance_types.h"
#include "ali_rkvstore_delete_instance_types.h"
#include "ali_rkvstore_describe_commodity_types.h"
#include "ali_rkvstore_describe_connection_domain_types.h"
#include "ali_rkvstore_describe_history_monitor_values_types.h"
#include "ali_rkvstore_describe_instance_config_types.h"
#include "ali_rkvstore_describe_instance_count_types.h"
#include "ali_rkvstore_describe_instances_types.h"
#include "ali_rkvstore_describe_monitor_items_types.h"
#include "ali_rkvstore_describe_monitor_values_types.h"
#include "ali_rkvstore_describe_price_types.h"
#include "ali_rkvstore_describe_regions_types.h"
#include "ali_rkvstore_describe_user_info_types.h"
#include "ali_rkvstore_flush_instance_types.h"
#include "ali_rkvstore_modify_instance_attribute_types.h"
#include "ali_rkvstore_modify_instance_capacity_types.h"
#include "ali_rkvstore_modify_instance_config_types.h"
#include "ali_rkvstore_renew_instance_types.h"
#include "ali_rkvstore_transform_to_pre_paid_types.h"
#include "ali_rkvstore_verify_password_types.h"
#ifdef WIN32
 #ifdef aliyun_api_rkvstore_2015_01_01_EXPORTS
 #define ALIYUN_API_RKVSTORE_2015_01_01_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_RKVSTORE_2015_01_01_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_RKVSTORE_2015_01_01_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct RkvstoreErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_RKVSTORE_2015_01_01_DLL_EXPORT_IMPORT Rkvstore {
public:
  static Rkvstore* CreateRkvstoreClient(std::string endpoint, std::string appid, std::string secret);
  ~Rkvstore();
private:
  Rkvstore(std::string host, std::string appid, std::string secret);
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
  int ActivateInstance(const RkvstoreActivateInstanceRequestType& req,
          RkvstoreActivateInstanceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int CreateInstance(const RkvstoreCreateInstanceRequestType& req,
          RkvstoreCreateInstanceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int CreateInstances(const RkvstoreCreateInstancesRequestType& req,
          RkvstoreCreateInstancesResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DataOperate(const RkvstoreDataOperateRequestType& req,
          RkvstoreDataOperateResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DeactivateInstance(const RkvstoreDeactivateInstanceRequestType& req,
          RkvstoreDeactivateInstanceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DeleteInstance(const RkvstoreDeleteInstanceRequestType& req,
          RkvstoreDeleteInstanceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeCommodity(const RkvstoreDescribeCommodityRequestType& req,
          RkvstoreDescribeCommodityResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeConnectionDomain(const RkvstoreDescribeConnectionDomainRequestType& req,
          RkvstoreDescribeConnectionDomainResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeHistoryMonitorValues(const RkvstoreDescribeHistoryMonitorValuesRequestType& req,
          RkvstoreDescribeHistoryMonitorValuesResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeInstanceConfig(const RkvstoreDescribeInstanceConfigRequestType& req,
          RkvstoreDescribeInstanceConfigResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeInstanceCount(const RkvstoreDescribeInstanceCountRequestType& req,
          RkvstoreDescribeInstanceCountResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeInstances(const RkvstoreDescribeInstancesRequestType& req,
          RkvstoreDescribeInstancesResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeMonitorItems(const RkvstoreDescribeMonitorItemsRequestType& req,
          RkvstoreDescribeMonitorItemsResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeMonitorValues(const RkvstoreDescribeMonitorValuesRequestType& req,
          RkvstoreDescribeMonitorValuesResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribePrice(const RkvstoreDescribePriceRequestType& req,
          RkvstoreDescribePriceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeRegions(const RkvstoreDescribeRegionsRequestType& req,
          RkvstoreDescribeRegionsResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int DescribeUserInfo(const RkvstoreDescribeUserInfoRequestType& req,
          RkvstoreDescribeUserInfoResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int FlushInstance(const RkvstoreFlushInstanceRequestType& req,
          RkvstoreFlushInstanceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int ModifyInstanceAttribute(const RkvstoreModifyInstanceAttributeRequestType& req,
          RkvstoreModifyInstanceAttributeResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int ModifyInstanceCapacity(const RkvstoreModifyInstanceCapacityRequestType& req,
          RkvstoreModifyInstanceCapacityResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int ModifyInstanceConfig(const RkvstoreModifyInstanceConfigRequestType& req,
          RkvstoreModifyInstanceConfigResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int RenewInstance(const RkvstoreRenewInstanceRequestType& req,
          RkvstoreRenewInstanceResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int TransformToPrePaid(const RkvstoreTransformToPrePaidRequestType& req,
          RkvstoreTransformToPrePaidResponseType* resp,
          RkvstoreErrorInfo* error_info);

  int VerifyPassword(const RkvstoreVerifyPasswordRequestType& req,
          RkvstoreVerifyPasswordResponseType* resp,
          RkvstoreErrorInfo* error_info);

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
