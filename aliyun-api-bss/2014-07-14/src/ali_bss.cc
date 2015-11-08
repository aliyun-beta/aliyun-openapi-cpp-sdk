#include "ali_bss.h"
#include "ali_api_core.h"
namespace aliyun{
 Bss* Bss::CreateBssClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Bss");
    if(host_name.empty()) {
      return NULL;
    }
    return new Bss(host_name, appid, secret);
}
} // end namespace
