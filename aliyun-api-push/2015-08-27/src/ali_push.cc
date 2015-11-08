#include "ali_push.h"
#include "ali_api_core.h"
namespace aliyun{
 Push* Push::CreatePushClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Push");
    if(host_name.empty()) {
      return NULL;
    }
    return new Push(host_name, appid, secret);
}
} // end namespace
