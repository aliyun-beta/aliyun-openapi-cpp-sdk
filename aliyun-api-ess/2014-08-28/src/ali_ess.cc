#include "ali_ess.h"
#include "ali_api_core.h"
namespace aliyun{
 Ess* Ess::CreateEssClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ess");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ess(host_name, appid, secret);
}
} // end namespace
