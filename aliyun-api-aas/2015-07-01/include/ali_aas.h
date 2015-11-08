#ifndef ALI_AASH
#define ALI_AASH
#include <string>
#include "ali_create_access_key_for_account_types.h"
#include "ali_create_aliyun_account_types.h"
#include "ali_delete_access_key_for_account_types.h"
#include "ali_get_basic_info_for_account_types.h"
#include "ali_list_access_keys_for_account_types.h"
#include "ali_update_access_key_status_for_account_types.h"
namespace aliyun {
struct AliAasErrorInfo {
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
  int CreateAccessKeyForAccount(const CreateAccessKeyForAccountRequestType& req,
          CreateAccessKeyForAccountResponseType* resp,
          AliAasErrorInfo* error_info);

  int CreateAliyunAccount(const CreateAliyunAccountRequestType& req,
          CreateAliyunAccountResponseType* resp,
          AliAasErrorInfo* error_info);

  int DeleteAccessKeyForAccount(const DeleteAccessKeyForAccountRequestType& req,
          DeleteAccessKeyForAccountResponseType* resp,
          AliAasErrorInfo* error_info);

  int GetBasicInfoForAccount(const GetBasicInfoForAccountRequestType& req,
          GetBasicInfoForAccountResponseType* resp,
          AliAasErrorInfo* error_info);

  int ListAccessKeysForAccount(const ListAccessKeysForAccountRequestType& req,
          ListAccessKeysForAccountResponseType* resp,
          AliAasErrorInfo* error_info);

  int UpdateAccessKeyStatusForAccount(const UpdateAccessKeyStatusForAccountRequestType& req,
          UpdateAccessKeyStatusForAccountResponseType* resp,
          AliAasErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
