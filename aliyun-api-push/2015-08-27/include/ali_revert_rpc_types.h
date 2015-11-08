#ifndef ALI_REVERT_RPC_TYPESH
#define ALI_REVERT_RPC_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RevertRpcRequestType {
  std::string app_id;
  std::string device_id;
  std::string rpc_content;
  std::string time_out;
};
struct RevertRpcResponseType {
  std::string rpc_code;
  std::string response_content;
};
} // end namespace
#endif
