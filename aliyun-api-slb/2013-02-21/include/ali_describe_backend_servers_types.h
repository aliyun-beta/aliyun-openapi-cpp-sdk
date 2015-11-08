#ifndef ALI_DESCRIBE_BACKEND_SERVERS_TYPESH
#define ALI_DESCRIBE_BACKEND_SERVERS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeBackendServersRequestType {
  std::string load_balancer_id;
  std::string listener_port;
  std::string host_id;
  std::string owner_account;
};
struct DescribeBackendServersBackendServerType {
  std::string server_id;
  std::string server_health_status;
};
struct DescribeBackendServersListenerType {
  std::vector<DescribeBackendServersBackendServerType> backend_servers;
  int listener_port;
};
struct DescribeBackendServersResponseType {
  std::vector<DescribeBackendServersListenerType> listeners;
};
} // end namespace
#endif
