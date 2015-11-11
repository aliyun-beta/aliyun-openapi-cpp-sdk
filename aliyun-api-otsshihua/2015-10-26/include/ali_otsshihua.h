#ifndef ALI_OTS_SHIHUAH
#define ALI_OTS_SHIHUAH
#include <string>
#include "ali_otsshihua_delete_instance_types.h"
#include "ali_otsshihua_get_instance_types.h"
#include "ali_otsshihua_insert_instance_types.h"
#include "ali_otsshihua_list_instance_types.h"
namespace aliyun {
struct OtsShihuaErrorInfo {
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
  int DeleteInstance(const OtsShihuaDeleteInstanceRequestType& req,
          OtsShihuaDeleteInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

  int GetInstance(const OtsShihuaGetInstanceRequestType& req,
          OtsShihuaGetInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

  int InsertInstance(const OtsShihuaInsertInstanceRequestType& req,
          OtsShihuaInsertInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

  int ListInstance(OtsShihuaListInstanceResponseType* resp,
          OtsShihuaErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
