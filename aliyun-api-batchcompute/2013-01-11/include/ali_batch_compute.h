#ifndef ALI_BATCH_COMPUTEH
#define ALI_BATCH_COMPUTEH
#include <string>
//#include "ali_remove_project_owner_types.h"
#include "ali_get_image_types.h"
#include "ali_get_job_types.h"
#include "ali_get_job_description_types.h"
#include "ali_get_snapshot_types.h"
#include "ali_get_tasks_types.h"
#include "ali_list_images_types.h"
#include "ali_list_jobs_types.h"
#include "ali_list_snapshots_types.h"
#include "ali_post_job_types.h"
namespace aliyun {
struct AliBatchComputeErrorInfo {
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
  version_("2013-01-11"),
  host_(host) {}
public:
  /*
  int RemoveProjectOwner(const RemoveProjectOwnerRequestType& req,
          RemoveProjectOwnerResponseType* resp,
          AliBatchComputeErrorInfo* error_info);
*/
  int GetImage(const GetImageRequestType& req,
          GetImageResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int GetJob(const GetJobRequestType& req,
          GetJobResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int GetJobDescription(const GetJobDescriptionRequestType& req,
          GetJobDescriptionResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int GetSnapshot(const GetSnapshotRequestType& req,
          GetSnapshotResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int GetTasks(const GetTasksRequestType& req,
          GetTasksResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int ListImages(const ListImagesRequestType& req,
          ListImagesResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int ListJobs(const ListJobsRequestType& req,
          ListJobsResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int ListSnapshots(const ListSnapshotsRequestType& req,
          ListSnapshotsResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

  int PostJob(const PostJobRequestType& req,
          PostJobResponseType* resp,
          AliBatchComputeErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
