#include <stdio.h>
#include "ali_api_core.h"
#include "ali_string_utils.h"
#include "ali_bss.h"
#include "json/value.h"
#include "json/reader.h"
using namespace aliyun;
namespace {

void Json2Type(const Json::Value& value, std::string* item);
void Json2Type(const Json::Value& value, DescribeCouponDetailResponseType* item);

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
void Json2Type(const Json::Value& value, DescribeCouponDetailResponseType* item) {
  if(value.isMember("CouponTemplateId")) {
    item->coupon_template_id = value["CouponTemplateId"].asInt();
  }
  if(value.isMember("TotalAmount")) {
    item->total_amount = value["TotalAmount"].asString();
  }
  if(value.isMember("BalanceAmount")) {
    item->balance_amount = value["BalanceAmount"].asString();
  }
  if(value.isMember("FrozenAmount")) {
    item->frozen_amount = value["FrozenAmount"].asString();
  }
  if(value.isMember("ExpiredAmount")) {
    item->expired_amount = value["ExpiredAmount"].asString();
  }
  if(value.isMember("DeliveryTime")) {
    item->delivery_time = value["DeliveryTime"].asString();
  }
  if(value.isMember("ExpiredTime")) {
    item->expired_time = value["ExpiredTime"].asString();
  }
  if(value.isMember("CouponNumber")) {
    item->coupon_number = value["CouponNumber"].asString();
  }
  if(value.isMember("Status")) {
    item->status = value["Status"].asString();
  }
  if(value.isMember("Description")) {
    item->description = value["Description"].asString();
  }
  if(value.isMember("CreationTime")) {
    item->creation_time = value["CreationTime"].asString();
  }
  if(value.isMember("ModificationTime")) {
    item->modification_time = value["ModificationTime"].asString();
  }
  if(value.isMember("PriceLimit")) {
    item->price_limit = value["PriceLimit"].asString();
  }
  if(value.isMember("Application")) {
    item->application = value["Application"].asString();
  }
  if(value.isMember("ProductCodes")  && value["ProductCodes"].isMember("ProductCode")) {
    Json2Array<std::string>(value["ProductCodes"]["ProductCode"], &item->product_codes);
  }
  if(value.isMember("TradeTypes")  && value["TradeTypes"].isMember("TradeType")) {
    Json2Array<std::string>(value["TradeTypes"]["TradeType"], &item->trade_types);
  }
}
}

int Bss::DescribeCouponDetail(const DescribeCouponDetailRequestType& req,
                      DescribeCouponDetailResponseType* response,
                       AliBssErrorInfo* error_info) {
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
  req_rpc->AddRequestQuery("Action","DescribeCouponDetail");
  if(!req.coupon_number.empty()) {
    req_rpc->AddRequestQuery("CouponNumber", req.coupon_number);
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
