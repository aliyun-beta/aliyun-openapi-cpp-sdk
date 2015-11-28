#include "ali_emr.h"
#include "http_test_listener.h"
using namespace aliyun;
static const char* test_create_cluster_response = "{}";
static int test_create_cluster() {
  EmrCreateClusterRequestType req;
  EmrCreateClusterResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_cluster_response);
  listener->Start();
  req.name = "Name";
  req.zone_id = "ZoneId";
  req.log_enable = "LogEnable";
  req.log_path = "LogPath";
  req.security_group = "SecurityGroup";
  req.is_open_public_ip = "IsOpenPublicIp";
  req.security_group_name = "SecurityGroupName";
  req.emr_ver = "EmrVer";
  req.cluster_type = "ClusterType";
  req.install = "Install";
  req.master_index = "MasterIndex";
  req.ecs_order = "EcsOrder";
  req.pay_type = "PayType";
  req.period = "Period";
  req.emr_role4_ec_s = "EmrRole4ECS";
  req.emr_role4_oss = "EmrRole4Oss";
  int ret = emr->CreateCluster(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_create_execute_plan_response = "{"
"  \"Id\": 0"
"}";
static int test_create_execute_plan() {
  EmrCreateExecutePlanRequestType req;
  EmrCreateExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_execute_plan_response);
  listener->Start();
  req.cluster_id = "ClusterId";
  req.name = "Name";
  req.strategy = "Strategy";
  req.time_interval = "TimeInterval";
  req.start_time = "StartTime";
  req.time_unit = "TimeUnit";
  req.job_id = "JobId";
  int ret = emr->CreateExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_create_execute_plan_with_cluster_response = "{}";
static int test_create_execute_plan_with_cluster() {
  EmrCreateExecutePlanWithClusterRequestType req;
  EmrCreateExecutePlanWithClusterResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_execute_plan_with_cluster_response);
  listener->Start();
  req.cluster_name = "ClusterName";
  req.zone_id = "ZoneId";
  req.log_enable = "LogEnable";
  req.log_path = "LogPath";
  req.security_group = "SecurityGroup";
  req.is_open_public_ip = "IsOpenPublicIp";
  req.security_group_name = "SecurityGroupName";
  req.emr_ver = "EmrVer";
  req.cluster_type = "ClusterType";
  req.install = "Install";
  req.master_index = "MasterIndex";
  req.ecs_order = "EcsOrder";
  req.emr_role4_ec_s = "EmrRole4ECS";
  req.emr_role4_oss = "EmrRole4Oss";
  req.pay_type = "PayType";
  req.period = "Period";
  req.name = "Name";
  req.strategy = "Strategy";
  req.time_interval = "TimeInterval";
  req.start_time = "StartTime";
  req.time_unit = "TimeUnit";
  req.job_id = "JobId";
  int ret = emr->CreateExecutePlanWithCluster(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_create_job_response = "{"
"  \"Id\": 0"
"}";
static int test_create_job() {
  EmrCreateJobRequestType req;
  EmrCreateJobResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_create_job_response);
  listener->Start();
  req.job_name = "JobName";
  req.job_type = "JobType";
  req.parameter = "Parameter";
  req.job_fail_act = "JobFailAct";
  int ret = emr->CreateJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_delete_execute_plan_response = "{}";
static int test_delete_execute_plan() {
  EmrDeleteExecutePlanRequestType req;
  EmrDeleteExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_execute_plan_response);
  listener->Start();
  req.id = "Id";
  int ret = emr->DeleteExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_delete_job_response = "{}";
static int test_delete_job() {
  EmrDeleteJobRequestType req;
  EmrDeleteJobResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_delete_job_response);
  listener->Start();
  req.id = "Id";
  int ret = emr->DeleteJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_describe_cluster_response = "{"
"  \"ClusterInfo\": {"
"    \"ClusterId\": 0,"
"    \"BizId\": \"BizId\","
"    \"ClusterName\": \"ClusterName\","
"    \"UtcStartTime\": \"UtcStartTime\","
"    \"UtcStopTime\": \"UtcStopTime\","
"    \"TimeOutEnable\": 0,"
"    \"TimeOutTime\": \"TimeOutTime\","
"    \"TimeOutWarningWay\": 0,"
"    \"TimeOutOperate\": 0,"
"    \"ReleaseSetting\": 0,"
"    \"IsOpenOssLog\": 0,"
"    \"Status\": 0,"
"    \"LastJobStatus\": 0,"
"    \"RunningTime\": 0,"
"    \"FailReason\": \"FailReason\","
"    \"OssPath\": \"OssPath\","
"    \"EmrRole4ECS\": \"EmrRole4ECS\","
"    \"EmrRole4Oss\": \"EmrRole4Oss\","
"    \"IsOpenPublicIp\": 0"
"  },"
"  \"SoftwareInfo\": {"
"    \"EmrVer\": \"EmrVer\","
"    \"ClusterType\": \"ClusterType\","
"    \"Softwares\": \"Softwares\""
"  },"
"  \"EcsInfo\": {"
"    \"EcsRoles\": {"
"      \"EcsRole\": ["
"        {"
"          \"Nodes\": {"
"            \"Node\": ["
"              {"
"                \"InstanceId\": \"InstanceId\","
"                \"PubIp\": \"PubIp\","
"                \"InnerIp\": \"InnerIp\","
"                \"DiskInfo\": \"DiskInfo\""
"              }"
"            ]"
"          },"
"          \"IsMaster\": 0,"
"          \"InstanceType\": \"InstanceType\","
"          \"Payment\": \"Payment\","
"          \"CpuCore\": \"CpuCore\","
"          \"MemoryCapacity\": \"MemoryCapacity\","
"          \"DiskType\": 0,"
"          \"DiskCapacity\": 0,"
"          \"BandWidth\": \"BandWidth\","
"          \"NetPayType\": \"NetPayType\","
"          \"EcsPayType\": \"EcsPayType\""
"        }"
"      ]"
"    },"
"    \"RegionId\": \"RegionId\","
"    \"ZoneId\": \"ZoneId\","
"    \"ImageId\": \"ImageId\","
"    \"ImageName\": \"ImageName\","
"    \"SparkVersion\": \"SparkVersion\","
"    \"SecurityGroupId\": \"SecurityGroupId\","
"    \"TotalCount\": 0,"
"    \"MasterCount\": 0,"
"    \"SlaveCount\": 0"
"  }"
"}";
static int test_describe_cluster() {
  EmrDescribeClusterRequestType req;
  EmrDescribeClusterResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_cluster_response);
  listener->Start();
  req.cluster_id = "ClusterId";
  int ret = emr->DescribeCluster(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_describe_execute_plan_response = "{"
"  \"JobInfos\": {"
"    \"JobInfo\": ["
"      {"
"        \"Id\": 0"
"      }"
"    ]"
"  },"
"  \"ClusterInfo\": {"
"    \"ClusterId\": 0,"
"    \"BizId\": \"BizId\","
"    \"ClusterName\": \"ClusterName\","
"    \"UtcStartTime\": \"UtcStartTime\","
"    \"UtcStopTime\": \"UtcStopTime\","
"    \"TimeOutEnable\": 0,"
"    \"TimeOutTime\": \"TimeOutTime\","
"    \"TimeOutWarningWay\": 0,"
"    \"TimeOutOperate\": 0,"
"    \"ReleaseSetting\": 0,"
"    \"IsOpenOssLog\": 0,"
"    \"Status\": 0,"
"    \"LastJobStatus\": 0,"
"    \"RunningTime\": 0,"
"    \"FailReason\": \"FailReason\","
"    \"OssPath\": \"OssPath\","
"    \"EmrRole4ECS\": \"EmrRole4ECS\","
"    \"EmrRole4Oss\": \"EmrRole4Oss\","
"    \"IsOpenPublicIp\": 0"
"  },"
"  \"SoftwareInfo\": {"
"    \"EmrVer\": \"EmrVer\","
"    \"ClusterType\": \"ClusterType\","
"    \"Softwares\": \"Softwares\""
"  },"
"  \"EcsInfo\": {"
"    \"EcsRoles\": {"
"      \"EcsRole\": ["
"        {"
"          \"Nodes\": {"
"            \"Node\": ["
"              {"
"                \"InstanceId\": \"InstanceId\","
"                \"PubIp\": \"PubIp\","
"                \"InnerIp\": \"InnerIp\","
"                \"DiskInfo\": \"DiskInfo\""
"              }"
"            ]"
"          },"
"          \"IsMaster\": 0,"
"          \"InstanceType\": \"InstanceType\","
"          \"Payment\": \"Payment\","
"          \"CpuCore\": \"CpuCore\","
"          \"MemoryCapacity\": \"MemoryCapacity\","
"          \"DiskType\": 0,"
"          \"DiskCapacity\": 0,"
"          \"BandWidth\": \"BandWidth\","
"          \"NetPayType\": \"NetPayType\","
"          \"EcsPayType\": \"EcsPayType\""
"        }"
"      ]"
"    },"
"    \"RegionId\": \"RegionId\","
"    \"ZoneId\": \"ZoneId\","
"    \"ImageId\": \"ImageId\","
"    \"ImageName\": \"ImageName\","
"    \"SparkVersion\": \"SparkVersion\","
"    \"SecurityGroupId\": \"SecurityGroupId\","
"    \"TotalCount\": 0,"
"    \"MasterCount\": 0,"
"    \"SlaveCount\": 0"
"  },"
"  \"Id\": 0,"
"  \"Name\": \"Name\","
"  \"Strategy\": 0,"
"  \"TimeInterval\": 0,"
"  \"StartTime\": \"StartTime\","
"  \"TimeUnit\": \"TimeUnit\","
"  \"IsCreateCluster\": 0"
"}";
static int test_describe_execute_plan() {
  EmrDescribeExecutePlanRequestType req;
  EmrDescribeExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_execute_plan_response);
  listener->Start();
  req.id = "Id";
  int ret = emr->DescribeExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_describe_job_response = "{"
"  \"Id\": 0,"
"  \"Name\": \"Name\","
"  \"FailAct\": 0,"
"  \"Type\": 0,"
"  \"EnvParam\": \"EnvParam\""
"}";
static int test_describe_job() {
  EmrDescribeJobRequestType req;
  EmrDescribeJobResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_describe_job_response);
  listener->Start();
  req.id = "Id";
  int ret = emr->DescribeJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_job_resource_response = "{"
"  \"JobResourceInfoList\": {"
"    \"JobResourceInfo\": ["
"      {"
"        \"Type\": 0,"
"        \"Filename\": \"Filename\","
"        \"Size\": 0,"
"        \"Region\": \"Region\""
"      }"
"    ]"
"  }"
"}";
static int test_job_resource() {
  EmrJobResourceRequestType req;
  EmrJobResourceResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_job_resource_response);
  listener->Start();
  req.bucket = "Bucket";
  req.path = "Path";
  int ret = emr->JobResource(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_kill_execute_plan_record_node_response = "{}";
static int test_kill_execute_plan_record_node() {
  EmrKillExecutePlanRecordNodeRequestType req;
  EmrKillExecutePlanRecordNodeResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_kill_execute_plan_record_node_response);
  listener->Start();
  req.execute_plan_record_node_id = "ExecutePlanRecordNodeId";
  int ret = emr->KillExecutePlanRecordNode(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_clusters_response = "{"
"  \"Clusters\": {"
"    \"ClusterInfo\": ["
"      {"
"        \"Id\": 0,"
"        \"Name\": \"Name\","
"        \"PayType\": 0,"
"        \"Type\": 0,"
"        \"CreateTime\": \"CreateTime\","
"        \"RunningTime\": \"RunningTime\","
"        \"Status\": 0,"
"        \"FailReason\": \"FailReason\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_list_clusters() {
  EmrListClustersRequestType req;
  EmrListClustersResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_clusters_response);
  listener->Start();
  req.cluster_type = "ClusterType";
  req.pay_type = "PayType";
  req.status = "Status";
  req.is_desc = "IsDesc";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = emr->ListClusters(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_config_type_response = "{"
"  \"securityGroupTypes\": {"
"    \"SecurityGroupType\": ["
"      {"
"        \"Name\": \"Name\","
"        \"State\": \"State\","
"        \"Id\": \"Id\""
"      }"
"    ]"
"  },"
"  \"instanceTypes\": {"
"    \"InstanceType\": ["
"      {"
"        \"Classify\": \"Classify\","
"        \"State\": \"State\","
"        \"Type\": \"Type\","
"        \"CpuCore\": \"CpuCore\","
"        \"MemSize\": \"MemSize\","
"        \"HasCloudDisk\": 0,"
"        \"HasLocalDisk\": 0,"
"        \"HasLocalSSD\": 0,"
"        \"HasCloudSSD\": 0"
"      }"
"    ]"
"  },"
"  \"EmrVerTypes\": {"
"    \"EmrVerType\": ["
"      {"
"        \"SubModules\": {"
"          \"SubModule\": ["
"            {"
"              \"Name\": \"Name\","
"              \"Required\": \"Required\","
"              \"Optional\": \"Optional\""
"            }"
"          ]"
"        },"
"        \"Name\": \"Name\""
"      }"
"    ]"
"  },"
"  \"ZoneTypes\": {"
"    \"ZoneType\": ["
"      {"
"        \"AvailableResourceCreateionList\": {"
"          \"AvailableResourceCreateion\": ["
"            \"AvailableResourceCreateion\""
"          ]"
"        },"
"        \"AvailableDiskCategoriesList\": {"
"          \"AvailableDiskCategories\": ["
"            \"AvailableDiskCategories\""
"          ]"
"        },"
"        \"Name\": \"Name\","
"        \"Id\": \"Id\""
"      }"
"    ]"
"  }"
"}";
static int test_list_config_type() {
  EmrListConfigTypeResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_config_type_response);
  listener->Start();
  int ret = emr->ListConfigType(&resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_execute_plan_execute_record_nodes_response = "{"
"  \"executePlanNode\": {"
"    \"ExecutePlanNodeInfo\": ["
"      {"
"        \"WorkNodeId\": \"WorkNodeId\","
"        \"WorkNodeName\": \"WorkNodeName\","
"        \"StartTime\": \"StartTime\","
"        \"RunTime\": 0,"
"        \"JobType\": 0,"
"        \"JobId\": 0,"
"        \"ClusterId\": 0,"
"        \"Status\": 0"
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_list_execute_plan_execute_record_nodes() {
  EmrListExecutePlanExecuteRecordNodesRequestType req;
  EmrListExecutePlanExecuteRecordNodesResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_execute_plan_execute_record_nodes_response);
  listener->Start();
  req.execute_plan_exec_record_id = "ExecutePlanExecRecordId";
  req.is_desc = "IsDesc";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = emr->ListExecutePlanExecuteRecordNodes(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_execute_plan_execute_records_response = "{"
"  \"ExecutePlanExecRecord\": {"
"    \"ExecutePlanRecordInfo\": ["
"      {"
"        \"Id\": 0,"
"        \"ExecutePlanId\": 0,"
"        \"ExecutePlanName\": \"ExecutePlanName\","
"        \"StartTime\": \"StartTime\","
"        \"RunTime\": 0,"
"        \"ClusterId\": 0,"
"        \"ClusterName\": \"ClusterName\","
"        \"ClusterType\": 0,"
"        \"Status\": 0,"
"        \"LogEnable\": 0,"
"        \"LogPath\": \"LogPath\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_list_execute_plan_execute_records() {
  EmrListExecutePlanExecuteRecordsRequestType req;
  EmrListExecutePlanExecuteRecordsResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_execute_plan_execute_records_response);
  listener->Start();
  req.execute_plan_id = "ExecutePlanId";
  req.is_desc = "IsDesc";
  req.status = "Status";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = emr->ListExecutePlanExecuteRecords(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_execute_plan_jobs_response = "{"
"  \"ExecutePlanJobs\": {"
"    \"ExecutePlanJobInfo\": ["
"      {"
"        \"id\": \"id\","
"        \"isMaster\": \"isMaster\","
"        \"LastRunStatus\": \"LastRunStatus\","
"        \"RunTime\": \"RunTime\","
"        \"ClusterName\": \"ClusterName\","
"        \"Status\": \"Status\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_list_execute_plan_jobs() {
  EmrListExecutePlanJobsRequestType req;
  EmrListExecutePlanJobsResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_execute_plan_jobs_response);
  listener->Start();
  req.execute_plan_execute_node_id = "ExecutePlanExecuteNodeId";
  req.execute_plan_exec_record_id = "ExecutePlanExecRecordId";
  req.is_desc = "IsDesc";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = emr->ListExecutePlanJobs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_execute_plan_node_instances_response = "{"
"  \"ExecutePlanNodeInstance\": {"
"    \"ExecutePlanNodeInstanceInfo\": ["
"      {"
"        \"ApplicationId\": \"ApplicationId\","
"        \"InstanceInfo\": \"InstanceInfo\","
"        \"ContainerInfo\": \"ContainerInfo\""
"      }"
"    ]"
"  }"
"}";
static int test_list_execute_plan_node_instances() {
  EmrListExecutePlanNodeInstancesRequestType req;
  EmrListExecutePlanNodeInstancesResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_execute_plan_node_instances_response);
  listener->Start();
  req.execute_plan_work_node_id = "ExecutePlanWorkNodeId";
  int ret = emr->ListExecutePlanNodeInstances(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_execute_plans_response = "{"
"  \"ExecutePlans\": {"
"    \"ExecutePlanInfo\": ["
"      {"
"        \"Id\": 0,"
"        \"Name\": \"Name\","
"        \"LastRunStatus\": \"LastRunStatus\","
"        \"RunTime\": 0,"
"        \"ClusterName\": \"ClusterName\","
"        \"IsCreateCluster\": 0,"
"        \"Stragety\": 0,"
"        \"Status\": \"Status\","
"        \"TimeInterval\": 0,"
"        \"StartTime\": \"StartTime\","
"        \"TimeUnit\": \"TimeUnit\""
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_list_execute_plans() {
  EmrListExecutePlansRequestType req;
  EmrListExecutePlansResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_execute_plans_response);
  listener->Start();
  req.strategy = "Strategy";
  req.status = "Status";
  req.is_desc = "IsDesc";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = emr->ListExecutePlans(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_jobs_response = "{"
"  \"Jobs\": {"
"    \"JobInfo\": ["
"      {"
"        \"JobId\": 0,"
"        \"JobName\": \"JobName\","
"        \"JobType\": 0,"
"        \"EnvConfig\": \"EnvConfig\","
"        \"JobFailAct\": 0"
"      }"
"    ]"
"  },"
"  \"TotalCount\": 0,"
"  \"PageNumber\": 0,"
"  \"PageSize\": 0"
"}";
static int test_list_jobs() {
  EmrListJobsRequestType req;
  EmrListJobsResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_jobs_response);
  listener->Start();
  req.is_desc = "IsDesc";
  req.page_number = "PageNumber";
  req.page_size = "PageSize";
  int ret = emr->ListJobs(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_list_regions_response = "{"
"  \"RegionTypes\": {"
"    \"RegionType\": ["
"      {"
"        \"Name\": \"Name\","
"        \"Id\": \"Id\","
"        \"AsUrl\": \"AsUrl\""
"      }"
"    ]"
"  }"
"}";
static int test_list_regions() {
  EmrListRegionsResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_list_regions_response);
  listener->Start();
  int ret = emr->ListRegions(&resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_modify_cluster_name_response = "{}";
static int test_modify_cluster_name() {
  EmrModifyClusterNameRequestType req;
  EmrModifyClusterNameResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_cluster_name_response);
  listener->Start();
  req.cluster_id = "ClusterId";
  req.cluster_name = "ClusterName";
  int ret = emr->ModifyClusterName(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_modify_execute_plan_response = "{"
"  \"ExecutePlanId\": 0"
"}";
static int test_modify_execute_plan() {
  EmrModifyExecutePlanRequestType req;
  EmrModifyExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_execute_plan_response);
  listener->Start();
  req.cluster_id = "ClusterId";
  req.execute_plan_id = "ExecutePlanId";
  req.name = "Name";
  req.strategy = "Strategy";
  req.time_interval = "TimeInterval";
  req.start_time = "StartTime";
  req.time_unit = "TimeUnit";
  req.job_id = "JobId";
  int ret = emr->ModifyExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_modify_execute_plan_with_cluster_response = "{}";
static int test_modify_execute_plan_with_cluster() {
  EmrModifyExecutePlanWithClusterRequestType req;
  EmrModifyExecutePlanWithClusterResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_execute_plan_with_cluster_response);
  listener->Start();
  req.cluster_name = "ClusterName";
  req.zone_id = "ZoneId";
  req.log_enable = "LogEnable";
  req.log_path = "LogPath";
  req.security_group = "SecurityGroup";
  req.is_open_public_ip = "IsOpenPublicIp";
  req.security_group_name = "SecurityGroupName";
  req.emr_ver = "EmrVer";
  req.cluster_type = "ClusterType";
  req.install = "Install";
  req.master_index = "MasterIndex";
  req.ecs_order = "EcsOrder";
  req.emr_role4_ec_s = "EmrRole4ECS";
  req.emr_role4_oss = "EmrRole4Oss";
  req.pay_type = "PayType";
  req.period = "Period";
  req.execute_plan_id = "ExecutePlanId";
  req.name = "Name";
  req.strategy = "Strategy";
  req.time_interval = "TimeInterval";
  req.start_time = "StartTime";
  req.time_unit = "TimeUnit";
  req.job_id = "JobId";
  int ret = emr->ModifyExecutePlanWithCluster(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_modify_job_response = "{}";
static int test_modify_job() {
  EmrModifyJobRequestType req;
  EmrModifyJobResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_modify_job_response);
  listener->Start();
  req.id = "Id";
  req.name = "Name";
  req.type = "Type";
  req.env_parameter = "EnvParameter";
  req.fail_act = "FailAct";
  int ret = emr->ModifyJob(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_release_cluster_response = "{}";
static int test_release_cluster() {
  EmrReleaseClusterRequestType req;
  EmrReleaseClusterResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_release_cluster_response);
  listener->Start();
  req.cluster_id = "ClusterId";
  int ret = emr->ReleaseCluster(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_resume_execute_plan_response = "{}";
static int test_resume_execute_plan() {
  EmrResumeExecutePlanRequestType req;
  EmrResumeExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_resume_execute_plan_response);
  listener->Start();
  req.id = "Id";
  int ret = emr->ResumeExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_run_execute_plan_response = "{}";
static int test_run_execute_plan() {
  EmrRunExecutePlanRequestType req;
  EmrRunExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_run_execute_plan_response);
  listener->Start();
  req.execute_plan_id = "ExecutePlanId";
  int ret = emr->RunExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
static const char* test_stop_execute_plan_response = "{}";
static int test_stop_execute_plan() {
  EmrStopExecutePlanRequestType req;
  EmrStopExecutePlanResponseType resp;
  Emr* emr = Emr::CreateEmrClient("cn-hangzhou", "my_appid", "my_secret");
  if(!emr) return 0;
  emr->SetProxyHost("127.0.0.1:12234");
  emr->SetUseTls(false);
  HttpTestListener* listener = new HttpTestListener(12234);
  listener->SetResponseBody(test_stop_execute_plan_response);
  listener->Start();
  req.id = "Id";
  int ret = emr->StopExecutePlan(req, &resp, NULL);
  listener->WaitComplete();
  delete listener;
  delete emr;
}
int main() {
  test_create_cluster();
  test_create_execute_plan();
  test_create_execute_plan_with_cluster();
  test_create_job();
  test_delete_execute_plan();
  test_delete_job();
  test_describe_cluster();
  test_describe_execute_plan();
  test_describe_job();
  test_job_resource();
  test_kill_execute_plan_record_node();
  test_list_clusters();
  test_list_config_type();
  test_list_execute_plan_execute_record_nodes();
  test_list_execute_plan_execute_records();
  test_list_execute_plan_jobs();
  test_list_execute_plan_node_instances();
  test_list_execute_plans();
  test_list_jobs();
  test_list_regions();
  test_modify_cluster_name();
  test_modify_execute_plan();
  test_modify_execute_plan_with_cluster();
  test_modify_job();
  test_release_cluster();
  test_resume_execute_plan();
  test_run_execute_plan();
  test_stop_execute_plan();
}
