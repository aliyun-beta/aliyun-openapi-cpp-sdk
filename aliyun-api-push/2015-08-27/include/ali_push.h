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
  use_tls_(true),
  support_tls_(true),
  host_(host) {}
public:
  void SetUseTls(bool use_tls = true) {  if(support_tls_) use_tls_ = use_tls;  }
  bool GetUseTls() {  return use_tls_;  }
  bool GetSupportTls() {  return support_tls_;  }
  void SetRegionId(std::string region_id) {  this->region_id_ = region_id; }
  std::string GetRegionId() {  return this->region_id_;  }
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
  const bool support_tls_;
  bool use_tls_;
  std::string region_id_;
};  //end class
} // end namespace
#endif
