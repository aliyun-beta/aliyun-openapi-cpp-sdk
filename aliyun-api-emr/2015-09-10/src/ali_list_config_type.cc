#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_emr.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, ListConfigTypeSecurityGroupTypeType* item);
void Json2Type(const Json::Value& value, ListConfigTypeInstanceTypeType* item);
void Json2Type(const Json::Value& value, ListConfigTypeSubModuleType* item);
void Json2Type(const Json::Value& value, ListConfigTypeEmrVerTypeType* item);
void Json2Type(const Json::Value& value, ListConfigTypeZoneTypeType* item);
void Json2Type(const Json::Value& value, ListConfigTypeResponseType* item);

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
void Json2Type(const Json::Value& value, ListConfigTypeSecurityGroupTypeType* item) {
  if(value.isMember("Name")) {
    item->name = value["Name"].asString();
  }
  if(value.isMember("State")) {
    item->state = value["State"].asString();
  }
  if(value.isMember("Id")) {
    item->id = value["Id"].asString();
  }
}
void Json2Type(const Json::Value& value, ListConfigTypeInstanceTypeType* item) {
  if(value.isMember("Classify")) {
    item->classify = value["Classify"].asString();
  }
  if(value.isMember("State")) {
    item->state = value["State"].asString();
  }
  if(value.isMember("Type")) {
    item->type = value["Type"].asString();
  }
  if(value.isMember("CpuCore")) {
    item->cpu_core = value["CpuCore"].asString();
  }
  if(value.isMember("MemSize")) {
    item->mem_size = value["MemSize"].asString();
  }
  if(value.isMember("HasCloudDisk")) {
    item->has_cloud_disk = value["HasCloudDisk"].asBool();
  }
  if(value.isMember("HasLocalDisk")) {
    item->has_local_disk = value["HasLocalDisk"].asBool();
  }
  if(value.isMember("HasLocalSSD")) {
    item->has_local_ss_d = value["HasLocalSSD"].asBool();
  }
  if(value.isMember("HasCloudSSD")) {
    item->has_cloud_ss_d = value["HasCloudSSD"].asBool();
  }
}
void Json2Type(const Json::Value& value, ListConfigTypeSubModuleType* item) {
  if(value.isMember("Name")) {
    item->name = value["Name"].asString();
  }
  if(value.isMember("Required")) {
    item->required = value["Required"].asString();
  }
  if(value.isMember("Optional")) {
    item->optional = value["Optional"].asString();
  }
}
void Json2Type(const Json::Value& value, ListConfigTypeEmrVerTypeType* item) {
  if(value.isMember("Name")) {
    item->name = value["Name"].asString();
  }
  if(value.isMember("SubModules") && value["SubModules"].isMember("SubModule")) {
    Json2Array<ListConfigTypeSubModuleType>(value["SubModules"]["SubModule"], &item->sub_modules);
  }
}
void Json2Type(const Json::Value& value, ListConfigTypeZoneTypeType* item) {
  if(value.isMember("Name")) {
    item->name = value["Name"].asString();
  }
  if(value.isMember("Id")) {
    item->id = value["Id"].asString();
  }
  if(value.isMember("AvailableResourceCreateionList")  && value["AvailableResourceCreateionList"].isMember("AvailableResourceCreateion")) {
    Json2Array<std::string>(value["AvailableResourceCreateionList"]["AvailableResourceCreateion"], &item->available_resource_createion_list);
  }
  if(value.isMember("AvailableDiskCategoriesList")  && value["AvailableDiskCategoriesList"].isMember("AvailableDiskCategories")) {
    Json2Array<std::string>(value["AvailableDiskCategoriesList"]["AvailableDiskCategories"], &item->available_disk_categories_list);
  }
}
void Json2Type(const Json::Value& value, ListConfigTypeResponseType* item) {
  if(value.isMember("securityGroupTypes") && value["securityGroupTypes"].isMember("SecurityGroupType")) {
    Json2Array<ListConfigTypeSecurityGroupTypeType>(value["securityGroupTypes"]["SecurityGroupType"], &item->security_group_types);
  }
  if(value.isMember("instanceTypes") && value["instanceTypes"].isMember("InstanceType")) {
    Json2Array<ListConfigTypeInstanceTypeType>(value["instanceTypes"]["InstanceType"], &item->instance_types);
  }
  if(value.isMember("EmrVerTypes") && value["EmrVerTypes"].isMember("EmrVerType")) {
    Json2Array<ListConfigTypeEmrVerTypeType>(value["EmrVerTypes"]["EmrVerType"], &item->emr_ver_types);
  }
  if(value.isMember("ZoneTypes") && value["ZoneTypes"].isMember("ZoneType")) {
    Json2Array<ListConfigTypeZoneTypeType>(value["ZoneTypes"]["ZoneType"], &item->zone_types);
  }
}
}

int Emr::ListConfigType(const ListConfigTypeRequestType& req,
                      ListConfigTypeResponseType* response,
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
  req_rpc->AddRequestQuery("Action","ListConfigType");
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
