#ifndef ALI_BATCH_COMPUTEH
#define ALI_BATCH_COMPUTEH
#include <string>
#include "ali_batchcompute_delete_job_types.h"
#include "ali_batchcompute_get_job_types.h"
#include "ali_batchcompute_get_job_description_types.h"
#include "ali_batchcompute_get_tasks_types.h"
#include "ali_batchcompute_list_images_types.h"
#include "ali_batchcompute_list_jobs_types.h"
#include "ali_batchcompute_list_snapshots_types.h"
#include "ali_batchcompute_post_job_types.h"
#include "ali_batchcompute_put_job_types.h"
#include "ali_batchcompute_release_job_types.h"
#include "ali_batchcompute_start_job_types.h"
#include "ali_batchcompute_stop_job_types.h"
namespace aliyun {
struct BatchComputeErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class BatchCompute {
public:
  static BatchCompute* CreateBatchComputeClient(std::string endpoint, std::string appid, std::string secret);
private:
  BatchCompute(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-06-30"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  int DeleteJob(const BatchComputeDeleteJobRequestType& req,
          BatchComputeDeleteJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int GetJob(const BatchComputeGetJobRequestType& req,
          BatchComputeGetJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int GetJobDescription(const BatchComputeGetJobDescriptionRequestType& req,
          BatchComputeGetJobDescriptionResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int GetTasks(const BatchComputeGetTasksRequestType& req,
          BatchComputeGetTasksResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int ListImages(BatchComputeListImagesResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int ListJobs(BatchComputeListJobsResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int ListSnapshots(BatchComputeListSnapshotsResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int PostJob(BatchComputePostJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int PutJob(const BatchComputePutJobRequestType& req,
          BatchComputePutJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int ReleaseJob(const BatchComputeReleaseJobRequestType& req,
          BatchComputeReleaseJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int StartJob(const BatchComputeStartJobRequestType& req,
          BatchComputeStartJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int StopJob(const BatchComputeStopJobRequestType& req,
          BatchComputeStopJobResponseType* resp,
          BatchComputeErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
};  //end class
} // end namespace
#endif
