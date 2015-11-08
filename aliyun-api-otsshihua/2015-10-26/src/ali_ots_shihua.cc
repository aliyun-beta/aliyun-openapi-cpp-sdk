#include "ali_ots_shihua.h"
#include "ali_api_core.h"
namespace aliyun{
 OtsShihua* OtsShihua::CreateOtsShihuaClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "OtsShihua");
    if(host_name.empty()) {
      return NULL;
    }
    return new OtsShihua(host_name, appid, secret);
}
} // end namespace
