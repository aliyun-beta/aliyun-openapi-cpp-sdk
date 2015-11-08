#include "ali_ocs.h"
#include "ali_api_core.h"
namespace aliyun{
 Ocs* Ocs::CreateOcsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ocs");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ocs(host_name, appid, secret);
}
} // end namespace
