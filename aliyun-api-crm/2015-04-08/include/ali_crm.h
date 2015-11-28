#ifndef ALI_CRMH
#define ALI_CRMH
#include <string>
#include <string.h>
#include <stdlib.h>
#include "ali_crm_add_label_types.h"
#include "ali_crm_check_label_types.h"
#include "ali_crm_delete_label_types.h"
#include "ali_crm_query_customer_label_types.h"
#ifdef WIN32
 #ifdef aliyun_api_crm_2015_04_08_EXPORTS
 #define ALIYUN_API_CRM_2015_04_08_DLL_EXPORT_IMPORT __declspec(dllexport)
 #else
 #define ALIYUN_API_CRM_2015_04_08_DLL_EXPORT_IMPORT 
 #endif
#else
#define ALIYUN_API_CRM_2015_04_08_DLL_EXPORT_IMPORT
#endif
namespace aliyun {
struct CrmErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class ALIYUN_API_CRM_2015_04_08_DLL_EXPORT_IMPORT Crm {
public:
  static Crm* CreateCrmClient(std::string endpoint, std::string appid, std::string secret);
  ~Crm();
private:
  Crm(std::string host, std::string appid, std::string secret);
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetProxyHost(std::string proxy_host) {
    if(this->proxy_host_) {
      free(this->proxy_host_);
    }
    this->proxy_host_ = strdup(proxy_host.c_str());
  }
  std::string GetProxyHost() {  return this->proxy_host_;  }
  void SetRegionId(std::string region_id) {
    if(this->region_id_) {
      free(this->region_id_);
    }
    this->region_id_ = strdup(region_id.c_str());
  }
  std::string GetRegionId() {  return this->region_id_;  }
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
  char* appid_;
  char* secret_;
  char* version_;
  char* host_;
  char* proxy_host_;
  bool support_tls_;
  bool use_tls_;
  char* region_id_;
};  //end class
} // end namespace
#endif
