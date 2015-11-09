#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_ram.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, ListGroupsGroupType* item);
void Json2Type(const Json::Value& value, ListGroupsResponseType* item);

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
void Json2Type(const Json::Value& value, ListGroupsGroupType* item) {
  if(value.isMember("GroupName")) {
    item->group_name = value["GroupName"].asString();
  }
  if(value.isMember("Comments")) {
    item->comments = value["Comments"].asString();
  }
  if(value.isMember("CreateDate")) {
    item->create_date = value["CreateDate"].asString();
  }
  if(value.isMember("UpdateDate")) {
    item->update_date = value["UpdateDate"].asString();
  }
}
void Json2Type(const Json::Value& value, ListGroupsResponseType* item) {
  if(value.isMember("IsTruncated")) {
    item->is_truncated = value["IsTruncated"].asBool();
  }
  if(value.isMember("Marker")) {
    item->marker = value["Marker"].asString();
  }
  if(value.isMember("Groups") && value["Groups"].isMember("Group")) {
    Json2Array<ListGroupsGroupType>(value["Groups"]["Group"], &item->groups);
  }
}
}

int Ram::ListGroups(const ListGroupsRequestType& req,
                      ListGroupsResponseType* response,
                       AliRamErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","ListGroups");
  if(!req.marker.empty()) {
    req_rpc->AddRequestQuery("Marker", req.marker);
  }
  if(!req.max_items.empty()) {
    req_rpc->AddRequestQuery("MaxItems", req.max_items);
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
  if(status_code!= 200 && error_info) {
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
