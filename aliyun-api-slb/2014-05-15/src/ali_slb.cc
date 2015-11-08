#include "ali_slb.h"
#include "ali_api_core.h"
namespace aliyun{
 Slb* Slb::CreateSlbClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Slb");
    if(host_name.empty()) {
      return NULL;
    }
    return new Slb(host_name, appid, secret);
}
} // end namespace
