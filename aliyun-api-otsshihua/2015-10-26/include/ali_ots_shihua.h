#ifndef ALI_OTS_SHIHUAH
#define ALI_OTS_SHIHUAH
#include <string>
#include "ali_delete_instance_types.h"
#include "ali_get_instance_types.h"
#include "ali_insert_instance_types.h"
#include "ali_list_instance_types.h"
namespace aliyun {
struct AliOtsShihuaErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class OtsShihua {
public:
  static OtsShihua* CreateOtsShihuaClient(std::string endpoint, std::string appid, std::string secret);
private:
  OtsShihua(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-10-26"),
  host_(host) {}
public:
  int DeleteInstance(const DeleteInstanceRequestType& req,
          DeleteInstanceResponseType* resp,
          AliOtsShihuaErrorInfo* error_info);

  int GetInstance(const GetInstanceRequestType& req,
          GetInstanceResponseType* resp,
          AliOtsShihuaErrorInfo* error_info);

  int InsertInstance(const InsertInstanceRequestType& req,
          InsertInstanceResponseType* resp,
          AliOtsShihuaErrorInfo* error_info);

  int ListInstance(const ListInstanceRequestType& req,
          ListInstanceResponseType* resp,
          AliOtsShihuaErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
