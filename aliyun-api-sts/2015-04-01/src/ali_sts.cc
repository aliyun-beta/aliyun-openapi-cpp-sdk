#include "ali_sts.h"
#include "ali_api_core.h"
namespace aliyun{
 Sts* Sts::CreateStsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Sts");
    if(host_name.empty()) {
      return NULL;
    }
    return new Sts(host_name, appid, secret);
}
} // end namespace
