#include "ali_batchcompute.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_delete_image_response = "{}";
static int test_delete_image() {
  BatchComputeDeleteImageRequestType req;
  BatchComputeDeleteImageResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_image_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->DeleteImage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_delete_job_response = "{}";
static int test_delete_job() {
  BatchComputeDeleteJobRequestType req;
  BatchComputeDeleteJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_job_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->DeleteJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_delete_snapshot_response = "{}";
static int test_delete_snapshot() {
  BatchComputeDeleteSnapshotRequestType req;
  BatchComputeDeleteSnapshotResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_snapshot_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->DeleteSnapshot(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_get_image_response = "{}";
static int test_get_image() {
  BatchComputeGetImageRequestType req;
  BatchComputeGetImageResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_image_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->GetImage(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_get_job_response = "{}";
static int test_get_job() {
  BatchComputeGetJobRequestType req;
  BatchComputeGetJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_job_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->GetJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_get_job_description_response = "{}";
static int test_get_job_description() {
  BatchComputeGetJobDescriptionRequestType req;
  BatchComputeGetJobDescriptionResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_job_description_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->GetJobDescription(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_get_snapshot_response = "{}";
static int test_get_snapshot() {
  BatchComputeGetSnapshotRequestType req;
  BatchComputeGetSnapshotResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_snapshot_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->GetSnapshot(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_get_tasks_response = "{}";
static int test_get_tasks() {
  BatchComputeGetTasksRequestType req;
  BatchComputeGetTasksResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_get_tasks_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->GetTasks(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_list_images_response = "{}";
static int test_list_images() {
  BatchComputeListImagesResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_images_response);
  listener->Start();
  int ret = batchcompute->ListImages(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_list_jobs_response = "{}";
static int test_list_jobs() {
  BatchComputeListJobsResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_jobs_response);
  listener->Start();
  int ret = batchcompute->ListJobs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_list_snapshots_response = "{}";
static int test_list_snapshots() {
  BatchComputeListSnapshotsResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_snapshots_response);
  listener->Start();
  int ret = batchcompute->ListSnapshots(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_post_job_response = "{}";
static int test_post_job() {
  BatchComputePostJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_post_job_response);
  listener->Start();
  int ret = batchcompute->PostJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_put_job_response = "{}";
static int test_put_job() {
  BatchComputePutJobRequestType req;
  BatchComputePutJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_put_job_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->PutJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_release_job_response = "{}";
static int test_release_job() {
  BatchComputeReleaseJobRequestType req;
  BatchComputeReleaseJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_release_job_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->ReleaseJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_start_job_response = "{}";
static int test_start_job() {
  BatchComputeStartJobRequestType req;
  BatchComputeStartJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_start_job_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->StartJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
static const char* test_stop_job_response = "{}";
static int test_stop_job() {
  BatchComputeStopJobRequestType req;
  BatchComputeStopJobResponseType resp;
  BatchCompute* batchcompute = BatchCompute::CreateBatchComputeClient("cn-hangzhou", "my_appid", "my_secret");
  if(!batchcompute) return 0;
  batchcompute->SetProxyHost("127.0.0.1:12234");
  batchcompute->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_job_response);
  listener->Start();
  req.resource_name = "ResourceName";
  int ret = batchcompute->StopJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete batchcompute;
}
int main() {
  test_delete_image();
  test_delete_job();
  test_delete_snapshot();
  test_get_image();
  test_get_job();
  test_get_job_description();
  test_get_snapshot();
  test_get_tasks();
  test_list_images();
  test_list_jobs();
  test_list_snapshots();
  test_post_job();
  test_put_job();
  test_release_job();
  test_start_job();
  test_stop_job();
}
