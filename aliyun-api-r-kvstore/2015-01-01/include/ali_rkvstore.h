#ifndef ALI_RKVSTOREH
#define ALI_RKVSTOREH
#include <string>
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
namespace aliyun {
struct RkvstoreErrorInfo {
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
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
