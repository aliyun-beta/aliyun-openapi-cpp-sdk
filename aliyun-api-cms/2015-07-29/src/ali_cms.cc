#include "ali_cms.h"
#include "ali_api_core.h"
namespace aliyun{
 Cms* Cms::CreateCmsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Cms");
    if(host_name.empty()) {
      return NULL;
    }
    return new Cms(host_name, appid, secret);
}
} // end namespace
