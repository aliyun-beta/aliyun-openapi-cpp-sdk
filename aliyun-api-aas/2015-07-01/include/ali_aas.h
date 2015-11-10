#ifndef ALI_AASH
#define ALI_AASH
#include <string>
#include "ali_aas_create_access_key_for_account_types.h"
#include "ali_aas_create_aliyun_account_types.h"
#include "ali_aas_delete_access_key_for_account_types.h"
#include "ali_aas_get_basic_info_for_account_types.h"
#include "ali_aas_list_access_keys_for_account_types.h"
#include "ali_aas_update_access_key_status_for_account_types.h"
namespace aliyun {
struct AasErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Aas {
public:
  static Aas* CreateAasClient(std::string endpoint, std::string appid, std::string secret);
private:
  Aas(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-07-01"),
  host_(host) {}
public:
  int CreateAccessKeyForAccount(const AasCreateAccessKeyForAccountRequestType& req,
          AasCreateAccessKeyForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int CreateAliyunAccount(const AasCreateAliyunAccountRequestType& req,
          AasCreateAliyunAccountResponseType* resp,
          AasErrorInfo* error_info);

  int DeleteAccessKeyForAccount(const AasDeleteAccessKeyForAccountRequestType& req,
          AasDeleteAccessKeyForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int GetBasicInfoForAccount(const AasGetBasicInfoForAccountRequestType& req,
          AasGetBasicInfoForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int ListAccessKeysForAccount(const AasListAccessKeysForAccountRequestType& req,
          AasListAccessKeysForAccountResponseType* resp,
          AasErrorInfo* error_info);

  int UpdateAccessKeyStatusForAccount(const AasUpdateAccessKeyStatusForAccountRequestType& req,
          AasUpdateAccessKeyStatusForAccountResponseType* resp,
          AasErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
