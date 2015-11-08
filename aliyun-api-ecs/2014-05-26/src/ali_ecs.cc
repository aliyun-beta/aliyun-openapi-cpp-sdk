#include "ali_ecs.h"
#include "ali_api_core.h"
namespace aliyun{
 Ecs* Ecs::CreateEcsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Ecs");
    if(host_name.empty()) {
      return NULL;
    }
    return new Ecs(host_name, appid, secret);
}
} // end namespace
