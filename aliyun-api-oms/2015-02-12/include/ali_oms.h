#ifndef ALI_OMSH
#define ALI_OMSH
#include <string>
#include "ali_get_product_define_types.h"
#include "ali_get_user_data_types.h"
namespace aliyun {
struct AliOmsErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Oms {
public:
  static Oms* CreateOmsClient(std::string endpoint, std::string appid, std::string secret);
private:
  Oms(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-02-12"),
  host_(host) {}
public:
  int GetProductDefine(const GetProductDefineRequestType& req,
          GetProductDefineResponseType* resp,
          AliOmsErrorInfo* error_info);

  int GetUserData(const GetUserDataRequestType& req,
          GetUserDataResponseType* resp,
          AliOmsErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
