#include "ali_yundun.h"
#include "ali_api_core.h"
namespace aliyun{
 Yundun* Yundun::CreateYundunClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Yundun");
    if(host_name.empty()) {
      return NULL;
    }
    return new Yundun(host_name, appid, secret);
}
} // end namespace
