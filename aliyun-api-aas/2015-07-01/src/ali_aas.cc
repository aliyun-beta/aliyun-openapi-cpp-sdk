#include "ali_aas.h"
#include "ali_api_core.h"
namespace aliyun{
 Aas* Aas::CreateAasClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Aas");
    if(host_name.empty()) {
      return NULL;
    }
    return new Aas(host_name, appid, secret);
}
} // end namespace
