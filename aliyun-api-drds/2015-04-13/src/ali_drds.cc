#include "ali_drds.h"
#include "ali_api_core.h"
namespace aliyun{
 Drds* Drds::CreateDrdsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Drds");
    if(host_name.empty()) {
      return NULL;
    }
    return new Drds(host_name, appid, secret);
}
} // end namespace
