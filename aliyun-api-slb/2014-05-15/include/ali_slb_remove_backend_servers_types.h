#ifndef ALI_SLB_REMOVE_BACKEND_SERVERS_TYPESH
#define ALI_SLB_REMOVE_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbRemoveBackendServersRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string backend_servers;
  std::string owner_account;
};
struct SlbRemoveBackendServersBackendServerType {
  std::string server_id;
  int weight;
};
struct SlbRemoveBackendServersResponseType {
  std::vector<SlbRemoveBackendServersBackendServerType> backend_servers;
  std::string load_balancer_id;
};
} // end namespace
#endif
