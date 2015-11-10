#ifndef ALI_EMRH
#define ALI_EMRH
#include <string>
#include "ali_emr_create_cluster_types.h"
#include "ali_emr_create_execute_plan_types.h"
#include "ali_emr_create_execute_plan_with_cluster_types.h"
#include "ali_emr_create_job_types.h"
#include "ali_emr_delete_execute_plan_types.h"
#include "ali_emr_delete_job_types.h"
#include "ali_emr_describe_cluster_types.h"
#include "ali_emr_describe_execute_plan_types.h"
#include "ali_emr_describe_job_types.h"
#include "ali_emr_job_resource_types.h"
#include "ali_emr_kill_execute_plan_record_node_types.h"
#include "ali_emr_list_clusters_types.h"
#include "ali_emr_list_config_type_types.h"
#include "ali_emr_list_execute_plan_execute_record_nodes_types.h"
#include "ali_emr_list_execute_plan_execute_records_types.h"
#include "ali_emr_list_execute_plan_jobs_types.h"
#include "ali_emr_list_execute_plan_node_instances_types.h"
#include "ali_emr_list_execute_plans_types.h"
#include "ali_emr_list_jobs_types.h"
#include "ali_emr_list_regions_types.h"
#include "ali_emr_modify_cluster_name_types.h"
#include "ali_emr_modify_execute_plan_types.h"
#include "ali_emr_modify_execute_plan_with_cluster_types.h"
#include "ali_emr_modify_job_types.h"
#include "ali_emr_release_cluster_types.h"
#include "ali_emr_resume_execute_plan_types.h"
#include "ali_emr_run_execute_plan_types.h"
#include "ali_emr_stop_execute_plan_types.h"
namespace aliyun {
struct EmrErrorInfo {
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
  int CreateCluster(const EmrCreateClusterRequestType& req,
          EmrCreateClusterResponseType* resp,
          EmrErrorInfo* error_info);

  int CreateExecutePlan(const EmrCreateExecutePlanRequestType& req,
          EmrCreateExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

  int CreateExecutePlanWithCluster(const EmrCreateExecutePlanWithClusterRequestType& req,
          EmrCreateExecutePlanWithClusterResponseType* resp,
          EmrErrorInfo* error_info);

  int CreateJob(const EmrCreateJobRequestType& req,
          EmrCreateJobResponseType* resp,
          EmrErrorInfo* error_info);

  int DeleteExecutePlan(const EmrDeleteExecutePlanRequestType& req,
          EmrDeleteExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

  int DeleteJob(const EmrDeleteJobRequestType& req,
          EmrDeleteJobResponseType* resp,
          EmrErrorInfo* error_info);

  int DescribeCluster(const EmrDescribeClusterRequestType& req,
          EmrDescribeClusterResponseType* resp,
          EmrErrorInfo* error_info);

  int DescribeExecutePlan(const EmrDescribeExecutePlanRequestType& req,
          EmrDescribeExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

  int DescribeJob(const EmrDescribeJobRequestType& req,
          EmrDescribeJobResponseType* resp,
          EmrErrorInfo* error_info);

  int JobResource(const EmrJobResourceRequestType& req,
          EmrJobResourceResponseType* resp,
          EmrErrorInfo* error_info);

  int KillExecutePlanRecordNode(const EmrKillExecutePlanRecordNodeRequestType& req,
          EmrKillExecutePlanRecordNodeResponseType* resp,
          EmrErrorInfo* error_info);

  int ListClusters(const EmrListClustersRequestType& req,
          EmrListClustersResponseType* resp,
          EmrErrorInfo* error_info);

  int ListConfigType(const EmrListConfigTypeRequestType& req,
          EmrListConfigTypeResponseType* resp,
          EmrErrorInfo* error_info);

  int ListExecutePlanExecuteRecordNodes(const EmrListExecutePlanExecuteRecordNodesRequestType& req,
          EmrListExecutePlanExecuteRecordNodesResponseType* resp,
          EmrErrorInfo* error_info);

  int ListExecutePlanExecuteRecords(const EmrListExecutePlanExecuteRecordsRequestType& req,
          EmrListExecutePlanExecuteRecordsResponseType* resp,
          EmrErrorInfo* error_info);

  int ListExecutePlanJobs(const EmrListExecutePlanJobsRequestType& req,
          EmrListExecutePlanJobsResponseType* resp,
          EmrErrorInfo* error_info);

  int ListExecutePlanNodeInstances(const EmrListExecutePlanNodeInstancesRequestType& req,
          EmrListExecutePlanNodeInstancesResponseType* resp,
          EmrErrorInfo* error_info);

  int ListExecutePlans(const EmrListExecutePlansRequestType& req,
          EmrListExecutePlansResponseType* resp,
          EmrErrorInfo* error_info);

  int ListJobs(const EmrListJobsRequestType& req,
          EmrListJobsResponseType* resp,
          EmrErrorInfo* error_info);

  int ListRegions(const EmrListRegionsRequestType& req,
          EmrListRegionsResponseType* resp,
          EmrErrorInfo* error_info);

  int ModifyClusterName(const EmrModifyClusterNameRequestType& req,
          EmrModifyClusterNameResponseType* resp,
          EmrErrorInfo* error_info);

  int ModifyExecutePlan(const EmrModifyExecutePlanRequestType& req,
          EmrModifyExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

  int ModifyExecutePlanWithCluster(const EmrModifyExecutePlanWithClusterRequestType& req,
          EmrModifyExecutePlanWithClusterResponseType* resp,
          EmrErrorInfo* error_info);

  int ModifyJob(const EmrModifyJobRequestType& req,
          EmrModifyJobResponseType* resp,
          EmrErrorInfo* error_info);

  int ReleaseCluster(const EmrReleaseClusterRequestType& req,
          EmrReleaseClusterResponseType* resp,
          EmrErrorInfo* error_info);

  int ResumeExecutePlan(const EmrResumeExecutePlanRequestType& req,
          EmrResumeExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

  int RunExecutePlan(const EmrRunExecutePlanRequestType& req,
          EmrRunExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

  int StopExecutePlan(const EmrStopExecutePlanRequestType& req,
          EmrStopExecutePlanResponseType* resp,
          EmrErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
