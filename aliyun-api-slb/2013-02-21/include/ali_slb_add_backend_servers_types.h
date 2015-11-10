#ifndef ALI_SLB_ADD_BACKEND_SERVERS_TYPESH
#define ALI_SLB_ADD_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbAddBackendServersRequestType {
  std::string load_balancer_id;
  std::string backend_servers;
  std::string host_id;
  std::string owner_account;
};
struct SlbAddBackendServersBackendServerType {
  std::string server_id;
  int weight;
};
struct SlbAddBackendServersResponseType {
  std::vector<SlbAddBackendServersBackendServerType> backend_servers;
  std::string load_balancer_id;
};
} // end namespace
#endif
