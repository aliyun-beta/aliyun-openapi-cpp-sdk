#include "ali_oms.h"
#include "ali_api_core.h"
namespace aliyun{
 Oms* Oms::CreateOmsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Oms");
    if(host_name.empty()) {
      return NULL;
    }
    return new Oms(host_name, appid, secret);
}
} // end namespace
