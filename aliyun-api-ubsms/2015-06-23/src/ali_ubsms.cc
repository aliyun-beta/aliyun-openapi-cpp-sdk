#include "ali_ubsms.h"
#include "ali_api_core.h"
namespace aliyun{
 Ubsms* Ubsms::CreateUbsmsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ubsms");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ubsms(host_name, appid, secret);
}
} // end namespace
