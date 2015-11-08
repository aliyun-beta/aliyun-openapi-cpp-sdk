#include "ali_rds_region.h"
#include "ali_api_core.h"
namespace aliyun{
 RdsRegion* RdsRegion::CreateRdsRegionClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "RdsRegion");
    if(host_name.empty()) {
      return NULL;
    }
    return new RdsRegion(host_name, appid, secret);
}
} // end namespace
