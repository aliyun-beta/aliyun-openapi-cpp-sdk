#include "ali_ubsmsinner.h"
#include "ali_api_core.h"
namespace aliyun{
 Ubsmsinner* Ubsmsinner::CreateUbsmsinnerClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ubsmsinner");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ubsmsinner(host_name, appid, secret);
}
} // end namespace
