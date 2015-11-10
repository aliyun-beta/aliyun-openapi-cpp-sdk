#ifndef ALI_SLB_DESCRIBE_BACKEND_SERVERS_TYPESH
#define ALI_SLB_DESCRIBE_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeBackendServersRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string host_id;
  std::string owner_account;
};
struct SlbDescribeBackendServersBackendServerType {
  std::string server_id;
  std::string server_health_status;
};
struct SlbDescribeBackendServersListenerType {
  std::vector<SlbDescribeBackendServersBackendServerType> backend_servers;
  int listener_port;
};
struct SlbDescribeBackendServersResponseType {
  std::vector<SlbDescribeBackendServersListenerType> listeners;
};
} // end namespace
#endif
