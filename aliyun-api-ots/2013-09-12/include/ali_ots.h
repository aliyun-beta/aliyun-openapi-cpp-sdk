#ifndef ALI_OTSH
#define ALI_OTSH
#include <string>
#include "ali_ots_delete_instance_types.h"
#include "ali_ots_delete_user_types.h"
#include "ali_ots_get_instance_types.h"
#include "ali_ots_get_user_types.h"
#include "ali_ots_insert_instance_types.h"
#include "ali_ots_insert_user_types.h"
#include "ali_ots_list_instance_types.h"
#include "ali_ots_update_instance_types.h"
#include "ali_ots_update_user_types.h"
namespace aliyun {
struct OtsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Ots {
public:
  static Ots* CreateOtsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Ots(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2013-09-12"),
  host_(host) {}
public:
  int DeleteInstance(const OtsDeleteInstanceRequestType& req,
          OtsDeleteInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int DeleteUser(OtsDeleteUserResponseType* resp,
          OtsErrorInfo* error_info);

  int GetInstance(const OtsGetInstanceRequestType& req,
          OtsGetInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int GetUser(OtsGetUserResponseType* resp,
          OtsErrorInfo* error_info);

  int InsertInstance(const OtsInsertInstanceRequestType& req,
          OtsInsertInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int InsertUser(const OtsInsertUserRequestType& req,
          OtsInsertUserResponseType* resp,
          OtsErrorInfo* error_info);

  int ListInstance(OtsListInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int UpdateInstance(const OtsUpdateInstanceRequestType& req,
          OtsUpdateInstanceResponseType* resp,
          OtsErrorInfo* error_info);

  int UpdateUser(const OtsUpdateUserRequestType& req,
          OtsUpdateUserResponseType* resp,
          OtsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
