#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_emr.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeClusterClusterInfoType* item);
void Json2Type(const Json::Value& value, DescribeClusterSoftwareInfoType* item);
void Json2Type(const Json::Value& value, DescribeClusterNodeType* item);
void Json2Type(const Json::Value& value, DescribeClusterEcsRoleType* item);
void Json2Type(const Json::Value& value, DescribeClusterEcsInfoType* item);
void Json2Type(const Json::Value& value, DescribeClusterResponseType* item);

template<typename T>
class Json2Array {
public:
  Json2Array(const Json::Value& value, std::vector<T>* vec) {
    if(!value.isArray()) {
      return;
    }
    for(int i = 0; i < value.size(); i++) {
      T val;
      Json2Type(value[i], &val);
      vec->push_back(val);
    }
  }
};

void Json2Type(const Json::Value& value, std::string* item) {
  *item = value.asString();
}
void Json2Type(const Json::Value& value, DescribeClusterClusterInfoType* item) {
  if(value.isMember("ClusterId")) {
    item->cluster_id = value["ClusterId"].asInt();
  }
  if(value.isMember("BizId")) {
    item->biz_id = value["BizId"].asString();
  }
  if(value.isMember("ClusterName")) {
    item->cluster_name = value["ClusterName"].asString();
  }
  if(value.isMember("UtcStartTime")) {
    item->utc_start_time = value["UtcStartTime"].asString();
  }
  if(value.isMember("UtcStopTime")) {
    item->utc_stop_time = value["UtcStopTime"].asString();
  }
  if(value.isMember("TimeOutEnable")) {
    item->time_out_enable = value["TimeOutEnable"].asInt();
  }
  if(value.isMember("TimeOutTime")) {
    item->time_out_time = value["TimeOutTime"].asString();
  }
  if(value.isMember("TimeOutWarningWay")) {
    item->time_out_warning_way = value["TimeOutWarningWay"].asInt();
  }
  if(value.isMember("TimeOutOperate")) {
    item->time_out_operate = value["TimeOutOperate"].asInt();
  }
  if(value.isMember("ReleaseSetting")) {
    item->release_setting = value["ReleaseSetting"].asInt();
  }
  if(value.isMember("IsOpenOssLog")) {
    item->is_open_oss_log = value["IsOpenOssLog"].asBool();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asInt();
  }
  if(value.isMember("LastJobStatus")) {
    item->last_job_status = value["LastJobStatus"].asInt();
  }
  if(value.isMember("RunningTime")) {
    item->running_time = value["RunningTime"].asInt();
  }
  if(value.isMember("FailReason")) {
    item->fail_reason = value["FailReason"].asString();
  }
  if(value.isMember("OssPath")) {
    item->oss_path = value["OssPath"].asString();
  }
  if(value.isMember("EmrRole4ECS")) {
    item->emr_role4_ec_s = value["EmrRole4ECS"].asString();
  }
  if(value.isMember("EmrRole4Oss")) {
    item->emr_role4_oss = value["EmrRole4Oss"].asString();
  }
  if(value.isMember("IsOpenPublicIp")) {
    item->is_open_public_ip = value["IsOpenPublicIp"].asBool();
  }
}
void Json2Type(const Json::Value& value, DescribeClusterSoftwareInfoType* item) {
  if(value.isMember("EmrVer")) {
    item->emr_ver = value["EmrVer"].asString();
  }
  if(value.isMember("ClusterType")) {
    item->cluster_type = value["ClusterType"].asString();
  }
  if(value.isMember("Softwares")) {
    item->softwares = value["Softwares"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeClusterNodeType* item) {
  if(value.isMember("InstanceId")) {
    item->instance_id = value["InstanceId"].asString();
  }
  if(value.isMember("PubIp")) {
    item->pub_ip = value["PubIp"].asString();
  }
  if(value.isMember("InnerIp")) {
    item->inner_ip = value["InnerIp"].asString();
  }
  if(value.isMember("DiskInfo")) {
    item->disk_info = value["DiskInfo"].asString();
  }
}
void Json2Type(const Json::Value& value, DescribeClusterEcsRoleType* item) {
  if(value.isMember("IsMaster")) {
    item->is_master = value["IsMaster"].asBool();
  }
  if(value.isMember("InstanceType")) {
    item->instance_type = value["InstanceType"].asString();
  }
  if(value.isMember("Payment")) {
    item->payment = value["Payment"].asString();
  }
  if(value.isMember("CpuCore")) {
    item->cpu_core = value["CpuCore"].asString();
  }
  if(value.isMember("MemoryCapacity")) {
    item->memory_capacity = value["MemoryCapacity"].asString();
  }
  if(value.isMember("DiskType")) {
    item->disk_type = value["DiskType"].asInt();
  }
  if(value.isMember("DiskCapacity")) {
    item->disk_capacity = value["DiskCapacity"].asInt();
  }
  if(value.isMember("BandWidth")) {
    item->band_width = value["BandWidth"].asString();
  }
  if(value.isMember("NetPayType")) {
    item->net_pay_type = value["NetPayType"].asString();
  }
  if(value.isMember("EcsPayType")) {
    item->ecs_pay_type = value["EcsPayType"].asString();
  }
  if(value.isMember("Nodes") && value["Nodes"].isMember("Node")) {
    Json2Array<DescribeClusterNodeType>(value["Nodes"]["Node"], &item->nodes);
  }
}
void Json2Type(const Json::Value& value, DescribeClusterEcsInfoType* item) {
  if(value.isMember("RegionId")) {
    item->region_id = value["RegionId"].asString();
  }
  if(value.isMember("ZoneId")) {
    item->zone_id = value["ZoneId"].asString();
  }
  if(value.isMember("ImageId")) {
    item->image_id = value["ImageId"].asString();
  }
  if(value.isMember("ImageName")) {
    item->image_name = value["ImageName"].asString();
  }
  if(value.isMember("SparkVersion")) {
    item->spark_version = value["SparkVersion"].asString();
  }
  if(value.isMember("SecurityGroupId")) {
    item->security_group_id = value["SecurityGroupId"].asString();
  }
  if(value.isMember("TotalCount")) {
    item->total_count = value["TotalCount"].asInt();
  }
  if(value.isMember("MasterCount")) {
    item->master_count = value["MasterCount"].asInt();
  }
  if(value.isMember("SlaveCount")) {
    item->slave_count = value["SlaveCount"].asInt();
  }
  if(value.isMember("EcsRoles") && value["EcsRoles"].isMember("EcsRole")) {
    Json2Array<DescribeClusterEcsRoleType>(value["EcsRoles"]["EcsRole"], &item->ecs_roles);
  }
}
void Json2Type(const Json::Value& value, DescribeClusterResponseType* item) {
  if(value.isMember("ClusterInfo")) {
    Json2Type(value["ClusterInfo"], &item->cluster_info);
  }
  if(value.isMember("SoftwareInfo")) {
    Json2Type(value["SoftwareInfo"], &item->software_info);
  }
  if(value.isMember("EcsInfo")) {
    Json2Type(value["EcsInfo"], &item->ecs_info);
  }
}
}

int Emr::DescribeCluster(const DescribeClusterRequestType& req,
                      DescribeClusterResponseType* response,
                       AliEmrErrorInfo* error_info) {
  std::string str_response;
  int status_code;
  int ret = 0;
  bool parse_success = false;
  AliRpcRequest* req_rpc = new AliRpcRequest(version_,
                         appid_,
                         secret_,
                         "https://" + host_);
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","DescribeCluster");
  if(!req.cluster_id.empty()) {
    req_rpc->AddRequestQuery("ClusterId", req.cluster_id);
  }
  if(req_rpc->CommitRequest() != 0) {
     if(error_info) {
       error_info->code = "connect to host failed";
     }
     ret = -1;
     goto out;
  }
  status_code = req_rpc->WaitResponseHeaderComplete();
  req_rpc->ReadResponseBody(str_response);
  if(status_code > 0 && !str_response.empty()){
    parse_success = reader.parse(str_response, val);
  }
  if(!parse_success) {
    if(error_info) {
      error_info->code = "parse response failed";
    }
    ret = -1;
    goto out;
  }
  if(status_code!= 200 && error_info && !parse_success) {
    error_info->request_id = val.isMember("RequestId") ? val["RequestId"].asString(): "";
    error_info->code = val.isMember("Code") ? val["Code"].asString(): "";
    error_info->host_id = val.isMember("HostId") ? val["HostId"].asString(): "";
    error_info->message = val.isMember("Message") ? val["Message"].asString(): "";
  }
  if(status_code== 200 && response) {
    Json2Type(val, response);
  }
  ret = status_code;
out:
  delete req_rpc;
  return ret;
}
