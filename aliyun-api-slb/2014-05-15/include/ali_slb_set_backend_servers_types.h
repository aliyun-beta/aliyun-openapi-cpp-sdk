#ifndef ALI_SLB_SET_BACKEND_SERVERS_TYPESH
#define ALI_SLB_SET_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbSetBackendServersRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string backend_servers;
  std::string owner_account;
};
struct SlbSetBackendServersBackendServerType {
  std::string server_id;
  std::string weight;
};
struct SlbSetBackendServersResponseType {
  std::vector<SlbSetBackendServersBackendServerType> backend_servers;
  std::string load_balancer_id;
};
} // end namespace
#endif
