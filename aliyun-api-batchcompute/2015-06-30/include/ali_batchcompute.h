#ifndef ali_batchcomputeH
#define ali_batchcomputeH
#include <string>
#include "ali_batchcompute_post_job_types.h"
#include "ali_batchcompute_get_job_types.h"
#include "ali_batchcompute_get_job_description_types.h"
#include "ali_batchcompute_get_tasks_types.h"
#include "ali_batchcompute_list_images_types.h"
#include "ali_batchcompute_list_jobs_types.h"
#include "ali_batchcompute_list_snapshots_types.h"
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
  host_(host) {}
public:
  int PostJob(const BatchComputePostJobRequestType& req,
          BatchComputePostJobResponseType* resp,
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

  int ListImages(const BatchComputeListImagesRequestType& req,
          BatchComputeListImagesResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int ListJobs(const BatchComputeListJobsRequestType& req,
          BatchComputeListJobsResponseType* resp,
          BatchComputeErrorInfo* error_info);

  int ListSnapshots(const BatchComputeListSnapshotsRequestType& req,
          BatchComputeListSnapshotsResponseType* resp,
          BatchComputeErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
