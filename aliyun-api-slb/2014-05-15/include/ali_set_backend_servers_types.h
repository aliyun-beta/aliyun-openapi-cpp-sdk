#ifndef ALI_SET_BACKEND_SERVERS_TYPESH
#define ALI_SET_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SetBackendServersRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string backend_servers;
  std::string owner_account;
};
struct SetBackendServersBackendServerType {
  std::string server_id;
  std::string weight;
};
struct SetBackendServersResponseType {
  std::vector<SetBackendServersBackendServerType> backend_servers;
  std::string load_balancer_id;
};
} // end namespace
#endif
