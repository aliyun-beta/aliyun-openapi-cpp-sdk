#include "ali_aceops.h"
#include "ali_api_core.h"
namespace aliyun{
 Aceops* Aceops::CreateAceopsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Aceops");
    if(host_name.empty()) {
      return NULL;
    }
    return new Aceops(host_name, appid, secret);
}
} // end namespace
