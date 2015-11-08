#include "ali_ace.h"
#include "ali_api_core.h"
namespace aliyun{
 Ace* Ace::CreateAceClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ace");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ace(host_name, appid, secret);
}
} // end namespace
