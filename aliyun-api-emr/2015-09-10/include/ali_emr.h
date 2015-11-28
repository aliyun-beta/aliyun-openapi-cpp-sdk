#ifndef ALI_EMRH
#define ALI_EMRH
#include <string>
#include <string.h>
#include <stdlib.h>
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
#ifdef WIN32
 #ifdef aliyun_api_emr_2015_09_10_EXPORTS
 #define ALIYUN_API_EMR_2015_09_10_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_EMR_2015_09_10_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_EMR_2015_09_10_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct EmrErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_EMR_2015_09_10_DLL_EXPORT_IMPORT Emr {
public:
  static Emr* CreateEmrClient(std::string endpoint, std::string appid, std::string secret);
  ~Emr();
private:
  Emr(std::string host, std::string appid, std::string secret);
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

  int ListConfigType(EmrListConfigTypeResponseType* resp,
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

  int ListRegions(EmrListRegionsResponseType* resp,
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
