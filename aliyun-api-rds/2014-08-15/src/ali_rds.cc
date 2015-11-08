#include "ali_rds.h"
#include "ali_api_core.h"
namespace aliyun{
 Rds* Rds::CreateRdsClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Rds");
    if(host_name.empty()) {
      return NULL;
    }
    return new Rds(host_name, appid, secret);
}
} // end namespace
