#include "ali_ots.h"
#include "ali_api_core.h"
namespace aliyun{
 Ots* Ots::CreateOtsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ots");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ots(host_name, appid, secret);
}
} // end namespace
