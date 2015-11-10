#ifndef ALI_PUSHH
#define ALI_PUSHH
#include <string>
#include "ali_push_batch_get_devices_info_types.h"
#include "ali_push_push_byte_message_types.h"
#include "ali_push_revert_rpc_types.h"
namespace aliyun {
struct PushErrorInfo {
  std::string request_id;
  std::string code;
  std::string message;
  std::string host_id;
};
class Push {
public:
  static Push* CreatePushClient(std::string endpoint, std::string appid, std::string secret);
private:
  Push(std::string host, std::string appid, std::string secret) : 
  appid_(appid),
  secret_(secret),
  version_("2015-08-27"),
  host_(host) {}
public:
  int BatchGetDevicesInfo(const PushBatchGetDevicesInfoRequestType& req,
          PushBatchGetDevicesInfoResponseType* resp,
          PushErrorInfo* error_info);

  int PushByteMessage(const PushPushByteMessageRequestType& req,
          PushPushByteMessageResponseType* resp,
          PushErrorInfo* error_info);

  int RevertRpc(const PushRevertRpcRequestType& req,
          PushRevertRpcResponseType* resp,
          PushErrorInfo* error_info);

private:
  const std::string appid_;
  const std::string secret_;
  const std::string version_;
  const std::string host_;
};  //end class
} // end namespace
#endif
