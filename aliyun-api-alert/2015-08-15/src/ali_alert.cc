#include "ali_alert.h"
#include "ali_api_core.h"
namespace aliyun{
 Alert* Alert::CreateAlertClient(std::string endpoint, std::string appid, std::string secret) {
    std::string host_name = AliGetEndpointHost(endpoint, "Alert");
    if(host_name.empty()) {
      return NULL;
    }
    return new Alert(host_name, appid, secret);
}
} // end namespace
