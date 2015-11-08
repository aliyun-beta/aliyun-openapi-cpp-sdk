#include "ali_cdn.h"
#include "ali_api_core.h"
namespace aliyun{
 Cdn* Cdn::CreateCdnClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Cdn");
    if(host_name.empty()) {
      return NULL;
    }
    return new Cdn(host_name, appid, secret);
}
} // end namespace
