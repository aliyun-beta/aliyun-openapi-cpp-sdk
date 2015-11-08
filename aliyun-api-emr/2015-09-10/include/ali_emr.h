#ifndef ALI_EMRH
#define ALI_EMRH
#include <string>
#include "ali_create_cluster_types.h"
#include "ali_create_execute_plan_types.h"
#include "ali_create_execute_plan_with_cluster_types.h"
#include "ali_create_job_types.h"
#include "ali_delete_execute_plan_types.h"
#include "ali_delete_job_types.h"
#include "ali_describe_cluster_types.h"
#include "ali_describe_execute_plan_types.h"
#include "ali_describe_job_types.h"
#include "ali_job_resource_types.h"
#include "ali_kill_execute_plan_record_node_types.h"
#include "ali_list_clusters_types.h"
#include "ali_list_config_type_types.h"
#include "ali_list_execute_plan_execute_record_nodes_types.h"
#include "ali_list_execute_plan_execute_records_types.h"
#include "ali_list_execute_plan_jobs_types.h"
#include "ali_list_execute_plan_node_instances_types.h"
#include "ali_list_execute_plans_types.h"
#include "ali_list_jobs_types.h"
#include "ali_list_regions_types.h"
#include "ali_modify_cluster_name_types.h"
#include "ali_modify_execute_plan_types.h"
#include "ali_modify_execute_plan_with_cluster_types.h"
#include "ali_modify_job_types.h"
#include "ali_release_cluster_types.h"
#include "ali_resume_execute_plan_types.h"
#include "ali_run_execute_plan_types.h"
#include "ali_stop_execute_plan_types.h"
namespace aliyun {
struct AliEmrErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Emr {
public:
  static Emr* CreateEmrClient(std::string endpoint, std::string appid, std::string secret);
private:
  Emr(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-09-10"),
  host_(host) {}
public:
  int CreateCluster(const CreateClusterRequestType& req,
          CreateClusterResponseType* resp,
          AliEmrErrorInfo* error_info);

  int CreateExecutePlan(const CreateExecutePlanRequestType& req,
          CreateExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

  int CreateExecutePlanWithCluster(const CreateExecutePlanWithClusterRequestType& req,
          CreateExecutePlanWithClusterResponseType* resp,
          AliEmrErrorInfo* error_info);

  int CreateJob(const CreateJobRequestType& req,
          CreateJobResponseType* resp,
          AliEmrErrorInfo* error_info);

  int DeleteExecutePlan(const DeleteExecutePlanRequestType& req,
          DeleteExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

  int DeleteJob(const DeleteJobRequestType& req,
          DeleteJobResponseType* resp,
          AliEmrErrorInfo* error_info);

  int DescribeCluster(const DescribeClusterRequestType& req,
          DescribeClusterResponseType* resp,
          AliEmrErrorInfo* error_info);

  int DescribeExecutePlan(const DescribeExecutePlanRequestType& req,
          DescribeExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

  int DescribeJob(const DescribeJobRequestType& req,
          DescribeJobResponseType* resp,
          AliEmrErrorInfo* error_info);

  int JobResource(const JobResourceRequestType& req,
          JobResourceResponseType* resp,
          AliEmrErrorInfo* error_info);

  int KillExecutePlanRecordNode(const KillExecutePlanRecordNodeRequestType& req,
          KillExecutePlanRecordNodeResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListClusters(const ListClustersRequestType& req,
          ListClustersResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListConfigType(const ListConfigTypeRequestType& req,
          ListConfigTypeResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListExecutePlanExecuteRecordNodes(const ListExecutePlanExecuteRecordNodesRequestType& req,
          ListExecutePlanExecuteRecordNodesResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListExecutePlanExecuteRecords(const ListExecutePlanExecuteRecordsRequestType& req,
          ListExecutePlanExecuteRecordsResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListExecutePlanJobs(const ListExecutePlanJobsRequestType& req,
          ListExecutePlanJobsResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListExecutePlanNodeInstances(const ListExecutePlanNodeInstancesRequestType& req,
          ListExecutePlanNodeInstancesResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListExecutePlans(const ListExecutePlansRequestType& req,
          ListExecutePlansResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListJobs(const ListJobsRequestType& req,
          ListJobsResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ListRegions(const ListRegionsRequestType& req,
          ListRegionsResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ModifyClusterName(const ModifyClusterNameRequestType& req,
          ModifyClusterNameResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ModifyExecutePlan(const ModifyExecutePlanRequestType& req,
          ModifyExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ModifyExecutePlanWithCluster(const ModifyExecutePlanWithClusterRequestType& req,
          ModifyExecutePlanWithClusterResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ModifyJob(const ModifyJobRequestType& req,
          ModifyJobResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ReleaseCluster(const ReleaseClusterRequestType& req,
          ReleaseClusterResponseType* resp,
          AliEmrErrorInfo* error_info);

  int ResumeExecutePlan(const ResumeExecutePlanRequestType& req,
          ResumeExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

  int RunExecutePlan(const RunExecutePlanRequestType& req,
          RunExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

  int StopExecutePlan(const StopExecutePlanRequestType& req,
          StopExecutePlanResponseType* resp,
          AliEmrErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
