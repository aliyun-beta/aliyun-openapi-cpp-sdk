#include "ali_pts.h"
#include "ali_api_core.h"
namespace aliyun{
 PTS* PTS::CreatePTSClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "PTS");
    if(host_name.empty()) {
      return NULL;
    }
    return new PTS(host_name, appid, secret);
}
} // end namespace
