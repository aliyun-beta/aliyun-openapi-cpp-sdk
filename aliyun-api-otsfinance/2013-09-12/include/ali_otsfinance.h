#ifndef ALI_OTS_FINANCEH
#define ALI_OTS_FINANCEH
#include <string>
#include "ali_otsfinance_delete_instance_types.h"
#include "ali_otsfinance_delete_user_types.h"
#include "ali_otsfinance_get_instance_types.h"
#include "ali_otsfinance_get_user_types.h"
#include "ali_otsfinance_insert_instance_types.h"
#include "ali_otsfinance_insert_user_types.h"
#include "ali_otsfinance_list_instance_types.h"
#include "ali_otsfinance_update_instance_types.h"
#include "ali_otsfinance_update_user_types.h"
namespace aliyun {
struct OtsFinanceErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class OtsFinance {
public:
  static OtsFinance* CreateOtsFinanceClient(std::string endpoint, std::string appid, std::string secret);
private:
  OtsFinance(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2013-09-12"),
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
  int DeleteInstance(const OtsFinanceDeleteInstanceRequestType& req,
          OtsFinanceDeleteInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int DeleteUser(OtsFinanceDeleteUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int GetInstance(const OtsFinanceGetInstanceRequestType& req,
          OtsFinanceGetInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int GetUser(OtsFinanceGetUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int InsertInstance(const OtsFinanceInsertInstanceRequestType& req,
          OtsFinanceInsertInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int InsertUser(const OtsFinanceInsertUserRequestType& req,
          OtsFinanceInsertUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int ListInstance(OtsFinanceListInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int UpdateInstance(const OtsFinanceUpdateInstanceRequestType& req,
          OtsFinanceUpdateInstanceResponseType* resp,
          OtsFinanceErrorInfo* error_info);

  int UpdateUser(const OtsFinanceUpdateUserRequestType& req,
          OtsFinanceUpdateUserResponseType* resp,
          OtsFinanceErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
