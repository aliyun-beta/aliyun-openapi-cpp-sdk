#ifndef ALI_DESCRIBE_HEALTH_STATUS_TYPESH
#define ALI_DESCRIBE_HEALTH_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct DescribeHealthStatusRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct DescribeHealthStatusBackendServerType {
  std::string server_id;
  std::string server_health_status;
};
struct DescribeHealthStatusResponseType {
  std::vector<DescribeHealthStatusBackendServerType> backend_servers;
};
} // end namespace
#endif
