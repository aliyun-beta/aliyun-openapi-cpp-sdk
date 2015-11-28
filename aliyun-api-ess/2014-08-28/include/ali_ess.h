#ifndef ALI_ESSH
#define ALI_ESSH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_ess_attach_instances_types.h"
#include "ali_ess_create_scaling_configuration_types.h"
#include "ali_ess_create_scaling_group_types.h"
#include "ali_ess_create_scaling_rule_types.h"
#include "ali_ess_create_scheduled_task_types.h"
#include "ali_ess_delete_scaling_configuration_types.h"
#include "ali_ess_delete_scaling_group_types.h"
#include "ali_ess_delete_scaling_rule_types.h"
#include "ali_ess_delete_scheduled_task_types.h"
#include "ali_ess_describe_scaling_activities_types.h"
#include "ali_ess_describe_scaling_configurations_types.h"
#include "ali_ess_describe_scaling_groups_types.h"
#include "ali_ess_describe_scaling_instances_types.h"
#include "ali_ess_describe_scaling_rules_types.h"
#include "ali_ess_describe_scheduled_tasks_types.h"
#include "ali_ess_detach_instances_types.h"
#include "ali_ess_disable_scaling_group_types.h"
#include "ali_ess_enable_scaling_group_types.h"
#include "ali_ess_execute_scaling_rule_types.h"
#include "ali_ess_modify_scaling_group_types.h"
#include "ali_ess_modify_scaling_rule_types.h"
#include "ali_ess_modify_scheduled_task_types.h"
#include "ali_ess_remove_instances_types.h"
#ifdef WIN32
 #ifdef aliyun_api_ess_2014_08_28_EXPORTS
 #define ALIYUN_API_ESS_2014_08_28_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_ESS_2014_08_28_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_ESS_2014_08_28_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct EssErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_ESS_2014_08_28_DLL_EXPORT_IMPORT Ess {
public:
  static Ess* CreateEssClient(std::string endpoint, std::string appid, std::string secret);
  ~Ess();
private:
  Ess(std::string host, std::string appid, std::string secret);
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
  int AttachInstances(const EssAttachInstancesRequestType& req,
          EssAttachInstancesResponseType* resp,
          EssErrorInfo* error_info);

  int CreateScalingConfiguration(const EssCreateScalingConfigurationRequestType& req,
          EssCreateScalingConfigurationResponseType* resp,
          EssErrorInfo* error_info);

  int CreateScalingGroup(const EssCreateScalingGroupRequestType& req,
          EssCreateScalingGroupResponseType* resp,
          EssErrorInfo* error_info);

  int CreateScalingRule(const EssCreateScalingRuleRequestType& req,
          EssCreateScalingRuleResponseType* resp,
          EssErrorInfo* error_info);

  int CreateScheduledTask(const EssCreateScheduledTaskRequestType& req,
          EssCreateScheduledTaskResponseType* resp,
          EssErrorInfo* error_info);

  int DeleteScalingConfiguration(const EssDeleteScalingConfigurationRequestType& req,
          EssDeleteScalingConfigurationResponseType* resp,
          EssErrorInfo* error_info);

  int DeleteScalingGroup(const EssDeleteScalingGroupRequestType& req,
          EssDeleteScalingGroupResponseType* resp,
          EssErrorInfo* error_info);

  int DeleteScalingRule(const EssDeleteScalingRuleRequestType& req,
          EssDeleteScalingRuleResponseType* resp,
          EssErrorInfo* error_info);

  int DeleteScheduledTask(const EssDeleteScheduledTaskRequestType& req,
          EssDeleteScheduledTaskResponseType* resp,
          EssErrorInfo* error_info);

  int DescribeScalingActivities(const EssDescribeScalingActivitiesRequestType& req,
          EssDescribeScalingActivitiesResponseType* resp,
          EssErrorInfo* error_info);

  int DescribeScalingConfigurations(const EssDescribeScalingConfigurationsRequestType& req,
          EssDescribeScalingConfigurationsResponseType* resp,
          EssErrorInfo* error_info);

  int DescribeScalingGroups(const EssDescribeScalingGroupsRequestType& req,
          EssDescribeScalingGroupsResponseType* resp,
          EssErrorInfo* error_info);

  int DescribeScalingInstances(const EssDescribeScalingInstancesRequestType& req,
          EssDescribeScalingInstancesResponseType* resp,
          EssErrorInfo* error_info);

  int DescribeScalingRules(const EssDescribeScalingRulesRequestType& req,
          EssDescribeScalingRulesResponseType* resp,
          EssErrorInfo* error_info);

  int DescribeScheduledTasks(const EssDescribeScheduledTasksRequestType& req,
          EssDescribeScheduledTasksResponseType* resp,
          EssErrorInfo* error_info);

  int DetachInstances(const EssDetachInstancesRequestType& req,
          EssDetachInstancesResponseType* resp,
          EssErrorInfo* error_info);

  int DisableScalingGroup(const EssDisableScalingGroupRequestType& req,
          EssDisableScalingGroupResponseType* resp,
          EssErrorInfo* error_info);

  int EnableScalingGroup(const EssEnableScalingGroupRequestType& req,
          EssEnableScalingGroupResponseType* resp,
          EssErrorInfo* error_info);

  int ExecuteScalingRule(const EssExecuteScalingRuleRequestType& req,
          EssExecuteScalingRuleResponseType* resp,
          EssErrorInfo* error_info);

  int ModifyScalingGroup(const EssModifyScalingGroupRequestType& req,
          EssModifyScalingGroupResponseType* resp,
          EssErrorInfo* error_info);

  int ModifyScalingRule(const EssModifyScalingRuleRequestType& req,
          EssModifyScalingRuleResponseType* resp,
          EssErrorInfo* error_info);

  int ModifyScheduledTask(const EssModifyScheduledTaskRequestType& req,
          EssModifyScheduledTaskResponseType* resp,
          EssErrorInfo* error_info);

  int RemoveInstances(const EssRemoveInstancesRequestType& req,
          EssRemoveInstancesResponseType* resp,
          EssErrorInfo* error_info);

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
