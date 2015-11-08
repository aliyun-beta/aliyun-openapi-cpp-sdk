#include "ali_ram.h"
#include "ali_api_core.h"
namespace aliyun{
 Ram* Ram::CreateRamClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ram");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ram(host_name, appid, secret);
}
} // end namespace
