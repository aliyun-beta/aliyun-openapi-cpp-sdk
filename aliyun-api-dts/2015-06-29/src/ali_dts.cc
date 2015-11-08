#include "ali_dts.h"
#include "ali_api_core.h"
namespace aliyun{
 Dts* Dts::CreateDtsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Dts");
    if(host_name.empty()) {
      return NULL;
    }
    return new Dts(host_name, appid, secret);
}
} // end namespace
