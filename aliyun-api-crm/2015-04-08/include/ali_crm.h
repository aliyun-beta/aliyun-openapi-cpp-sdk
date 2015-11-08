#ifndef ALI_CRMH
#define ALI_CRMH
#include <string>
#include "ali_add_label_types.h"
#include "ali_check_label_types.h"
#include "ali_delete_label_types.h"
#include "ali_query_customer_label_types.h"
namespace aliyun {
struct AliCrmErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Crm {
public:
  static Crm* CreateCrmClient(std::string endpoint, std::string appid, std::string secret);
private:
  Crm(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-04-08"),
  host_(host) {}
public:
  int AddLabel(const AddLabelRequestType& req,
          AddLabelResponseType* resp,
          AliCrmErrorInfo* error_info);

  int CheckLabel(const CheckLabelRequestType& req,
          CheckLabelResponseType* resp,
          AliCrmErrorInfo* error_info);

  int DeleteLabel(const DeleteLabelRequestType& req,
          DeleteLabelResponseType* resp,
          AliCrmErrorInfo* error_info);

  int QueryCustomerLabel(const QueryCustomerLabelRequestType& req,
          QueryCustomerLabelResponseType* resp,
          AliCrmErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
