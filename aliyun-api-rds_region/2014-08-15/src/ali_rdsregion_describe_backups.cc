#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_rdsregion.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeBackupsBackupType* item);
void Json2Type(const Json::Value& value, RdsRegionDescribeBackupsResponseType* item);

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
void Json2Type(const Json::Value& value, RdsRegionDescribeBackupsBackupType* item) {
  if(value.isMember("BackupId")) {
    item->backup_id = value["BackupId"].asString();
  }
  if(value.isMember("DBInstanceId")) {
    item->db_instance_id = value["DBInstanceId"].asString();
  }
  if(value.isMember("BackupStatus")) {
    item->backup_status = value["BackupStatus"].asString();
  }
  if(value.isMember("BackupStartTime")) {
    item->backup_start_time = value["BackupStartTime"].asString();
  }
  if(value.isMember("BackupEndTime")) {
    item->backup_end_time = value["BackupEndTime"].asString();
  }
  if(value.isMember("BackupType")) {
    item->backup_type = value["BackupType"].asString();
  }
  if(value.isMember("BackupMode")) {
    item->backup_mode = value["BackupMode"].asString();
  }
  if(value.isMember("BackupMethod")) {
    item->backup_method = value["BackupMethod"].asString();
  }
  if(value.isMember("BackupDownloadURL")) {
    item->backup_download_ur_l = value["BackupDownloadURL"].asString();
  }
  if(value.isMember("BackupLocation")) {
    item->backup_location = value["BackupLocation"].asString();
  }
  if(value.isMember("BackupExtractionStatus")) {
    item->backup_extraction_status = value["BackupExtractionStatus"].asString();
  }
  if(value.isMember("BackupScale")) {
    item->backup_scale = value["BackupScale"].asString();
  }
  if(value.isMember("BackupDBNames")) {
    item->backup_db_names = value["BackupDBNames"].asString();
  }
  if(value.isMember("BackupSize")) {
    item->backup_size = value["BackupSize"].asInt();
  }
}
void Json2Type(const Json::Value& value, RdsRegionDescribeBackupsResponseType* item) {
  if(value.isMember("TotalRecordCount")) {
    item->total_record_count = value["TotalRecordCount"].asString();
  }
  if(value.isMember("PageNumber")) {
    item->page_number = value["PageNumber"].asString();
  }
  if(value.isMember("PageRecordCount")) {
    item->page_record_count = value["PageRecordCount"].asString();
  }
  if(value.isMember("Items") && value["Items"].isMember("Backup")) {
    Json2Array<RdsRegionDescribeBackupsBackupType>(value["Items"]["Backup"], &item->items);
  }
}
}

int RdsRegion::DescribeBackups(const RdsRegionDescribeBackupsRequestType& req,
                      RdsRegionDescribeBackupsResponseType* response,
                       RdsRegionErrorInfo* error_info) {
  std::string str_response;
  int status_code;
  int ret = 0;
  bool parse_success = false;
  std::string secheme = this->use_tls_ ? "https" : "http";
  AliRpcRequest* req_rpc = new AliRpcRequest(version_,
                         appid_,
                         secret_,
                         secheme + "://" + host_);
  if((!this->use_tls_) && this->proxy_host_ && this->proxy_host_[0]) {
    req_rpc->SetHttpProxy( this->proxy_host_);
  }
  Json::Value val;
  Json::Reader reader;
  req_rpc->AddRequestQuery("Action","DescribeBackups");
  if(!req.owner_id.empty()) {
    req_rpc->AddRequestQuery("OwnerId", req.owner_id);
  }
  if(!req.resource_owner_account.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerAccount", req.resource_owner_account);
  }
  if(!req.resource_owner_id.empty()) {
    req_rpc->AddRequestQuery("ResourceOwnerId", req.resource_owner_id);
  }
  if(!req.db_instance_id.empty()) {
    req_rpc->AddRequestQuery("DBInstanceId", req.db_instance_id);
  }
  if(!req.backup_id.empty()) {
    req_rpc->AddRequestQuery("BackupId", req.backup_id);
  }
  if(!req.backup_location.empty()) {
    req_rpc->AddRequestQuery("BackupLocation", req.backup_location);
  }
  if(!req.backup_status.empty()) {
    req_rpc->AddRequestQuery("BackupStatus", req.backup_status);
  }
  if(!req.backup_mode.empty()) {
    req_rpc->AddRequestQuery("BackupMode", req.backup_mode);
  }
  if(!req.start_time.empty()) {
    req_rpc->AddRequestQuery("StartTime", req.start_time);
  }
  if(!req.end_time.empty()) {
    req_rpc->AddRequestQuery("EndTime", req.end_time);
  }
  if(!req.page_size.empty()) {
    req_rpc->AddRequestQuery("PageSize", req.page_size);
  }
  if(!req.page_number.empty()) {
    req_rpc->AddRequestQuery("PageNumber", req.page_number);
  }
  if(!req.owner_account.empty()) {
    req_rpc->AddRequestQuery("OwnerAccount", req.owner_account);
  }
  if(this->region_id_ && this->region_id_[0]) {
    req_rpc->AddRequestQuery("RegionId", this->region_id_);
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
  if(status_code!= 200 && error_info && parse_success) {
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
