#ifndef ALI_RKVSTOREH
#define ALI_RKVSTOREH
#include <string>
#include "ali_activate_instance_types.h"
#include "ali_create_instance_types.h"
#include "ali_create_instances_types.h"
#include "ali_data_operate_types.h"
#include "ali_deactivate_instance_types.h"
#include "ali_delete_instance_types.h"
#include "ali_describe_commodity_types.h"
#include "ali_describe_connection_domain_types.h"
#include "ali_describe_history_monitor_values_types.h"
#include "ali_describe_instance_config_types.h"
#include "ali_describe_instance_count_types.h"
#include "ali_describe_instances_types.h"
#include "ali_describe_monitor_items_types.h"
#include "ali_describe_monitor_values_types.h"
#include "ali_describe_price_types.h"
#include "ali_describe_regions_types.h"
#include "ali_describe_user_info_types.h"
#include "ali_flush_instance_types.h"
#include "ali_modify_instance_attribute_types.h"
#include "ali_modify_instance_capacity_types.h"
#include "ali_modify_instance_config_types.h"
#include "ali_renew_instance_types.h"
#include "ali_transform_to_pre_paid_types.h"
#include "ali_verify_password_types.h"
namespace aliyun {
struct AliRkvstoreErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Rkvstore {
public:
  static Rkvstore* CreateRkvstoreClient(std::string endpoint, std::string appid, std::string secret);
private:
  Rkvstore(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-01-01"),
  host_(host) {}
public:
  int ActivateInstance(const ActivateInstanceRequestType& req,
          ActivateInstanceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int CreateInstance(const CreateInstanceRequestType& req,
          CreateInstanceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int CreateInstances(const CreateInstancesRequestType& req,
          CreateInstancesResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DataOperate(const DataOperateRequestType& req,
          DataOperateResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DeactivateInstance(const DeactivateInstanceRequestType& req,
          DeactivateInstanceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DeleteInstance(const DeleteInstanceRequestType& req,
          DeleteInstanceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeCommodity(const DescribeCommodityRequestType& req,
          DescribeCommodityResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeConnectionDomain(const DescribeConnectionDomainRequestType& req,
          DescribeConnectionDomainResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeHistoryMonitorValues(const DescribeHistoryMonitorValuesRequestType& req,
          DescribeHistoryMonitorValuesResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeInstanceConfig(const DescribeInstanceConfigRequestType& req,
          DescribeInstanceConfigResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeInstanceCount(const DescribeInstanceCountRequestType& req,
          DescribeInstanceCountResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeInstances(const DescribeInstancesRequestType& req,
          DescribeInstancesResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeMonitorItems(const DescribeMonitorItemsRequestType& req,
          DescribeMonitorItemsResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeMonitorValues(const DescribeMonitorValuesRequestType& req,
          DescribeMonitorValuesResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribePrice(const DescribePriceRequestType& req,
          DescribePriceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeRegions(const DescribeRegionsRequestType& req,
          DescribeRegionsResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int DescribeUserInfo(const DescribeUserInfoRequestType& req,
          DescribeUserInfoResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int FlushInstance(const FlushInstanceRequestType& req,
          FlushInstanceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int ModifyInstanceAttribute(const ModifyInstanceAttributeRequestType& req,
          ModifyInstanceAttributeResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int ModifyInstanceCapacity(const ModifyInstanceCapacityRequestType& req,
          ModifyInstanceCapacityResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int ModifyInstanceConfig(const ModifyInstanceConfigRequestType& req,
          ModifyInstanceConfigResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int RenewInstance(const RenewInstanceRequestType& req,
          RenewInstanceResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int TransformToPrePaid(const TransformToPrePaidRequestType& req,
          TransformToPrePaidResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

  int VerifyPassword(const VerifyPasswordRequestType& req,
          VerifyPasswordResponseType* resp,
          AliRkvstoreErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
