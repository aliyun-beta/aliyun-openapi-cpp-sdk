#include "ali_oss_admin.h"
#include "ali_api_core.h"
namespace aliyun{
 OssAdmin* OssAdmin::CreateOssAdminClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "OssAdmin");
    if(host_name.empty()) {
      return NULL;
    }
    return new OssAdmin(host_name, appid, secret);
}
} // end namespace
