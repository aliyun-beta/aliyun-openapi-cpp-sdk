#include <string.h>
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
  Alert::Alert(std::string host, std::string appid, std::string secret) {
    appid_ = strdup(appid.c_str());
    secret_ = strdup(secret.c_str());
    version_ = strdup("2015-08-15");
    use_tls_ = false;
    support_tls_ = false;
    host_ = strdup(host.c_str());
    proxy_host_ = NULL;
  }
  Alert::~Alert() {
    free(appid_);
    free(secret_);
    free(host_);
    if(proxy_host_) free(proxy_host_);
  }
} // end namespace
