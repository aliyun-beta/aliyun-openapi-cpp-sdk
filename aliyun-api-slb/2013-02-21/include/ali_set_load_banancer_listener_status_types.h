#ifndef ALI_SET_LOAD_BANANCER_LISTENER_STATUS_TYPESH
#define ALI_SET_LOAD_BANANCER_LISTENER_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetLoadBanancerListenerStatusRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string listener_status;
  std::string host_id;
  std::string owner_account;
};
struct SetLoadBanancerListenerStatusResponseType {
};
} // end namespace
#endif
