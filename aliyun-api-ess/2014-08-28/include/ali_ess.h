#ifndef ALI_ESSH
#define ALI_ESSH
#include <string>
#include "ali_attach_instances_types.h"
#include "ali_create_scaling_configuration_types.h"
#include "ali_create_scaling_group_types.h"
#include "ali_create_scaling_rule_types.h"
#include "ali_create_scheduled_task_types.h"
#include "ali_delete_scaling_configuration_types.h"
#include "ali_delete_scaling_group_types.h"
#include "ali_delete_scaling_rule_types.h"
#include "ali_delete_scheduled_task_types.h"
#include "ali_describe_scaling_activities_types.h"
#include "ali_describe_scaling_configurations_types.h"
#include "ali_describe_scaling_groups_types.h"
#include "ali_describe_scaling_instances_types.h"
#include "ali_describe_scaling_rules_types.h"
#include "ali_describe_scheduled_tasks_types.h"
#include "ali_detach_instances_types.h"
#include "ali_disable_scaling_group_types.h"
#include "ali_enable_scaling_group_types.h"
#include "ali_execute_scaling_rule_types.h"
#include "ali_modify_scaling_group_types.h"
#include "ali_modify_scaling_rule_types.h"
#include "ali_modify_scheduled_task_types.h"
#include "ali_remove_instances_types.h"
namespace aliyun {
struct AliEssErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ess {
public:
  static Ess* CreateEssClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ess(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2014-08-28"),
  host_(host) {}
public:
  int AttachInstances(const AttachInstancesRequestType& req,
          AttachInstancesResponseType* resp,
          AliEssErrorInfo* error_info);

  int CreateScalingConfiguration(const CreateScalingConfigurationRequestType& req,
          CreateScalingConfigurationResponseType* resp,
          AliEssErrorInfo* error_info);

  int CreateScalingGroup(const CreateScalingGroupRequestType& req,
          CreateScalingGroupResponseType* resp,
          AliEssErrorInfo* error_info);

  int CreateScalingRule(const CreateScalingRuleRequestType& req,
          CreateScalingRuleResponseType* resp,
          AliEssErrorInfo* error_info);

  int CreateScheduledTask(const CreateScheduledTaskRequestType& req,
          CreateScheduledTaskResponseType* resp,
          AliEssErrorInfo* error_info);

  int DeleteScalingConfiguration(const DeleteScalingConfigurationRequestType& req,
          DeleteScalingConfigurationResponseType* resp,
          AliEssErrorInfo* error_info);

  int DeleteScalingGroup(const DeleteScalingGroupRequestType& req,
          DeleteScalingGroupResponseType* resp,
          AliEssErrorInfo* error_info);

  int DeleteScalingRule(const DeleteScalingRuleRequestType& req,
          DeleteScalingRuleResponseType* resp,
          AliEssErrorInfo* error_info);

  int DeleteScheduledTask(const DeleteScheduledTaskRequestType& req,
          DeleteScheduledTaskResponseType* resp,
          AliEssErrorInfo* error_info);

  int DescribeScalingActivities(const DescribeScalingActivitiesRequestType& req,
          DescribeScalingActivitiesResponseType* resp,
          AliEssErrorInfo* error_info);

  int DescribeScalingConfigurations(const DescribeScalingConfigurationsRequestType& req,
          DescribeScalingConfigurationsResponseType* resp,
          AliEssErrorInfo* error_info);

  int DescribeScalingGroups(const DescribeScalingGroupsRequestType& req,
          DescribeScalingGroupsResponseType* resp,
          AliEssErrorInfo* error_info);

  int DescribeScalingInstances(const DescribeScalingInstancesRequestType& req,
          DescribeScalingInstancesResponseType* resp,
          AliEssErrorInfo* error_info);

  int DescribeScalingRules(const DescribeScalingRulesRequestType& req,
          DescribeScalingRulesResponseType* resp,
          AliEssErrorInfo* error_info);

  int DescribeScheduledTasks(const DescribeScheduledTasksRequestType& req,
          DescribeScheduledTasksResponseType* resp,
          AliEssErrorInfo* error_info);

  int DetachInstances(const DetachInstancesRequestType& req,
          DetachInstancesResponseType* resp,
          AliEssErrorInfo* error_info);

  int DisableScalingGroup(const DisableScalingGroupRequestType& req,
          DisableScalingGroupResponseType* resp,
          AliEssErrorInfo* error_info);

  int EnableScalingGroup(const EnableScalingGroupRequestType& req,
          EnableScalingGroupResponseType* resp,
          AliEssErrorInfo* error_info);

  int ExecuteScalingRule(const ExecuteScalingRuleRequestType& req,
          ExecuteScalingRuleResponseType* resp,
          AliEssErrorInfo* error_info);

  int ModifyScalingGroup(const ModifyScalingGroupRequestType& req,
          ModifyScalingGroupResponseType* resp,
          AliEssErrorInfo* error_info);

  int ModifyScalingRule(const ModifyScalingRuleRequestType& req,
          ModifyScalingRuleResponseType* resp,
          AliEssErrorInfo* error_info);

  int ModifyScheduledTask(const ModifyScheduledTaskRequestType& req,
          ModifyScheduledTaskResponseType* resp,
          AliEssErrorInfo* error_info);

  int RemoveInstances(const RemoveInstancesRequestType& req,
          RemoveInstancesResponseType* resp,
          AliEssErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
