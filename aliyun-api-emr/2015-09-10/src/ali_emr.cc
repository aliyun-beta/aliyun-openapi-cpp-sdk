#include "ali_emr.h"
#include "ali_api_core.h"
namespace aliyun{
 Emr* Emr::CreateEmrClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Emr");
    if(host_name.empty()) {
      return NULL;
    }
    return new Emr(host_name, appid, secret);
}
} // end namespace
