#ifndef ALI_CRMH
#define ALI_CRMH
#include <string>
#include "ali_crm_add_label_types.h"
#include "ali_crm_check_label_types.h"
#include "ali_crm_delete_label_types.h"
#include "ali_crm_query_customer_label_types.h"
namespace aliyun {
struct CrmErrorInfo {
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
  int AddLabel(const CrmAddLabelRequestType& req,
          CrmAddLabelResponseType* resp,
          CrmErrorInfo* error_info);

  int CheckLabel(const CrmCheckLabelRequestType& req,
          CrmCheckLabelResponseType* resp,
          CrmErrorInfo* error_info);

  int DeleteLabel(const CrmDeleteLabelRequestType& req,
          CrmDeleteLabelResponseType* resp,
          CrmErrorInfo* error_info);

  int QueryCustomerLabel(const CrmQueryCustomerLabelRequestType& req,
          CrmQueryCustomerLabelResponseType* resp,
          CrmErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
