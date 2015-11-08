#include "ali_ons.h"
#include "ali_api_core.h"
namespace aliyun{
 Ons* Ons::CreateOnsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ons");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ons(host_name, appid, secret);
}
} // end namespace
