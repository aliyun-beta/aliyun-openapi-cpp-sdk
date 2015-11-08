#include "ali_risk.h"
#include "ali_api_core.h"
namespace aliyun{
 Risk* Risk::CreateRiskClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Risk");
    if(host_name.empty()) {
      return NULL;
    }
    return new Risk(host_name, appid, secret);
}
} // end namespace
