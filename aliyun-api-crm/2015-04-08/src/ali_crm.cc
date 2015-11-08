#include "ali_crm.h"
#include "ali_api_core.h"
namespace aliyun{
 Crm* Crm::CreateCrmClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Crm");
    if(host_name.empty()) {
      return NULL;
    }
    return new Crm(host_name, appid, secret);
}
} // end namespace
