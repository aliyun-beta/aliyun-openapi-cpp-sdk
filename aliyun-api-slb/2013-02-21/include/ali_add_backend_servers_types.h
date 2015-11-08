#ifndef ALI_ADD_BACKEND_SERVERS_TYPESH
#define ALI_ADD_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct AddBackendServersRequestType {
  std::string load_balancer_id;
  std::string backend_servers;
  std::string host_id;
  std::string owner_account;
};
struct AddBackendServersBackendServerType {
  std::string server_id;
  int weight;
};
struct AddBackendServersResponseType {
  std::vector<AddBackendServersBackendServerType> backend_servers;
  std::string load_balancer_id;
};
} // end namespace
#endif
