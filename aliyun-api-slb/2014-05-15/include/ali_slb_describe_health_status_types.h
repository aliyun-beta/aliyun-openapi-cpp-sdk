#ifndef ALI_SLB_DESCRIBE_HEALTH_STATUS_TYPESH
#define ALI_SLB_DESCRIBE_HEALTH_STATUS_TYPESH
#include <stdio.h>
#include <string>
#include <vector>
namespace aliyun {
struct SlbDescribeHealthStatusRequestType {
  std::string owner_id;
  std::string resource_owner_account;
  std::string resource_owner_id;
  std::string load_balancer_id;
  std::string listener_port;
  std::string owner_account;
};
struct SlbDescribeHealthStatusBackendServerType {
  std::string server_id;
  std::string server_health_status;
};
struct SlbDescribeHealthStatusResponseType {
  std::vector<SlbDescribeHealthStatusBackendServerType> backend_servers;
};
} // end namespace
#endif
