#ifndef ALI_OTSH
#define ALI_OTSH
#include <string>
#include "ali_delete_instance_types.h"
#include "ali_delete_user_types.h"
#include "ali_get_instance_types.h"
#include "ali_get_user_types.h"
#include "ali_insert_instance_types.h"
#include "ali_insert_user_types.h"
#include "ali_list_instance_types.h"
#include "ali_update_instance_types.h"
#include "ali_update_user_types.h"
namespace aliyun {
struct AliOtsErrorInfo {
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
  int DeleteInstance(const DeleteInstanceRequestType& req,
          DeleteInstanceResponseType* resp,
          AliOtsErrorInfo* error_info);

  int DeleteUser(const DeleteUserRequestType& req,
          DeleteUserResponseType* resp,
          AliOtsErrorInfo* error_info);

  int GetInstance(const GetInstanceRequestType& req,
          GetInstanceResponseType* resp,
          AliOtsErrorInfo* error_info);

  int GetUser(const GetUserRequestType& req,
          GetUserResponseType* resp,
          AliOtsErrorInfo* error_info);

  int InsertInstance(const InsertInstanceRequestType& req,
          InsertInstanceResponseType* resp,
          AliOtsErrorInfo* error_info);

  int InsertUser(const InsertUserRequestType& req,
          InsertUserResponseType* resp,
          AliOtsErrorInfo* error_info);

  int ListInstance(const ListInstanceRequestType& req,
          ListInstanceResponseType* resp,
          AliOtsErrorInfo* error_info);

  int UpdateInstance(const UpdateInstanceRequestType& req,
          UpdateInstanceResponseType* resp,
          AliOtsErrorInfo* error_info);

  int UpdateUser(const UpdateUserRequestType& req,
          UpdateUserResponseType* resp,
          AliOtsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
