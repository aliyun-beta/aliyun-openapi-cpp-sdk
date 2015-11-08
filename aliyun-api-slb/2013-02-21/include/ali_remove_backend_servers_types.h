#ifndef ALI_REMOVE_BACKEND_SERVERS_TYPESH
#define ALI_REMOVE_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct RemoveBackendServersRequestType {
  std::string load_balancer_id;
  std::string backend_servers;
  std::string host_id;
  std::string owner_account;
};
struct RemoveBackendServersBackendServerType {
  std::string server_id;
  int weight;
};
struct RemoveBackendServersResponseType {
  std::vector<RemoveBackendServersBackendServerType> backend_servers;
  std::string load_balancer_id;
};
} // end namespace
#endif
